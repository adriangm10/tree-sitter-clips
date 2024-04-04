const DIGIT = /[0-9]/;

const INTEGER = seq(/[+-]?/, repeat1(DIGIT));

const EXPONENT = seq(/[eE]/, INTEGER);

const FLOAT = choice(
  seq(INTEGER, EXPONENT),
  seq(INTEGER, ".", optional(EXPONENT)),
  seq(".", repeat1(DIGIT), optional(EXPONENT)),
  seq(INTEGER, ".", repeat1(DIGIT), optional(EXPONENT)),
);

const NUMBER = token(choice(INTEGER, FLOAT));

const WHITE_SPACE_CHAR = /[\t\n\r\f ]/;

const WHITE_SPACE = token(repeat1(WHITE_SPACE_CHAR));

const SYMBOL = token(seq(/[^$?&()|~;\s]/, repeat(/[^&()|~;<\s]/)));

const STRING = token(seq('"', repeat(/[^"]/), '"'));

const VARIABLE_SYMBOL = token(seq(/[a-zA-Z]/, repeat(/[^&()|~;<\s]/)));

module.exports = grammar({
  name: 'clips',

  conflicts: ($, original) => [...original,
    [$.ordered_pattern_CE, $.template_pattern_CE],
    [$.rhs_slot, $.function_call],
    [$._expression, $._rhs_field],
  ],

  extras: $ => [
    $._ws,
    $.comment
  ],

  rules: {
    program: $ => repeat(choice($._construct, $._gap)),

    _construct: $ => choice(
      $.deffacts_construct,
      $.deftemplate_construct,
      $.defrule_construct,
      $.defglobal_construct,
      $.deffunction_construct,
      $.defgeneric_construct,
      $.defmethod_construct,
    ),

    _gap: $ => choice(
      $.comment,
      $._ws,
    ),

    _expression: $ => choice(
      $._variable,
      $._constant,
      $.function_call,
      $.loop_for_count,
      $.if_then_else,
      $.assert,
      $.do_for_fact,
      $.do_for_all_facts,
    ),

    _ws: _ => WHITE_SPACE,

    str_lit: _ => STRING,

    integer: _ => token(INTEGER),
    float: _ => token(FLOAT),
    number: _ => NUMBER,

    symbol: _ => SYMBOL,

    variable_symbol: _ => VARIABLE_SYMBOL,

    instance_name: _ => token(seq("[", SYMBOL, "]")),

    _lexeme: $ => choice($.symbol, $.str_lit),

    _constant: $ => choice(
      $.symbol,
      $.str_lit,
      $.number,
      $.instance_name
    ),

    comment: _ => token(/;.*\n/),

    single_field_variable: _ => token(seq("?", VARIABLE_SYMBOL)),

    multifield_variable: _ => token(seq("$?", VARIABLE_SYMBOL)),

    global_variable: _ => token(seq("?*", SYMBOL, "*")),

    _variable: $ => choice(
      $.single_field_variable,
      $.multifield_variable,
      $.global_variable,
    ),

    function_call: $ => seq(
      "(",
      field("name", $.symbol),
      repeat($._expression),
      ")"
    ),

    loop_for_count: $ => seq(
      "(",
      "loop-for-count",
      choice($._expression, $.range_spec),
      optional("do"),
      repeat($._expression),
      ")",
    ),

    range_spec: $ => seq(
      "(",
      $.single_field_variable,
      optional($._expression),
      $._expression,
      ")",
    ),

    if_then_else: $ => seq("(",
      "if",
      choice($.function_call, $._variable),
      "then",
      repeat($._expression),
      optional(seq("else", repeat($._expression))),
      ")",
    ),

    assert: $ => seq("(",
      "assert",
      repeat1($._rhs_pattern),
      ")",
    ),

    do_for_fact: $ => seq("(",
      "do-for-fact",
      $.fact_set_template,
      choice($.boolean_symbol, $.function_call, $._variable),
      repeat($._expression),
      ")",
    ),

    do_for_all_facts: $ => seq("(",
      "do-for-all-facts",
      $.fact_set_template,
      choice($.boolean_symbol, $.function_call, $._variable),
      repeat($._expression),
      ")",
    ),

    fact_set_template: $ => seq("(",
      repeat1($.fact_set_member_template),
      ")",
    ),

    fact_set_member_template: $ => seq("(",
      field("var", $.single_field_variable),
      field("template_name", repeat1($.symbol)),
      ")",
    ),

    deffacts_construct: $ => seq("(", "deffacts",
      field("name", $.symbol),
      optional(field("comment", $.str_lit)),
      repeat($._rhs_pattern),
      ")"
    ),
    // NOTE: hola
    // hola
    _rhs_pattern: $ => choice($.ordered_rhs_pattern, $.template_rhs_pattern),
    ordered_rhs_pattern: $ => seq("(", $.symbol, repeat1($._rhs_field), ")"),
    template_rhs_pattern: $ => seq("(", field("temp_name", $.symbol), repeat($.rhs_slot), ")"),
    rhs_slot: $ => seq("(", field("slot_name", $.symbol), repeat($._rhs_field), ")"),
    _rhs_field: $ => choice($._variable, $._constant, $.function_call),

    deftemplate_construct: $ => seq("(", "deftemplate",
      field("name", $.symbol),
      optional(field("comment", $.str_lit)),
      repeat($._slot_definition),
      ")"
    ),
    _slot_definition: $ => choice($.single_slot_definition, $.multislot_definition),
    single_slot_definition: $ => seq("(", "slot", field("slot_name", $.symbol), repeat($._template_attribute), ")"),
    multislot_definition: $ => seq("(", "multislot", field("slot_name", $.symbol), repeat($._template_attribute), ")"),
    _template_attribute: $ => choice($.default_attribute, $._constraint_attribute),

    default_attribute: $ => choice(
      seq("(", "default", choice("?DERIVE", "?NONE", repeat($._expression)), ")"),
      seq("(", "default-dynamic", repeat($._expression), ")"),
    ),

    _constraint_attribute: $ => choice(
      $.type_attribute,
      $.allowed_constant_attribute,
      $.range_attribute,
      $.cardinality_attribute
    ),

    type_attribute: $ => seq("(", "type", $.type_specification, ")"),
    type_specification: $ => choice(repeat1($.allowed_type), "?VARIABLE"),

    allowed_type: _ => token(choice(
      "SYMBOL",
      "STRING",
      "LEXEME",
      "INTEGER",
      "FLOAT",
      "NUMBER",
      "INSTANCE-NAME",
      "INSTANCE-ADDRESS",
      "INSTANCE",
      "EXTERNAL-ADDRESS",
      "FACT-ADDRESS",
    )),

    boolean_symbol: _ => token(choice("TRUE", "FALSE")),

    allowed_constant_attribute: $ => choice(
      seq("(", "allowed-symbols", $.symbol_list, ")"),
      seq("(", "allowed-strings", $.string_list, ")"),
      seq("(", "allowed-lexemes", $.lexeme_list, ")"),
      seq("(", "allowed-integers", $.integer_list, ")"),
      seq("(", "allowed-floats", $.float_list, ")"),
      seq("(", "allowed-numbers", $.number_list, ")"),
      seq("(", "allowed-instance-names", $.instance_list, ")"),
      seq("(", "allowed-classes", $.class_name_list, ")"),
      seq("(", "allowed-values", $.value_list, ")"),
    ),

    symbol_list: $ => choice(repeat1($.symbol), "?VARIABLE"),
    string_list: $ => choice(repeat1($.str_lit), "?VARIABLE"),
    lexeme_list: $ => choice(repeat1($._lexeme), "?VARIABLE"),
    integer_list: $ => choice(repeat1($.integer), "?VARIABLE"),
    float_list: $ => choice(repeat1($.float), "?VARIABLE"),
    number_list: $ => choice(repeat1($.number), "?VARIABLE"),
    instance_name_list: $ => choice(repeat1($.instance_name), "?VARIABLE"),
    class_name_list: $ => choice(repeat1($.symbol), "?VARIABLE"),
    instance_list: $ => choice(repeat1($.symbol), "?VARIABLE"),
    value_list: $ => choice(repeat1($._constant), "?VARIABLE"),

    range_attribute: $ => seq("(", "range", $.range_specification, $.range_specification, ")"),
    range_specification: $ => choice($.number, "?VARIABLE"),

    cardinality_attribute: $ => seq("(", "cardinality", $.cardinality_specification, $.cardinality_specification, ")"),
    cardinality_specification: $ => choice($.integer, "?VARIABLE"),

    defrule_construct: $ => seq("(", "defrule",
      field("name", $.symbol),
      field("comment", optional($.str_lit)),
      optional($.declaration),
      repeat($._conditional_element),
      "=>",
      repeat($._expression),
      ")"
    ),

    declaration: $ => seq("(", "declare", repeat1($.rule_property), ")"),
    rule_property: $ => choice(
      seq("(", "salience", $._expression, ")"),
      seq("(", "auto-focus", $.boolean_symbol, ")"),
    ),

    _conditional_element: $ => choice(
      $._pattern_CE,
      $.assigned_pattern_CE,
      $.not_CE,
      $.and_CE,
      $.or_CE,
      $.logical_CE,
      $.test_CE,
      $.exists_CE,
      $.forall_CE,
    ),
    _pattern_CE: $ => choice(
      $.template_pattern_CE,
      $.ordered_pattern_CE,
      $.object_pattern_CE,
    ),
    assigned_pattern_CE: $ => seq($.single_field_variable, "<-", $._pattern_CE),
    not_CE: $ => seq("(", "not", $._conditional_element, ")"),
    and_CE: $ => seq("(", "and", repeat1($._conditional_element), ")"),
    or_CE: $ => seq("(", "or", repeat1($._conditional_element), ")"),
    logical_CE: $ => seq("(", "logical", repeat1($._conditional_element), ")"),
    test_CE: $ => seq("(", "test", $.function_call, ")"),
    exists_CE: $ => seq("(", "exists", repeat1($._conditional_element), ")"),
    forall_CE: $ => seq("(", "forall", $._conditional_element, repeat1($._conditional_element), ")"),
    ordered_pattern_CE: $ => seq("(", $.symbol, repeat($.constraint), ")"),
    template_pattern_CE: $ => seq("(", field("name", $.symbol), repeat($.lhs_slot), ")"),
    object_pattern_CE: $ => seq("(", "object", repeat($.attribute_constraint), ")"),

    attribute_constraint: $ => choice(
      seq("(", "is-a", $.constraint, ")"),
      seq("(", "name", $.constraint, ")"),
      seq("(", field("slot_name", $.symbol), repeat($.constraint), ")"),
    ),

    lhs_slot: $ => seq("(", field("slot_name", $.symbol), repeat($.constraint), ")"),

    constraint: $ => choice(
      "?",
      "$?",
      $.connected_constraint
    ),

    connected_constraint: $ => choice(
      $.single_constraint,
      seq($.single_constraint, "&", $.connected_constraint),
      seq($.single_constraint, "|", $.connected_constraint),
    ),

    single_constraint: $ => choice(
      $.term,
      seq("~", $.term),
    ),

    term: $ => choice(
      $._constant,
      $.single_field_variable,
      $.multifield_variable,
      seq(":", $.function_call),
      seq("=", $.function_call),
    ),

    defglobal_construct: $ => seq("(", "defglobal",
      field("module_name", optional($.symbol)),
      repeat($._global_assignment),
      ")"
    ),
    _global_assignment: $ => seq($.global_variable, "=", $._expression),

    deffunction_construct: $ => seq("(", "deffunction",
      field("name", $.symbol),
      field("comment", optional($.str_lit)),
      $.parameter_list,
      repeat($._expression),
      ")",
    ),

    parameter_list: $ => seq(
      "(",
      optional(choice(
        seq(
          repeat1($.single_field_variable),
          optional($.multifield_variable),
        ),
        $.multifield_variable)),
      ")",
    ),

    defgeneric_construct: $ => seq("(", "defgeneric",
      field("name", $.symbol),
      field("comment", optional($.str_lit)),
      ")"
    ),

    defmethod_construct: $ => seq("(",
      "defmethod",
      field("name", $.symbol),
      field("index", optional($.integer)),
      field("comment", optional($.str_lit)),
      "(",
      repeat($.parameter_restriction),
      optional($.wildcard_parameter_restriction),
      ")",
      repeat($._expression),
      ")"
    ),
    parameter_restriction: $ => choice(
      field("name", $.single_field_variable),
      seq("(", field("param", $.single_field_variable), field("type", repeat($.symbol)), optional($.query), ")")
    ),
    wildcard_parameter_restriction: $ => choice(
      field("name", $.multifield_variable),
      seq("(", field("param", $.multifield_variable), field("type", repeat($.symbol)), optional($.query), ")"),
    ),
    query: $ => choice($.global_variable, $.function_call),
  }
});
