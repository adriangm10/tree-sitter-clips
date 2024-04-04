#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 487
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  sym__ws = 1,
  sym_str_lit = 2,
  sym_integer = 3,
  sym_float = 4,
  sym_number = 5,
  sym_symbol = 6,
  sym_instance_name = 7,
  sym_comment = 8,
  sym_single_field_variable = 9,
  sym_multifield_variable = 10,
  sym_global_variable = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_loop_DASHfor_DASHcount = 14,
  anon_sym_do = 15,
  anon_sym_if = 16,
  anon_sym_then = 17,
  anon_sym_else = 18,
  anon_sym_assert = 19,
  anon_sym_do_DASHfor_DASHfact = 20,
  anon_sym_do_DASHfor_DASHall_DASHfacts = 21,
  anon_sym_deffacts = 22,
  anon_sym_deftemplate = 23,
  anon_sym_slot = 24,
  anon_sym_multislot = 25,
  anon_sym_default = 26,
  anon_sym_QMARKDERIVE = 27,
  anon_sym_QMARKNONE = 28,
  anon_sym_default_DASHdynamic = 29,
  anon_sym_type = 30,
  anon_sym_QMARKVARIABLE = 31,
  sym_allowed_type = 32,
  sym_boolean_symbol = 33,
  anon_sym_allowed_DASHsymbols = 34,
  anon_sym_allowed_DASHstrings = 35,
  anon_sym_allowed_DASHlexemes = 36,
  anon_sym_allowed_DASHintegers = 37,
  anon_sym_allowed_DASHfloats = 38,
  anon_sym_allowed_DASHnumbers = 39,
  anon_sym_allowed_DASHinstance_DASHnames = 40,
  anon_sym_allowed_DASHclasses = 41,
  anon_sym_allowed_DASHvalues = 42,
  anon_sym_range = 43,
  anon_sym_cardinality = 44,
  anon_sym_defrule = 45,
  anon_sym_EQ_GT = 46,
  anon_sym_declare = 47,
  anon_sym_salience = 48,
  anon_sym_auto_DASHfocus = 49,
  anon_sym_LT_DASH = 50,
  anon_sym_not = 51,
  anon_sym_and = 52,
  anon_sym_or = 53,
  anon_sym_logical = 54,
  anon_sym_test = 55,
  anon_sym_exists = 56,
  anon_sym_forall = 57,
  anon_sym_object = 58,
  anon_sym_is_DASHa = 59,
  anon_sym_name = 60,
  anon_sym_QMARK = 61,
  anon_sym_DOLLAR_QMARK = 62,
  anon_sym_AMP = 63,
  anon_sym_PIPE = 64,
  anon_sym_TILDE = 65,
  anon_sym_COLON = 66,
  anon_sym_EQ = 67,
  anon_sym_defglobal = 68,
  anon_sym_deffunction = 69,
  anon_sym_defgeneric = 70,
  anon_sym_defmethod = 71,
  sym_program = 72,
  sym__construct = 73,
  sym__gap = 74,
  sym__expression = 75,
  sym__lexeme = 76,
  sym__constant = 77,
  sym__variable = 78,
  sym_function_call = 79,
  sym_loop_for_count = 80,
  sym_range_spec = 81,
  sym_if_then_else = 82,
  sym_assert = 83,
  sym_do_for_fact = 84,
  sym_do_for_all_facts = 85,
  sym_fact_set_template = 86,
  sym_fact_set_member_template = 87,
  sym_deffacts_construct = 88,
  sym__rhs_pattern = 89,
  sym_ordered_rhs_pattern = 90,
  sym_template_rhs_pattern = 91,
  sym_rhs_slot = 92,
  sym__rhs_field = 93,
  sym_deftemplate_construct = 94,
  sym__slot_definition = 95,
  sym_single_slot_definition = 96,
  sym_multislot_definition = 97,
  sym__template_attribute = 98,
  sym_default_attribute = 99,
  sym__constraint_attribute = 100,
  sym_type_attribute = 101,
  sym_type_specification = 102,
  sym_allowed_constant_attribute = 103,
  sym_symbol_list = 104,
  sym_string_list = 105,
  sym_lexeme_list = 106,
  sym_integer_list = 107,
  sym_float_list = 108,
  sym_number_list = 109,
  sym_class_name_list = 110,
  sym_instance_list = 111,
  sym_value_list = 112,
  sym_range_attribute = 113,
  sym_range_specification = 114,
  sym_cardinality_attribute = 115,
  sym_cardinality_specification = 116,
  sym_defrule_construct = 117,
  sym_declaration = 118,
  sym_rule_property = 119,
  sym__conditional_element = 120,
  sym__pattern_CE = 121,
  sym_assigned_pattern_CE = 122,
  sym_not_CE = 123,
  sym_and_CE = 124,
  sym_or_CE = 125,
  sym_logical_CE = 126,
  sym_test_CE = 127,
  sym_exists_CE = 128,
  sym_forall_CE = 129,
  sym_ordered_pattern_CE = 130,
  sym_template_pattern_CE = 131,
  sym_object_pattern_CE = 132,
  sym_attribute_constraint = 133,
  sym_lhs_slot = 134,
  sym_constraint = 135,
  sym_connected_constraint = 136,
  sym_single_constraint = 137,
  sym_term = 138,
  sym_defglobal_construct = 139,
  sym__global_assignment = 140,
  sym_deffunction_construct = 141,
  sym_parameter_list = 142,
  sym_defgeneric_construct = 143,
  sym_defmethod_construct = 144,
  sym_parameter_restriction = 145,
  sym_wildcard_parameter_restriction = 146,
  sym_query = 147,
  aux_sym_program_repeat1 = 148,
  aux_sym_function_call_repeat1 = 149,
  aux_sym_assert_repeat1 = 150,
  aux_sym_fact_set_template_repeat1 = 151,
  aux_sym_fact_set_member_template_repeat1 = 152,
  aux_sym_ordered_rhs_pattern_repeat1 = 153,
  aux_sym_template_rhs_pattern_repeat1 = 154,
  aux_sym_deftemplate_construct_repeat1 = 155,
  aux_sym_single_slot_definition_repeat1 = 156,
  aux_sym_type_specification_repeat1 = 157,
  aux_sym_string_list_repeat1 = 158,
  aux_sym_lexeme_list_repeat1 = 159,
  aux_sym_integer_list_repeat1 = 160,
  aux_sym_float_list_repeat1 = 161,
  aux_sym_number_list_repeat1 = 162,
  aux_sym_value_list_repeat1 = 163,
  aux_sym_defrule_construct_repeat1 = 164,
  aux_sym_declaration_repeat1 = 165,
  aux_sym_ordered_pattern_CE_repeat1 = 166,
  aux_sym_template_pattern_CE_repeat1 = 167,
  aux_sym_object_pattern_CE_repeat1 = 168,
  aux_sym_defglobal_construct_repeat1 = 169,
  aux_sym_parameter_list_repeat1 = 170,
  aux_sym_defmethod_construct_repeat1 = 171,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_str_lit] = "str_lit",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_instance_name] = "instance_name",
  [sym_comment] = "comment",
  [sym_single_field_variable] = "single_field_variable",
  [sym_multifield_variable] = "multifield_variable",
  [sym_global_variable] = "global_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_loop_DASHfor_DASHcount] = "loop-for-count",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_do_DASHfor_DASHfact] = "do-for-fact",
  [anon_sym_do_DASHfor_DASHall_DASHfacts] = "do-for-all-facts",
  [anon_sym_deffacts] = "deffacts",
  [anon_sym_deftemplate] = "deftemplate",
  [anon_sym_slot] = "slot",
  [anon_sym_multislot] = "multislot",
  [anon_sym_default] = "default",
  [anon_sym_QMARKDERIVE] = "\?DERIVE",
  [anon_sym_QMARKNONE] = "\?NONE",
  [anon_sym_default_DASHdynamic] = "default-dynamic",
  [anon_sym_type] = "type",
  [anon_sym_QMARKVARIABLE] = "\?VARIABLE",
  [sym_allowed_type] = "allowed_type",
  [sym_boolean_symbol] = "boolean_symbol",
  [anon_sym_allowed_DASHsymbols] = "allowed-symbols",
  [anon_sym_allowed_DASHstrings] = "allowed-strings",
  [anon_sym_allowed_DASHlexemes] = "allowed-lexemes",
  [anon_sym_allowed_DASHintegers] = "allowed-integers",
  [anon_sym_allowed_DASHfloats] = "allowed-floats",
  [anon_sym_allowed_DASHnumbers] = "allowed-numbers",
  [anon_sym_allowed_DASHinstance_DASHnames] = "allowed-instance-names",
  [anon_sym_allowed_DASHclasses] = "allowed-classes",
  [anon_sym_allowed_DASHvalues] = "allowed-values",
  [anon_sym_range] = "range",
  [anon_sym_cardinality] = "cardinality",
  [anon_sym_defrule] = "defrule",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_declare] = "declare",
  [anon_sym_salience] = "salience",
  [anon_sym_auto_DASHfocus] = "auto-focus",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_logical] = "logical",
  [anon_sym_test] = "test",
  [anon_sym_exists] = "exists",
  [anon_sym_forall] = "forall",
  [anon_sym_object] = "object",
  [anon_sym_is_DASHa] = "is-a",
  [anon_sym_name] = "name",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DOLLAR_QMARK] = "$\?",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_defglobal] = "defglobal",
  [anon_sym_deffunction] = "deffunction",
  [anon_sym_defgeneric] = "defgeneric",
  [anon_sym_defmethod] = "defmethod",
  [sym_program] = "program",
  [sym__construct] = "_construct",
  [sym__gap] = "_gap",
  [sym__expression] = "_expression",
  [sym__lexeme] = "_lexeme",
  [sym__constant] = "_constant",
  [sym__variable] = "_variable",
  [sym_function_call] = "function_call",
  [sym_loop_for_count] = "loop_for_count",
  [sym_range_spec] = "range_spec",
  [sym_if_then_else] = "if_then_else",
  [sym_assert] = "assert",
  [sym_do_for_fact] = "do_for_fact",
  [sym_do_for_all_facts] = "do_for_all_facts",
  [sym_fact_set_template] = "fact_set_template",
  [sym_fact_set_member_template] = "fact_set_member_template",
  [sym_deffacts_construct] = "deffacts_construct",
  [sym__rhs_pattern] = "_rhs_pattern",
  [sym_ordered_rhs_pattern] = "ordered_rhs_pattern",
  [sym_template_rhs_pattern] = "template_rhs_pattern",
  [sym_rhs_slot] = "rhs_slot",
  [sym__rhs_field] = "_rhs_field",
  [sym_deftemplate_construct] = "deftemplate_construct",
  [sym__slot_definition] = "_slot_definition",
  [sym_single_slot_definition] = "single_slot_definition",
  [sym_multislot_definition] = "multislot_definition",
  [sym__template_attribute] = "_template_attribute",
  [sym_default_attribute] = "default_attribute",
  [sym__constraint_attribute] = "_constraint_attribute",
  [sym_type_attribute] = "type_attribute",
  [sym_type_specification] = "type_specification",
  [sym_allowed_constant_attribute] = "allowed_constant_attribute",
  [sym_symbol_list] = "symbol_list",
  [sym_string_list] = "string_list",
  [sym_lexeme_list] = "lexeme_list",
  [sym_integer_list] = "integer_list",
  [sym_float_list] = "float_list",
  [sym_number_list] = "number_list",
  [sym_class_name_list] = "class_name_list",
  [sym_instance_list] = "instance_list",
  [sym_value_list] = "value_list",
  [sym_range_attribute] = "range_attribute",
  [sym_range_specification] = "range_specification",
  [sym_cardinality_attribute] = "cardinality_attribute",
  [sym_cardinality_specification] = "cardinality_specification",
  [sym_defrule_construct] = "defrule_construct",
  [sym_declaration] = "declaration",
  [sym_rule_property] = "rule_property",
  [sym__conditional_element] = "_conditional_element",
  [sym__pattern_CE] = "_pattern_CE",
  [sym_assigned_pattern_CE] = "assigned_pattern_CE",
  [sym_not_CE] = "not_CE",
  [sym_and_CE] = "and_CE",
  [sym_or_CE] = "or_CE",
  [sym_logical_CE] = "logical_CE",
  [sym_test_CE] = "test_CE",
  [sym_exists_CE] = "exists_CE",
  [sym_forall_CE] = "forall_CE",
  [sym_ordered_pattern_CE] = "ordered_pattern_CE",
  [sym_template_pattern_CE] = "template_pattern_CE",
  [sym_object_pattern_CE] = "object_pattern_CE",
  [sym_attribute_constraint] = "attribute_constraint",
  [sym_lhs_slot] = "lhs_slot",
  [sym_constraint] = "constraint",
  [sym_connected_constraint] = "connected_constraint",
  [sym_single_constraint] = "single_constraint",
  [sym_term] = "term",
  [sym_defglobal_construct] = "defglobal_construct",
  [sym__global_assignment] = "_global_assignment",
  [sym_deffunction_construct] = "deffunction_construct",
  [sym_parameter_list] = "parameter_list",
  [sym_defgeneric_construct] = "defgeneric_construct",
  [sym_defmethod_construct] = "defmethod_construct",
  [sym_parameter_restriction] = "parameter_restriction",
  [sym_wildcard_parameter_restriction] = "wildcard_parameter_restriction",
  [sym_query] = "query",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_assert_repeat1] = "assert_repeat1",
  [aux_sym_fact_set_template_repeat1] = "fact_set_template_repeat1",
  [aux_sym_fact_set_member_template_repeat1] = "fact_set_member_template_repeat1",
  [aux_sym_ordered_rhs_pattern_repeat1] = "ordered_rhs_pattern_repeat1",
  [aux_sym_template_rhs_pattern_repeat1] = "template_rhs_pattern_repeat1",
  [aux_sym_deftemplate_construct_repeat1] = "deftemplate_construct_repeat1",
  [aux_sym_single_slot_definition_repeat1] = "single_slot_definition_repeat1",
  [aux_sym_type_specification_repeat1] = "type_specification_repeat1",
  [aux_sym_string_list_repeat1] = "string_list_repeat1",
  [aux_sym_lexeme_list_repeat1] = "lexeme_list_repeat1",
  [aux_sym_integer_list_repeat1] = "integer_list_repeat1",
  [aux_sym_float_list_repeat1] = "float_list_repeat1",
  [aux_sym_number_list_repeat1] = "number_list_repeat1",
  [aux_sym_value_list_repeat1] = "value_list_repeat1",
  [aux_sym_defrule_construct_repeat1] = "defrule_construct_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_ordered_pattern_CE_repeat1] = "ordered_pattern_CE_repeat1",
  [aux_sym_template_pattern_CE_repeat1] = "template_pattern_CE_repeat1",
  [aux_sym_object_pattern_CE_repeat1] = "object_pattern_CE_repeat1",
  [aux_sym_defglobal_construct_repeat1] = "defglobal_construct_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_defmethod_construct_repeat1] = "defmethod_construct_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_str_lit] = sym_str_lit,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_instance_name] = sym_instance_name,
  [sym_comment] = sym_comment,
  [sym_single_field_variable] = sym_single_field_variable,
  [sym_multifield_variable] = sym_multifield_variable,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_loop_DASHfor_DASHcount] = anon_sym_loop_DASHfor_DASHcount,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_do_DASHfor_DASHfact] = anon_sym_do_DASHfor_DASHfact,
  [anon_sym_do_DASHfor_DASHall_DASHfacts] = anon_sym_do_DASHfor_DASHall_DASHfacts,
  [anon_sym_deffacts] = anon_sym_deffacts,
  [anon_sym_deftemplate] = anon_sym_deftemplate,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_multislot] = anon_sym_multislot,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_QMARKDERIVE] = anon_sym_QMARKDERIVE,
  [anon_sym_QMARKNONE] = anon_sym_QMARKNONE,
  [anon_sym_default_DASHdynamic] = anon_sym_default_DASHdynamic,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_QMARKVARIABLE] = anon_sym_QMARKVARIABLE,
  [sym_allowed_type] = sym_allowed_type,
  [sym_boolean_symbol] = sym_boolean_symbol,
  [anon_sym_allowed_DASHsymbols] = anon_sym_allowed_DASHsymbols,
  [anon_sym_allowed_DASHstrings] = anon_sym_allowed_DASHstrings,
  [anon_sym_allowed_DASHlexemes] = anon_sym_allowed_DASHlexemes,
  [anon_sym_allowed_DASHintegers] = anon_sym_allowed_DASHintegers,
  [anon_sym_allowed_DASHfloats] = anon_sym_allowed_DASHfloats,
  [anon_sym_allowed_DASHnumbers] = anon_sym_allowed_DASHnumbers,
  [anon_sym_allowed_DASHinstance_DASHnames] = anon_sym_allowed_DASHinstance_DASHnames,
  [anon_sym_allowed_DASHclasses] = anon_sym_allowed_DASHclasses,
  [anon_sym_allowed_DASHvalues] = anon_sym_allowed_DASHvalues,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_cardinality] = anon_sym_cardinality,
  [anon_sym_defrule] = anon_sym_defrule,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_salience] = anon_sym_salience,
  [anon_sym_auto_DASHfocus] = anon_sym_auto_DASHfocus,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_logical] = anon_sym_logical,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_is_DASHa] = anon_sym_is_DASHa,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOLLAR_QMARK] = anon_sym_DOLLAR_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_defglobal] = anon_sym_defglobal,
  [anon_sym_deffunction] = anon_sym_deffunction,
  [anon_sym_defgeneric] = anon_sym_defgeneric,
  [anon_sym_defmethod] = anon_sym_defmethod,
  [sym_program] = sym_program,
  [sym__construct] = sym__construct,
  [sym__gap] = sym__gap,
  [sym__expression] = sym__expression,
  [sym__lexeme] = sym__lexeme,
  [sym__constant] = sym__constant,
  [sym__variable] = sym__variable,
  [sym_function_call] = sym_function_call,
  [sym_loop_for_count] = sym_loop_for_count,
  [sym_range_spec] = sym_range_spec,
  [sym_if_then_else] = sym_if_then_else,
  [sym_assert] = sym_assert,
  [sym_do_for_fact] = sym_do_for_fact,
  [sym_do_for_all_facts] = sym_do_for_all_facts,
  [sym_fact_set_template] = sym_fact_set_template,
  [sym_fact_set_member_template] = sym_fact_set_member_template,
  [sym_deffacts_construct] = sym_deffacts_construct,
  [sym__rhs_pattern] = sym__rhs_pattern,
  [sym_ordered_rhs_pattern] = sym_ordered_rhs_pattern,
  [sym_template_rhs_pattern] = sym_template_rhs_pattern,
  [sym_rhs_slot] = sym_rhs_slot,
  [sym__rhs_field] = sym__rhs_field,
  [sym_deftemplate_construct] = sym_deftemplate_construct,
  [sym__slot_definition] = sym__slot_definition,
  [sym_single_slot_definition] = sym_single_slot_definition,
  [sym_multislot_definition] = sym_multislot_definition,
  [sym__template_attribute] = sym__template_attribute,
  [sym_default_attribute] = sym_default_attribute,
  [sym__constraint_attribute] = sym__constraint_attribute,
  [sym_type_attribute] = sym_type_attribute,
  [sym_type_specification] = sym_type_specification,
  [sym_allowed_constant_attribute] = sym_allowed_constant_attribute,
  [sym_symbol_list] = sym_symbol_list,
  [sym_string_list] = sym_string_list,
  [sym_lexeme_list] = sym_lexeme_list,
  [sym_integer_list] = sym_integer_list,
  [sym_float_list] = sym_float_list,
  [sym_number_list] = sym_number_list,
  [sym_class_name_list] = sym_class_name_list,
  [sym_instance_list] = sym_instance_list,
  [sym_value_list] = sym_value_list,
  [sym_range_attribute] = sym_range_attribute,
  [sym_range_specification] = sym_range_specification,
  [sym_cardinality_attribute] = sym_cardinality_attribute,
  [sym_cardinality_specification] = sym_cardinality_specification,
  [sym_defrule_construct] = sym_defrule_construct,
  [sym_declaration] = sym_declaration,
  [sym_rule_property] = sym_rule_property,
  [sym__conditional_element] = sym__conditional_element,
  [sym__pattern_CE] = sym__pattern_CE,
  [sym_assigned_pattern_CE] = sym_assigned_pattern_CE,
  [sym_not_CE] = sym_not_CE,
  [sym_and_CE] = sym_and_CE,
  [sym_or_CE] = sym_or_CE,
  [sym_logical_CE] = sym_logical_CE,
  [sym_test_CE] = sym_test_CE,
  [sym_exists_CE] = sym_exists_CE,
  [sym_forall_CE] = sym_forall_CE,
  [sym_ordered_pattern_CE] = sym_ordered_pattern_CE,
  [sym_template_pattern_CE] = sym_template_pattern_CE,
  [sym_object_pattern_CE] = sym_object_pattern_CE,
  [sym_attribute_constraint] = sym_attribute_constraint,
  [sym_lhs_slot] = sym_lhs_slot,
  [sym_constraint] = sym_constraint,
  [sym_connected_constraint] = sym_connected_constraint,
  [sym_single_constraint] = sym_single_constraint,
  [sym_term] = sym_term,
  [sym_defglobal_construct] = sym_defglobal_construct,
  [sym__global_assignment] = sym__global_assignment,
  [sym_deffunction_construct] = sym_deffunction_construct,
  [sym_parameter_list] = sym_parameter_list,
  [sym_defgeneric_construct] = sym_defgeneric_construct,
  [sym_defmethod_construct] = sym_defmethod_construct,
  [sym_parameter_restriction] = sym_parameter_restriction,
  [sym_wildcard_parameter_restriction] = sym_wildcard_parameter_restriction,
  [sym_query] = sym_query,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_assert_repeat1] = aux_sym_assert_repeat1,
  [aux_sym_fact_set_template_repeat1] = aux_sym_fact_set_template_repeat1,
  [aux_sym_fact_set_member_template_repeat1] = aux_sym_fact_set_member_template_repeat1,
  [aux_sym_ordered_rhs_pattern_repeat1] = aux_sym_ordered_rhs_pattern_repeat1,
  [aux_sym_template_rhs_pattern_repeat1] = aux_sym_template_rhs_pattern_repeat1,
  [aux_sym_deftemplate_construct_repeat1] = aux_sym_deftemplate_construct_repeat1,
  [aux_sym_single_slot_definition_repeat1] = aux_sym_single_slot_definition_repeat1,
  [aux_sym_type_specification_repeat1] = aux_sym_type_specification_repeat1,
  [aux_sym_string_list_repeat1] = aux_sym_string_list_repeat1,
  [aux_sym_lexeme_list_repeat1] = aux_sym_lexeme_list_repeat1,
  [aux_sym_integer_list_repeat1] = aux_sym_integer_list_repeat1,
  [aux_sym_float_list_repeat1] = aux_sym_float_list_repeat1,
  [aux_sym_number_list_repeat1] = aux_sym_number_list_repeat1,
  [aux_sym_value_list_repeat1] = aux_sym_value_list_repeat1,
  [aux_sym_defrule_construct_repeat1] = aux_sym_defrule_construct_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_ordered_pattern_CE_repeat1] = aux_sym_ordered_pattern_CE_repeat1,
  [aux_sym_template_pattern_CE_repeat1] = aux_sym_template_pattern_CE_repeat1,
  [aux_sym_object_pattern_CE_repeat1] = aux_sym_object_pattern_CE_repeat1,
  [aux_sym_defglobal_construct_repeat1] = aux_sym_defglobal_construct_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_defmethod_construct_repeat1] = aux_sym_defmethod_construct_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_field_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_multifield_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop_DASHfor_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do_DASHfor_DASHfact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do_DASHfor_DASHall_DASHfacts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deffacts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deftemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multislot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKDERIVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKNONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKVARIABLE] = {
    .visible = true,
    .named = false,
  },
  [sym_allowed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allowed_DASHsymbols] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHstrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHlexemes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHintegers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHfloats] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHnumbers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHinstance_DASHnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHclasses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_DASHvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defrule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_salience] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deffunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defgeneric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmethod] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__construct] = {
    .visible = false,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__lexeme] = {
    .visible = false,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_for_count] = {
    .visible = true,
    .named = true,
  },
  [sym_range_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_else] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_do_for_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_do_for_all_facts] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_set_template] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_set_member_template] = {
    .visible = true,
    .named = true,
  },
  [sym_deffacts_construct] = {
    .visible = true,
    .named = true,
  },
  [sym__rhs_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_ordered_rhs_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_template_rhs_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs_slot] = {
    .visible = true,
    .named = true,
  },
  [sym__rhs_field] = {
    .visible = false,
    .named = true,
  },
  [sym_deftemplate_construct] = {
    .visible = true,
    .named = true,
  },
  [sym__slot_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_single_slot_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_multislot_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__template_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_default_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_type_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_allowed_constant_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lexeme_list] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_list] = {
    .visible = true,
    .named = true,
  },
  [sym_float_list] = {
    .visible = true,
    .named = true,
  },
  [sym_number_list] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_list] = {
    .visible = true,
    .named = true,
  },
  [sym_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_range_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_range_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_defrule_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_property] = {
    .visible = true,
    .named = true,
  },
  [sym__conditional_element] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern_CE] = {
    .visible = false,
    .named = true,
  },
  [sym_assigned_pattern_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_not_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_and_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_or_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_test_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_exists_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_pattern_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_template_pattern_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_object_pattern_CE] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_connected_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_single_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_defglobal_construct] = {
    .visible = true,
    .named = true,
  },
  [sym__global_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_deffunction_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_defgeneric_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_defmethod_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_parameter_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fact_set_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fact_set_member_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ordered_rhs_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_rhs_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_deftemplate_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_slot_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexeme_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defrule_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ordered_pattern_CE_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_pattern_CE_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_pattern_CE_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defglobal_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defmethod_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_comment = 1,
  field_index = 2,
  field_module_name = 3,
  field_name = 4,
  field_param = 5,
  field_slot_name = 6,
  field_temp_name = 7,
  field_template_name = 8,
  field_type = 9,
  field_var = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment] = "comment",
  [field_index] = "index",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_param] = "param",
  [field_slot_name] = "slot_name",
  [field_temp_name] = "temp_name",
  [field_template_name] = "template_name",
  [field_type] = "type",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_module_name, 2},
  [2] =
    {field_comment, 3},
    {field_name, 2},
  [4] =
    {field_name, 0},
  [5] =
    {field_temp_name, 1},
  [6] =
    {field_name, 1},
  [7] =
    {field_slot_name, 2},
  [8] =
    {field_index, 3},
    {field_name, 2},
  [10] =
    {field_param, 1},
  [11] =
    {field_slot_name, 1},
  [12] =
    {field_comment, 4},
    {field_index, 3},
    {field_name, 2},
  [15] =
    {field_param, 1},
    {field_type, 2},
  [17] =
    {field_template_name, 2},
    {field_var, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 7,
  [12] = 5,
  [13] = 8,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 17,
  [32] = 18,
  [33] = 33,
  [34] = 20,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 38,
  [39] = 39,
  [40] = 9,
  [41] = 24,
  [42] = 25,
  [43] = 29,
  [44] = 26,
  [45] = 27,
  [46] = 46,
  [47] = 28,
  [48] = 29,
  [49] = 30,
  [50] = 50,
  [51] = 17,
  [52] = 18,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 16,
  [59] = 20,
  [60] = 36,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 23,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 28,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 28,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 36,
  [77] = 30,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 24,
  [87] = 25,
  [88] = 29,
  [89] = 89,
  [90] = 26,
  [91] = 27,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 28,
  [99] = 29,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 141,
  [156] = 140,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 140,
  [175] = 141,
  [176] = 160,
  [177] = 177,
  [178] = 178,
  [179] = 141,
  [180] = 140,
  [181] = 173,
  [182] = 171,
  [183] = 183,
  [184] = 158,
  [185] = 185,
  [186] = 157,
  [187] = 169,
  [188] = 168,
  [189] = 162,
  [190] = 167,
  [191] = 166,
  [192] = 165,
  [193] = 164,
  [194] = 161,
  [195] = 158,
  [196] = 157,
  [197] = 169,
  [198] = 168,
  [199] = 199,
  [200] = 200,
  [201] = 167,
  [202] = 166,
  [203] = 165,
  [204] = 171,
  [205] = 164,
  [206] = 173,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 161,
  [211] = 211,
  [212] = 160,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 216,
  [218] = 216,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 214,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 238,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 242,
  [250] = 238,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 246,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 262,
  [264] = 262,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 144,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 365,
  [409] = 409,
  [410] = 409,
  [411] = 399,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 365,
  [416] = 416,
  [417] = 409,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 140,
  [425] = 141,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 430,
  [472] = 468,
  [473] = 473,
  [474] = 468,
  [475] = 475,
  [476] = 476,
  [477] = 430,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
};

static inline bool sym_instance_name_character_set_1(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= ')' || (c < '|'
      ? (c < '?'
        ? c == ';'
        : c <= '?')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(505);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == ':') ADVANCE(508);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(510);
      if (lookahead == '?') ADVANCE(503);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '[') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '|') ADVANCE(506);
      if (lookahead == '~') ADVANCE(507);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(505);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ':') ADVANCE(509);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '=') ADVANCE(511);
      if (lookahead == '?') ADVANCE(503);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '|') ADVANCE(506);
      if (lookahead == '~') ADVANCE(507);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11) ADVANCE(423);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(505);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '|') ADVANCE(506);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(438);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(477);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(504);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(317);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(464);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(462);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(462);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(462);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(462);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(462);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(462);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == 'Y') ADVANCE(74);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 100:
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'X') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 173:
      if (lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 190:
      if (lookahead == 'j') ADVANCE(156);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 302:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 304:
      if (lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 306:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 307:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 316:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 317:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 318:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 319:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(5);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(102);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_multifield_variable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(15);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_do_DASHfor_DASHfact);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_do_DASHfor_DASHall_DASHfacts);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_QMARKDERIVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_QMARKNONE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_logical);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_forall);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(423);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 28},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 28},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 28},
  [256] = {.lex_state = 13},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 13},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 13},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 13},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 13},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 13},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 13},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 14},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 31},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 32},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 7},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 13},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 13},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 13},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 13},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 13},
  [461] = {.lex_state = 13},
  [462] = {.lex_state = 13},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 13},
  [465] = {.lex_state = 13},
  [466] = {.lex_state = 13},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 13},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 13},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 13},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(3),
    [sym_str_lit] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_instance_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_single_field_variable] = ACTIONS(1),
    [sym_multifield_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_loop_DASHfor_DASHcount] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_deffacts] = ACTIONS(1),
    [anon_sym_deftemplate] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_multislot] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_default_DASHdynamic] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_allowed_type] = ACTIONS(1),
    [sym_boolean_symbol] = ACTIONS(1),
    [anon_sym_allowed_DASHsymbols] = ACTIONS(1),
    [anon_sym_allowed_DASHstrings] = ACTIONS(1),
    [anon_sym_allowed_DASHlexemes] = ACTIONS(1),
    [anon_sym_allowed_DASHintegers] = ACTIONS(1),
    [anon_sym_allowed_DASHfloats] = ACTIONS(1),
    [anon_sym_allowed_DASHnumbers] = ACTIONS(1),
    [anon_sym_allowed_DASHinstance_DASHnames] = ACTIONS(1),
    [anon_sym_allowed_DASHclasses] = ACTIONS(1),
    [anon_sym_allowed_DASHvalues] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_cardinality] = ACTIONS(1),
    [anon_sym_defrule] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_salience] = ACTIONS(1),
    [anon_sym_auto_DASHfocus] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_logical] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_is_DASHa] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_defglobal] = ACTIONS(1),
    [anon_sym_deffunction] = ACTIONS(1),
    [anon_sym_defgeneric] = ACTIONS(1),
    [anon_sym_defmethod] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(475),
    [sym__construct] = STATE(153),
    [sym__gap] = STATE(153),
    [sym_deffacts_construct] = STATE(153),
    [sym_deftemplate_construct] = STATE(153),
    [sym_defrule_construct] = STATE(153),
    [sym_defglobal_construct] = STATE(153),
    [sym_deffunction_construct] = STATE(153),
    [sym_defgeneric_construct] = STATE(153),
    [sym_defmethod_construct] = STATE(153),
    [aux_sym_program_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__ws] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(137), 2,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(13), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(200), 3,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(68), 7,
      sym__expression,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [40] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(25), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    ACTIONS(19), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
    STATE(71), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [78] = 14,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(106), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(305), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [130] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_do,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(43), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(41), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(26), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [167] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(51), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(49), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(90), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [204] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(59), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(57), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(8), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [241] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(69), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(67), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(9), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [278] = 7,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(78), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(75), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(9), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [315] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(69), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(67), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(9), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [352] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(94), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(92), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(13), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [389] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_do,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(102), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(100), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(44), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [426] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(69), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(67), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(9), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [463] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(114), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(112), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(10), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [500] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(122), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(120), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(21), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [534] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [568] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(134), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(132), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(77), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [602] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [636] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [670] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [704] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [738] = 7,
    ACTIONS(144), 1,
      sym_str_lit,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_EQ_GT,
    STATE(122), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(114), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [774] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [808] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(156), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(154), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(19), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [842] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(162), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(160), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(20), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [876] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [910] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(170), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(168), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(23), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [944] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [978] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(176), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(174), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(28), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1012] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1046] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(184), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(182), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(30), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1080] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1114] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1148] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1182] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(194), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(192), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(75), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1216] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(200), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(198), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(32), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1250] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1284] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(206), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(204), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(33), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1318] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1352] = 6,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(213), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(210), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1386] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(221), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(219), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(16), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1420] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(227), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(225), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(34), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1454] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(233), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(231), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(68), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1488] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1522] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(241), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(239), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(37), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1556] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(245), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(243), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(89), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1590] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1624] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(253), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(251), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(47), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1658] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1692] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1726] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(263), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(261), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(49), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1760] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1794] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(269), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(267), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(80), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1828] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1862] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(277), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(275), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(50), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1896] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1930] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1964] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [1998] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2032] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(289), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(287), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(52), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2066] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(293), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(291), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(70), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2100] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(299), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(297), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2134] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2168] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2202] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(309), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(307), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(101), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2236] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2270] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(315), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(313), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(95), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2304] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2338] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(321), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(319), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(66), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2372] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2406] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2440] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2474] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(331), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(329), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(54), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2508] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2542] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2576] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(339), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(337), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(18), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2610] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2644] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(345), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(343), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(56), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2678] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(351), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(349), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(39), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2712] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2746] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(357), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(355), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(85), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2780] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2814] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(361), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(359), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(57), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2848] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(367), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(365), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(94), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2882] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2916] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(373), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(371), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(58), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2950] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(379), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(377), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(59), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [2984] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(385), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(383), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(98), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3018] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3052] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3086] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(395), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(393), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(64), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3120] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(399), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(397), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(82), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3154] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3188] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3222] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3256] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(71), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3290] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(409), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(407), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(63), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3324] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3358] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(417), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(415), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(72), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3392] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(423), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(421), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(74), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3426] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(40), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [3460] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(429), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(427), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(436), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3493] = 12,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(110), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3538] = 5,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(437), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(435), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(5), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_range_spec,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3569] = 5,
    ACTIONS(441), 1,
      sym_single_field_variable,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [3600] = 12,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(110), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3645] = 6,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_EQ_GT,
    STATE(125), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(115), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [3678] = 5,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(455), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(453), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(12), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_range_spec,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3709] = 12,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(103), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3754] = 12,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 1,
      anon_sym_TILDE,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(462), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(467), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(473), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(110), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(459), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3799] = 12,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(110), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3844] = 5,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(480), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(478), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(6), 10,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_range_spec,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3875] = 12,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(111), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3920] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [3950] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [3980] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4010] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(494), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(492), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(102), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [4040] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(498), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(496), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(397), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [4070] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4100] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(504), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(502), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(485), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [4130] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4160] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(123), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4190] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4220] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4250] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(121), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4280] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4310] = 5,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(105), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4340] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(127), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4367] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(265), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
    ACTIONS(518), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(516), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(139), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4400] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(124), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4427] = 11,
    ACTIONS(524), 1,
      anon_sym_TILDE,
    STATE(143), 1,
      sym_term,
    STATE(145), 1,
      sym__constant,
    STATE(152), 1,
      sym_connected_constraint,
    STATE(326), 1,
      sym_single_constraint,
    STATE(433), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(35), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(526), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4468] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(126), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4495] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(119), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4522] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(116), 14,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
      aux_sym_defrule_construct_repeat1,
  [4549] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(458), 13,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4575] = 4,
    ACTIONS(146), 1,
      sym_single_field_variable,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(130), 13,
      sym__conditional_element,
      sym__pattern_CE,
      sym_assigned_pattern_CE,
      sym_not_CE,
      sym_and_CE,
      sym_or_CE,
      sym_logical_CE,
      sym_test_CE,
      sym_exists_CE,
      sym_forall_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4601] = 6,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(530), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(528), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(142), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4630] = 6,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(538), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(536), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(137), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4659] = 6,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(530), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(528), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(142), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4688] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(546), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(544), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4711] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(550), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(548), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4734] = 6,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(555), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(552), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(142), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4763] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(565), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(563), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4786] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(569), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(567), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4811] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(575), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(573), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4834] = 15,
    ACTIONS(577), 1,
      anon_sym_default,
    ACTIONS(579), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(581), 1,
      anon_sym_type,
    ACTIONS(583), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(585), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(587), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(589), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(591), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(593), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(595), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(597), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(599), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(601), 1,
      anon_sym_range,
    ACTIONS(603), 1,
      anon_sym_cardinality,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [4881] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(607), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(605), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4904] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(611), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(609), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4927] = 9,
    ACTIONS(524), 1,
      anon_sym_TILDE,
    STATE(143), 1,
      sym_term,
    STATE(145), 1,
      sym__constant,
    STATE(151), 1,
      sym_connected_constraint,
    STATE(326), 1,
      sym_single_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(526), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4961] = 9,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    STATE(143), 1,
      sym_term,
    STATE(144), 1,
      sym_single_constraint,
    STATE(145), 1,
      sym__constant,
    STATE(151), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4995] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(615), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(613), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [5016] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(619), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(617), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [5037] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 2,
      sym__ws,
      sym_comment,
    STATE(154), 10,
      sym__construct,
      sym__gap,
      sym_deffacts_construct,
      sym_deftemplate_construct,
      sym_defrule_construct,
      sym_defglobal_construct,
      sym_deffunction_construct,
      sym_defgeneric_construct,
      sym_defmethod_construct,
      aux_sym_program_repeat1,
  [5060] = 4,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
    ACTIONS(627), 2,
      sym__ws,
      sym_comment,
    STATE(154), 10,
      sym__construct,
      sym__gap,
      sym_deffacts_construct,
      sym_deftemplate_construct,
      sym_defrule_construct,
      sym_defglobal_construct,
      sym_deffunction_construct,
      sym_defgeneric_construct,
      sym_defmethod_construct,
      aux_sym_program_repeat1,
  [5083] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(548), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(550), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5103] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(544), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(546), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5123] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(633), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(635), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5142] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(637), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(639), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5161] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(185), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [5182] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(645), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(647), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5201] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(649), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(651), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5220] = 6,
    STATE(145), 1,
      sym__constant,
    STATE(147), 1,
      sym_term,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(526), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5245] = 4,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(163), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [5266] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(658), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(660), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5285] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(662), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(664), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5304] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(666), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(668), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5323] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(670), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(672), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5342] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(674), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(676), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5361] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(678), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(680), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5380] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(183), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [5401] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(684), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(686), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5420] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(688), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(690), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5439] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(692), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(694), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5458] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(544), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(546), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5477] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(548), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(550), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5496] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(645), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(647), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5515] = 11,
    ACTIONS(696), 1,
      sym_symbol,
    ACTIONS(698), 1,
      anon_sym_declare,
    ACTIONS(700), 1,
      anon_sym_not,
    ACTIONS(702), 1,
      anon_sym_and,
    ACTIONS(704), 1,
      anon_sym_or,
    ACTIONS(706), 1,
      anon_sym_logical,
    ACTIONS(708), 1,
      anon_sym_test,
    ACTIONS(710), 1,
      anon_sym_exists,
    ACTIONS(712), 1,
      anon_sym_forall,
    ACTIONS(714), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5550] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(716), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(718), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5569] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(548), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(550), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5588] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(544), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(546), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5607] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(692), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(694), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5626] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(684), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(686), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5645] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(163), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [5666] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(637), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(639), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5685] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(163), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [5706] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(633), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(635), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5725] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(678), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(680), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5744] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(674), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(676), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5763] = 6,
    STATE(145), 1,
      sym__constant,
    STATE(147), 1,
      sym_term,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(29), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5788] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(670), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(672), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5807] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(666), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(668), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5826] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(662), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(664), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5845] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(658), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(660), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5864] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(649), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(651), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5883] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(637), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(639), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5901] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(633), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(635), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5919] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(678), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(680), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5937] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(674), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(676), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5955] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(546), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(544), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5975] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(727), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(730), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5993] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(670), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(672), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6011] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(666), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(668), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6029] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(662), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(664), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6047] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(684), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(686), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6065] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(658), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(660), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6083] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(692), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(694), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6101] = 10,
    ACTIONS(696), 1,
      sym_symbol,
    ACTIONS(700), 1,
      anon_sym_not,
    ACTIONS(702), 1,
      anon_sym_and,
    ACTIONS(704), 1,
      anon_sym_or,
    ACTIONS(706), 1,
      anon_sym_logical,
    ACTIONS(708), 1,
      anon_sym_test,
    ACTIONS(710), 1,
      anon_sym_exists,
    ACTIONS(712), 1,
      anon_sym_forall,
    ACTIONS(714), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6133] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(733), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(735), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6151] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(737), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(739), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6169] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(649), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(651), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6187] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(741), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(743), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6205] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(645), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(647), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6223] = 5,
    ACTIONS(747), 1,
      anon_sym_QMARKVARIABLE,
    STATE(454), 1,
      sym_value_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(229), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(745), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [6244] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(749), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6262] = 8,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      sym_symbol,
    ACTIONS(753), 1,
      sym_global_variable,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(428), 1,
      sym_function_call,
    STATE(435), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6288] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(757), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6306] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(24), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(759), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6324] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(41), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(761), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6342] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(232), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6366] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(42), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(771), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6384] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(226), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6408] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(236), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6432] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(253), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6456] = 8,
    ACTIONS(779), 1,
      sym_symbol,
    ACTIONS(781), 1,
      sym_single_field_variable,
    ACTIONS(783), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(785), 1,
      anon_sym_if,
    ACTIONS(787), 1,
      anon_sym_assert,
    ACTIONS(789), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(791), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6482] = 5,
    ACTIONS(793), 1,
      sym_str_lit,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(245), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6502] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(253), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6526] = 4,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(25), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(801), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [6544] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(223), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6568] = 4,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(235), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(805), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [6586] = 5,
    ACTIONS(809), 1,
      sym_str_lit,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(252), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [6606] = 8,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      sym_global_variable,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(428), 1,
      sym_function_call,
    STATE(479), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6632] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(253), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6656] = 8,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      sym_global_variable,
    ACTIONS(821), 1,
      sym_symbol,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(428), 1,
      sym_function_call,
    STATE(434), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6682] = 8,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      sym_global_variable,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(428), 1,
      sym_function_call,
    STATE(473), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6708] = 4,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(235), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(827), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [6726] = 7,
    ACTIONS(763), 1,
      sym_single_field_variable,
    ACTIONS(765), 1,
      sym_multifield_variable,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(253), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6750] = 8,
    ACTIONS(834), 1,
      anon_sym_deffacts,
    ACTIONS(836), 1,
      anon_sym_deftemplate,
    ACTIONS(838), 1,
      anon_sym_defrule,
    ACTIONS(840), 1,
      anon_sym_defglobal,
    ACTIONS(842), 1,
      anon_sym_deffunction,
    ACTIONS(844), 1,
      anon_sym_defgeneric,
    ACTIONS(846), 1,
      anon_sym_defmethod,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6776] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6793] = 4,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(251), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [6810] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(254), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6827] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6844] = 4,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(477), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(856), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6861] = 4,
    ACTIONS(860), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6878] = 4,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(430), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(865), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6895] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6912] = 7,
    ACTIONS(869), 1,
      sym_symbol,
    ACTIONS(871), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(873), 1,
      anon_sym_if,
    ACTIONS(875), 1,
      anon_sym_assert,
    ACTIONS(877), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(879), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6935] = 4,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(247), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [6952] = 5,
    ACTIONS(888), 1,
      anon_sym_QMARKVARIABLE,
    STATE(454), 1,
      sym_lexeme_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(886), 2,
      sym_str_lit,
      sym_symbol,
    STATE(257), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [6971] = 4,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(471), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(890), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6988] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [7005] = 4,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(247), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [7022] = 4,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(247), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [7039] = 5,
    ACTIONS(898), 1,
      sym_single_field_variable,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(901), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(253), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [7058] = 4,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(243), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [7075] = 7,
    ACTIONS(908), 1,
      sym_symbol,
    ACTIONS(910), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(912), 1,
      anon_sym_if,
    ACTIONS(914), 1,
      anon_sym_assert,
    ACTIONS(916), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(918), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7098] = 4,
    ACTIONS(920), 1,
      sym_symbol,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(923), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7114] = 4,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(925), 2,
      sym_str_lit,
      sym_symbol,
    STATE(261), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [7130] = 3,
    ACTIONS(929), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(266), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [7144] = 5,
    ACTIONS(931), 1,
      sym_symbol,
    ACTIONS(933), 1,
      sym_global_variable,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(304), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [7162] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(937), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      sym_boolean_symbol,
  [7174] = 4,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(939), 2,
      sym_str_lit,
      sym_symbol,
    STATE(261), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [7190] = 3,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [7204] = 3,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(250), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [7218] = 3,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(241), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [7232] = 4,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(269), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [7247] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(948), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7258] = 5,
    ACTIONS(950), 1,
      sym_symbol,
    ACTIONS(952), 1,
      anon_sym_QMARKVARIABLE,
    STATE(323), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(454), 1,
      sym_instance_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7275] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(954), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7286] = 4,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(269), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [7301] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(961), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7312] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(963), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7323] = 4,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(272), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [7338] = 5,
    ACTIONS(970), 1,
      sym_float,
    ACTIONS(972), 1,
      anon_sym_QMARKVARIABLE,
    STATE(319), 1,
      aux_sym_float_list_repeat1,
    STATE(454), 1,
      sym_float_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7355] = 4,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(274), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [7370] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(979), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7381] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(981), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7392] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(983), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7403] = 4,
    ACTIONS(985), 1,
      anon_sym_LPAREN,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(286), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [7418] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(989), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7429] = 5,
    ACTIONS(991), 1,
      sym_single_field_variable,
    ACTIONS(993), 1,
      sym_multifield_variable,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7446] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(997), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7457] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(999), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7468] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1001), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7479] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1004), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7490] = 4,
    ACTIONS(1006), 1,
      anon_sym_LPAREN,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(285), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [7505] = 4,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(286), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [7520] = 5,
    ACTIONS(1016), 1,
      sym_integer,
    ACTIONS(1018), 1,
      anon_sym_QMARKVARIABLE,
    STATE(317), 1,
      aux_sym_integer_list_repeat1,
    STATE(454), 1,
      sym_integer_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7537] = 5,
    ACTIONS(1020), 1,
      sym_symbol,
    ACTIONS(1022), 1,
      anon_sym_QMARKVARIABLE,
    STATE(325), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(454), 1,
      sym_class_name_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7554] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1024), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7565] = 5,
    ACTIONS(1026), 1,
      sym_str_lit,
    ACTIONS(1028), 1,
      anon_sym_QMARKVARIABLE,
    STATE(313), 1,
      aux_sym_string_list_repeat1,
    STATE(454), 1,
      sym_string_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7582] = 5,
    ACTIONS(1030), 1,
      sym_single_field_variable,
    ACTIONS(1032), 1,
      sym_multifield_variable,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7599] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1036), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7610] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1038), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7621] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1040), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7632] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1042), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [7643] = 4,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(285), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [7658] = 4,
    ACTIONS(1048), 1,
      sym_global_variable,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(297), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [7673] = 4,
    ACTIONS(1053), 1,
      sym_single_field_variable,
    STATE(298), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1056), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [7688] = 4,
    ACTIONS(933), 1,
      sym_global_variable,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(297), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [7703] = 5,
    ACTIONS(1060), 1,
      sym_number,
    ACTIONS(1062), 1,
      anon_sym_QMARKVARIABLE,
    STATE(321), 1,
      aux_sym_number_list_repeat1,
    STATE(454), 1,
      sym_number_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7720] = 4,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(296), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [7735] = 4,
    ACTIONS(933), 1,
      sym_global_variable,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(299), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [7750] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1068), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7761] = 4,
    ACTIONS(933), 1,
      sym_global_variable,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(297), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [7776] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(272), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [7791] = 5,
    ACTIONS(1074), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(1076), 1,
      sym_allowed_type,
    STATE(322), 1,
      aux_sym_type_specification_repeat1,
    STATE(463), 1,
      sym_type_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7808] = 4,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(274), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [7823] = 5,
    ACTIONS(1082), 1,
      sym_symbol,
    ACTIONS(1084), 1,
      anon_sym_QMARKVARIABLE,
    STATE(311), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(454), 1,
      sym_symbol_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7840] = 3,
    STATE(331), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1086), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [7852] = 4,
    ACTIONS(1088), 1,
      sym_str_lit,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7866] = 4,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7880] = 4,
    ACTIONS(1095), 1,
      sym_str_lit,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7894] = 4,
    ACTIONS(1099), 1,
      sym_str_lit,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7908] = 4,
    ACTIONS(1103), 1,
      sym_number,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7922] = 3,
    STATE(329), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1108), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [7934] = 4,
    ACTIONS(1110), 1,
      sym_str_lit,
    ACTIONS(1112), 1,
      sym_integer,
    ACTIONS(1114), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7948] = 4,
    ACTIONS(1116), 1,
      sym_integer,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7962] = 4,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      sym_allowed_type,
    STATE(318), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7976] = 4,
    ACTIONS(1125), 1,
      sym_float,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7990] = 4,
    ACTIONS(1129), 1,
      sym_float,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8004] = 4,
    ACTIONS(1134), 1,
      sym_number,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8018] = 4,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      sym_allowed_type,
    STATE(318), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8032] = 4,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8046] = 4,
    ACTIONS(1144), 1,
      sym_integer,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8060] = 4,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8074] = 3,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1151), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8086] = 4,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8100] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1155), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [8110] = 3,
    STATE(438), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1108), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [8122] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1157), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [8132] = 3,
    STATE(437), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1086), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [8144] = 3,
    ACTIONS(1159), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1161), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [8156] = 3,
    ACTIONS(985), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(278), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [8168] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1163), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [8178] = 3,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(307), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [8190] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8199] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1167), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8208] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8217] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1171), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8226] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1173), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8235] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8246] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8255] = 3,
    ACTIONS(1177), 1,
      sym_symbol,
    STATE(327), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8266] = 1,
    ACTIONS(1179), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8273] = 3,
    ACTIONS(1181), 1,
      anon_sym_slot,
    ACTIONS(1183), 1,
      anon_sym_multislot,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8284] = 3,
    ACTIONS(1185), 1,
      anon_sym_salience,
    ACTIONS(1187), 1,
      anon_sym_auto_DASHfocus,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8295] = 1,
    ACTIONS(1189), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8302] = 1,
    ACTIONS(1191), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8309] = 1,
    ACTIONS(1193), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8316] = 1,
    ACTIONS(1195), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8323] = 1,
    ACTIONS(1197), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8330] = 1,
    ACTIONS(1199), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8337] = 1,
    ACTIONS(1201), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8344] = 1,
    ACTIONS(1203), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8351] = 1,
    ACTIONS(1205), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8358] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8367] = 3,
    ACTIONS(1209), 1,
      sym_str_lit,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8378] = 1,
    ACTIONS(1213), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8385] = 1,
    ACTIONS(1215), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8392] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1217), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8401] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1219), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8410] = 1,
    ACTIONS(1221), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8417] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1223), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8426] = 1,
    ACTIONS(1225), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8433] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8444] = 1,
    ACTIONS(1229), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8451] = 1,
    ACTIONS(1231), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8458] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8467] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1235), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8476] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8485] = 1,
    ACTIONS(1239), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8492] = 1,
    ACTIONS(1241), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8499] = 1,
    ACTIONS(1243), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8506] = 3,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8517] = 1,
    ACTIONS(1245), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8524] = 1,
    ACTIONS(1247), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8531] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1249), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8540] = 1,
    ACTIONS(1251), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8547] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1253), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8556] = 1,
    ACTIONS(1255), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8563] = 1,
    ACTIONS(1257), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8570] = 1,
    ACTIONS(1259), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8577] = 1,
    ACTIONS(1261), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8584] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1263), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8593] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8602] = 1,
    ACTIONS(1267), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8609] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1269), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8618] = 1,
    ACTIONS(1271), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8625] = 3,
    ACTIONS(1273), 1,
      sym_str_lit,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8636] = 1,
    ACTIONS(1277), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8643] = 1,
    ACTIONS(1279), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8650] = 1,
    ACTIONS(1281), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8657] = 1,
    ACTIONS(1283), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8664] = 1,
    ACTIONS(1285), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8671] = 3,
    ACTIONS(696), 1,
      sym_symbol,
    ACTIONS(714), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8682] = 1,
    ACTIONS(1287), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8689] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1289), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [8698] = 1,
    ACTIONS(1291), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8705] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8716] = 1,
    ACTIONS(1293), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8723] = 1,
    ACTIONS(1295), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8730] = 1,
    ACTIONS(1297), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8737] = 1,
    ACTIONS(1299), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8744] = 1,
    ACTIONS(1301), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8751] = 3,
    ACTIONS(1303), 1,
      sym_single_field_variable,
    ACTIONS(1305), 1,
      sym_multifield_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8762] = 1,
    ACTIONS(1307), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8769] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1309), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8778] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8789] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8800] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8811] = 3,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8822] = 1,
    ACTIONS(1313), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [8829] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1315), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8838] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1317), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8847] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8858] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1319), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8867] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8878] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8886] = 2,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8894] = 2,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8902] = 2,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8910] = 2,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8918] = 2,
    ACTIONS(1329), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8926] = 2,
    ACTIONS(546), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8934] = 2,
    ACTIONS(550), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8942] = 2,
    ACTIONS(1331), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8950] = 2,
    ACTIONS(504), 1,
      sym_boolean_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8958] = 2,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8966] = 2,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8974] = 2,
    ACTIONS(1337), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8982] = 2,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8990] = 2,
    ACTIONS(1341), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8998] = 2,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9006] = 2,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9014] = 2,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9022] = 2,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9030] = 2,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9038] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9046] = 2,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9054] = 2,
    ACTIONS(1357), 1,
      anon_sym_LT_DASH,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9062] = 2,
    ACTIONS(1303), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9070] = 2,
    ACTIONS(1359), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9078] = 2,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9086] = 2,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9094] = 2,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9102] = 2,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9110] = 2,
    ACTIONS(1363), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9118] = 2,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9126] = 2,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9134] = 2,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9142] = 2,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9150] = 2,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9158] = 2,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9166] = 2,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9174] = 2,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9182] = 2,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9190] = 2,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9198] = 2,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9206] = 2,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9214] = 2,
    ACTIONS(1371), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9222] = 2,
    ACTIONS(1373), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9230] = 2,
    ACTIONS(1375), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9238] = 2,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9246] = 2,
    ACTIONS(1379), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9254] = 2,
    ACTIONS(1381), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9262] = 2,
    ACTIONS(1383), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9270] = 2,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9278] = 2,
    ACTIONS(1385), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9286] = 2,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9294] = 2,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9302] = 2,
    ACTIONS(1389), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9310] = 2,
    ACTIONS(1391), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9318] = 2,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9326] = 2,
    ACTIONS(1395), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9334] = 2,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9342] = 2,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9350] = 2,
    ACTIONS(1401), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9358] = 2,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9366] = 2,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9374] = 2,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9382] = 2,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9390] = 2,
    ACTIONS(1409), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9398] = 2,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9406] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9414] = 2,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [9422] = 2,
    ACTIONS(1417), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 463,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 602,
  [SMALL_STATE(19)] = 636,
  [SMALL_STATE(20)] = 670,
  [SMALL_STATE(21)] = 704,
  [SMALL_STATE(22)] = 738,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 842,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 910,
  [SMALL_STATE(28)] = 944,
  [SMALL_STATE(29)] = 978,
  [SMALL_STATE(30)] = 1012,
  [SMALL_STATE(31)] = 1046,
  [SMALL_STATE(32)] = 1080,
  [SMALL_STATE(33)] = 1114,
  [SMALL_STATE(34)] = 1148,
  [SMALL_STATE(35)] = 1182,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1250,
  [SMALL_STATE(38)] = 1284,
  [SMALL_STATE(39)] = 1318,
  [SMALL_STATE(40)] = 1352,
  [SMALL_STATE(41)] = 1386,
  [SMALL_STATE(42)] = 1420,
  [SMALL_STATE(43)] = 1454,
  [SMALL_STATE(44)] = 1488,
  [SMALL_STATE(45)] = 1522,
  [SMALL_STATE(46)] = 1556,
  [SMALL_STATE(47)] = 1590,
  [SMALL_STATE(48)] = 1624,
  [SMALL_STATE(49)] = 1658,
  [SMALL_STATE(50)] = 1692,
  [SMALL_STATE(51)] = 1726,
  [SMALL_STATE(52)] = 1760,
  [SMALL_STATE(53)] = 1794,
  [SMALL_STATE(54)] = 1828,
  [SMALL_STATE(55)] = 1862,
  [SMALL_STATE(56)] = 1896,
  [SMALL_STATE(57)] = 1930,
  [SMALL_STATE(58)] = 1964,
  [SMALL_STATE(59)] = 1998,
  [SMALL_STATE(60)] = 2032,
  [SMALL_STATE(61)] = 2066,
  [SMALL_STATE(62)] = 2100,
  [SMALL_STATE(63)] = 2134,
  [SMALL_STATE(64)] = 2168,
  [SMALL_STATE(65)] = 2202,
  [SMALL_STATE(66)] = 2236,
  [SMALL_STATE(67)] = 2270,
  [SMALL_STATE(68)] = 2304,
  [SMALL_STATE(69)] = 2338,
  [SMALL_STATE(70)] = 2372,
  [SMALL_STATE(71)] = 2406,
  [SMALL_STATE(72)] = 2440,
  [SMALL_STATE(73)] = 2474,
  [SMALL_STATE(74)] = 2508,
  [SMALL_STATE(75)] = 2542,
  [SMALL_STATE(76)] = 2576,
  [SMALL_STATE(77)] = 2610,
  [SMALL_STATE(78)] = 2644,
  [SMALL_STATE(79)] = 2678,
  [SMALL_STATE(80)] = 2712,
  [SMALL_STATE(81)] = 2746,
  [SMALL_STATE(82)] = 2780,
  [SMALL_STATE(83)] = 2814,
  [SMALL_STATE(84)] = 2848,
  [SMALL_STATE(85)] = 2882,
  [SMALL_STATE(86)] = 2916,
  [SMALL_STATE(87)] = 2950,
  [SMALL_STATE(88)] = 2984,
  [SMALL_STATE(89)] = 3018,
  [SMALL_STATE(90)] = 3052,
  [SMALL_STATE(91)] = 3086,
  [SMALL_STATE(92)] = 3120,
  [SMALL_STATE(93)] = 3154,
  [SMALL_STATE(94)] = 3188,
  [SMALL_STATE(95)] = 3222,
  [SMALL_STATE(96)] = 3256,
  [SMALL_STATE(97)] = 3290,
  [SMALL_STATE(98)] = 3324,
  [SMALL_STATE(99)] = 3358,
  [SMALL_STATE(100)] = 3392,
  [SMALL_STATE(101)] = 3426,
  [SMALL_STATE(102)] = 3460,
  [SMALL_STATE(103)] = 3493,
  [SMALL_STATE(104)] = 3538,
  [SMALL_STATE(105)] = 3569,
  [SMALL_STATE(106)] = 3600,
  [SMALL_STATE(107)] = 3645,
  [SMALL_STATE(108)] = 3678,
  [SMALL_STATE(109)] = 3709,
  [SMALL_STATE(110)] = 3754,
  [SMALL_STATE(111)] = 3799,
  [SMALL_STATE(112)] = 3844,
  [SMALL_STATE(113)] = 3875,
  [SMALL_STATE(114)] = 3920,
  [SMALL_STATE(115)] = 3950,
  [SMALL_STATE(116)] = 3980,
  [SMALL_STATE(117)] = 4010,
  [SMALL_STATE(118)] = 4040,
  [SMALL_STATE(119)] = 4070,
  [SMALL_STATE(120)] = 4100,
  [SMALL_STATE(121)] = 4130,
  [SMALL_STATE(122)] = 4160,
  [SMALL_STATE(123)] = 4190,
  [SMALL_STATE(124)] = 4220,
  [SMALL_STATE(125)] = 4250,
  [SMALL_STATE(126)] = 4280,
  [SMALL_STATE(127)] = 4310,
  [SMALL_STATE(128)] = 4340,
  [SMALL_STATE(129)] = 4367,
  [SMALL_STATE(130)] = 4400,
  [SMALL_STATE(131)] = 4427,
  [SMALL_STATE(132)] = 4468,
  [SMALL_STATE(133)] = 4495,
  [SMALL_STATE(134)] = 4522,
  [SMALL_STATE(135)] = 4549,
  [SMALL_STATE(136)] = 4575,
  [SMALL_STATE(137)] = 4601,
  [SMALL_STATE(138)] = 4630,
  [SMALL_STATE(139)] = 4659,
  [SMALL_STATE(140)] = 4688,
  [SMALL_STATE(141)] = 4711,
  [SMALL_STATE(142)] = 4734,
  [SMALL_STATE(143)] = 4763,
  [SMALL_STATE(144)] = 4786,
  [SMALL_STATE(145)] = 4811,
  [SMALL_STATE(146)] = 4834,
  [SMALL_STATE(147)] = 4881,
  [SMALL_STATE(148)] = 4904,
  [SMALL_STATE(149)] = 4927,
  [SMALL_STATE(150)] = 4961,
  [SMALL_STATE(151)] = 4995,
  [SMALL_STATE(152)] = 5016,
  [SMALL_STATE(153)] = 5037,
  [SMALL_STATE(154)] = 5060,
  [SMALL_STATE(155)] = 5083,
  [SMALL_STATE(156)] = 5103,
  [SMALL_STATE(157)] = 5123,
  [SMALL_STATE(158)] = 5142,
  [SMALL_STATE(159)] = 5161,
  [SMALL_STATE(160)] = 5182,
  [SMALL_STATE(161)] = 5201,
  [SMALL_STATE(162)] = 5220,
  [SMALL_STATE(163)] = 5245,
  [SMALL_STATE(164)] = 5266,
  [SMALL_STATE(165)] = 5285,
  [SMALL_STATE(166)] = 5304,
  [SMALL_STATE(167)] = 5323,
  [SMALL_STATE(168)] = 5342,
  [SMALL_STATE(169)] = 5361,
  [SMALL_STATE(170)] = 5380,
  [SMALL_STATE(171)] = 5401,
  [SMALL_STATE(172)] = 5420,
  [SMALL_STATE(173)] = 5439,
  [SMALL_STATE(174)] = 5458,
  [SMALL_STATE(175)] = 5477,
  [SMALL_STATE(176)] = 5496,
  [SMALL_STATE(177)] = 5515,
  [SMALL_STATE(178)] = 5550,
  [SMALL_STATE(179)] = 5569,
  [SMALL_STATE(180)] = 5588,
  [SMALL_STATE(181)] = 5607,
  [SMALL_STATE(182)] = 5626,
  [SMALL_STATE(183)] = 5645,
  [SMALL_STATE(184)] = 5666,
  [SMALL_STATE(185)] = 5685,
  [SMALL_STATE(186)] = 5706,
  [SMALL_STATE(187)] = 5725,
  [SMALL_STATE(188)] = 5744,
  [SMALL_STATE(189)] = 5763,
  [SMALL_STATE(190)] = 5788,
  [SMALL_STATE(191)] = 5807,
  [SMALL_STATE(192)] = 5826,
  [SMALL_STATE(193)] = 5845,
  [SMALL_STATE(194)] = 5864,
  [SMALL_STATE(195)] = 5883,
  [SMALL_STATE(196)] = 5901,
  [SMALL_STATE(197)] = 5919,
  [SMALL_STATE(198)] = 5937,
  [SMALL_STATE(199)] = 5955,
  [SMALL_STATE(200)] = 5975,
  [SMALL_STATE(201)] = 5993,
  [SMALL_STATE(202)] = 6011,
  [SMALL_STATE(203)] = 6029,
  [SMALL_STATE(204)] = 6047,
  [SMALL_STATE(205)] = 6065,
  [SMALL_STATE(206)] = 6083,
  [SMALL_STATE(207)] = 6101,
  [SMALL_STATE(208)] = 6133,
  [SMALL_STATE(209)] = 6151,
  [SMALL_STATE(210)] = 6169,
  [SMALL_STATE(211)] = 6187,
  [SMALL_STATE(212)] = 6205,
  [SMALL_STATE(213)] = 6223,
  [SMALL_STATE(214)] = 6244,
  [SMALL_STATE(215)] = 6262,
  [SMALL_STATE(216)] = 6288,
  [SMALL_STATE(217)] = 6306,
  [SMALL_STATE(218)] = 6324,
  [SMALL_STATE(219)] = 6342,
  [SMALL_STATE(220)] = 6366,
  [SMALL_STATE(221)] = 6384,
  [SMALL_STATE(222)] = 6408,
  [SMALL_STATE(223)] = 6432,
  [SMALL_STATE(224)] = 6456,
  [SMALL_STATE(225)] = 6482,
  [SMALL_STATE(226)] = 6502,
  [SMALL_STATE(227)] = 6526,
  [SMALL_STATE(228)] = 6544,
  [SMALL_STATE(229)] = 6568,
  [SMALL_STATE(230)] = 6586,
  [SMALL_STATE(231)] = 6606,
  [SMALL_STATE(232)] = 6632,
  [SMALL_STATE(233)] = 6656,
  [SMALL_STATE(234)] = 6682,
  [SMALL_STATE(235)] = 6708,
  [SMALL_STATE(236)] = 6726,
  [SMALL_STATE(237)] = 6750,
  [SMALL_STATE(238)] = 6776,
  [SMALL_STATE(239)] = 6793,
  [SMALL_STATE(240)] = 6810,
  [SMALL_STATE(241)] = 6827,
  [SMALL_STATE(242)] = 6844,
  [SMALL_STATE(243)] = 6861,
  [SMALL_STATE(244)] = 6878,
  [SMALL_STATE(245)] = 6895,
  [SMALL_STATE(246)] = 6912,
  [SMALL_STATE(247)] = 6935,
  [SMALL_STATE(248)] = 6952,
  [SMALL_STATE(249)] = 6971,
  [SMALL_STATE(250)] = 6988,
  [SMALL_STATE(251)] = 7005,
  [SMALL_STATE(252)] = 7022,
  [SMALL_STATE(253)] = 7039,
  [SMALL_STATE(254)] = 7058,
  [SMALL_STATE(255)] = 7075,
  [SMALL_STATE(256)] = 7098,
  [SMALL_STATE(257)] = 7114,
  [SMALL_STATE(258)] = 7130,
  [SMALL_STATE(259)] = 7144,
  [SMALL_STATE(260)] = 7162,
  [SMALL_STATE(261)] = 7174,
  [SMALL_STATE(262)] = 7190,
  [SMALL_STATE(263)] = 7204,
  [SMALL_STATE(264)] = 7218,
  [SMALL_STATE(265)] = 7232,
  [SMALL_STATE(266)] = 7247,
  [SMALL_STATE(267)] = 7258,
  [SMALL_STATE(268)] = 7275,
  [SMALL_STATE(269)] = 7286,
  [SMALL_STATE(270)] = 7301,
  [SMALL_STATE(271)] = 7312,
  [SMALL_STATE(272)] = 7323,
  [SMALL_STATE(273)] = 7338,
  [SMALL_STATE(274)] = 7355,
  [SMALL_STATE(275)] = 7370,
  [SMALL_STATE(276)] = 7381,
  [SMALL_STATE(277)] = 7392,
  [SMALL_STATE(278)] = 7403,
  [SMALL_STATE(279)] = 7418,
  [SMALL_STATE(280)] = 7429,
  [SMALL_STATE(281)] = 7446,
  [SMALL_STATE(282)] = 7457,
  [SMALL_STATE(283)] = 7468,
  [SMALL_STATE(284)] = 7479,
  [SMALL_STATE(285)] = 7490,
  [SMALL_STATE(286)] = 7505,
  [SMALL_STATE(287)] = 7520,
  [SMALL_STATE(288)] = 7537,
  [SMALL_STATE(289)] = 7554,
  [SMALL_STATE(290)] = 7565,
  [SMALL_STATE(291)] = 7582,
  [SMALL_STATE(292)] = 7599,
  [SMALL_STATE(293)] = 7610,
  [SMALL_STATE(294)] = 7621,
  [SMALL_STATE(295)] = 7632,
  [SMALL_STATE(296)] = 7643,
  [SMALL_STATE(297)] = 7658,
  [SMALL_STATE(298)] = 7673,
  [SMALL_STATE(299)] = 7688,
  [SMALL_STATE(300)] = 7703,
  [SMALL_STATE(301)] = 7720,
  [SMALL_STATE(302)] = 7735,
  [SMALL_STATE(303)] = 7750,
  [SMALL_STATE(304)] = 7761,
  [SMALL_STATE(305)] = 7776,
  [SMALL_STATE(306)] = 7791,
  [SMALL_STATE(307)] = 7808,
  [SMALL_STATE(308)] = 7823,
  [SMALL_STATE(309)] = 7840,
  [SMALL_STATE(310)] = 7852,
  [SMALL_STATE(311)] = 7866,
  [SMALL_STATE(312)] = 7880,
  [SMALL_STATE(313)] = 7894,
  [SMALL_STATE(314)] = 7908,
  [SMALL_STATE(315)] = 7922,
  [SMALL_STATE(316)] = 7934,
  [SMALL_STATE(317)] = 7948,
  [SMALL_STATE(318)] = 7962,
  [SMALL_STATE(319)] = 7976,
  [SMALL_STATE(320)] = 7990,
  [SMALL_STATE(321)] = 8004,
  [SMALL_STATE(322)] = 8018,
  [SMALL_STATE(323)] = 8032,
  [SMALL_STATE(324)] = 8046,
  [SMALL_STATE(325)] = 8060,
  [SMALL_STATE(326)] = 8074,
  [SMALL_STATE(327)] = 8086,
  [SMALL_STATE(328)] = 8100,
  [SMALL_STATE(329)] = 8110,
  [SMALL_STATE(330)] = 8122,
  [SMALL_STATE(331)] = 8132,
  [SMALL_STATE(332)] = 8144,
  [SMALL_STATE(333)] = 8156,
  [SMALL_STATE(334)] = 8168,
  [SMALL_STATE(335)] = 8178,
  [SMALL_STATE(336)] = 8190,
  [SMALL_STATE(337)] = 8199,
  [SMALL_STATE(338)] = 8208,
  [SMALL_STATE(339)] = 8217,
  [SMALL_STATE(340)] = 8226,
  [SMALL_STATE(341)] = 8235,
  [SMALL_STATE(342)] = 8246,
  [SMALL_STATE(343)] = 8255,
  [SMALL_STATE(344)] = 8266,
  [SMALL_STATE(345)] = 8273,
  [SMALL_STATE(346)] = 8284,
  [SMALL_STATE(347)] = 8295,
  [SMALL_STATE(348)] = 8302,
  [SMALL_STATE(349)] = 8309,
  [SMALL_STATE(350)] = 8316,
  [SMALL_STATE(351)] = 8323,
  [SMALL_STATE(352)] = 8330,
  [SMALL_STATE(353)] = 8337,
  [SMALL_STATE(354)] = 8344,
  [SMALL_STATE(355)] = 8351,
  [SMALL_STATE(356)] = 8358,
  [SMALL_STATE(357)] = 8367,
  [SMALL_STATE(358)] = 8378,
  [SMALL_STATE(359)] = 8385,
  [SMALL_STATE(360)] = 8392,
  [SMALL_STATE(361)] = 8401,
  [SMALL_STATE(362)] = 8410,
  [SMALL_STATE(363)] = 8417,
  [SMALL_STATE(364)] = 8426,
  [SMALL_STATE(365)] = 8433,
  [SMALL_STATE(366)] = 8444,
  [SMALL_STATE(367)] = 8451,
  [SMALL_STATE(368)] = 8458,
  [SMALL_STATE(369)] = 8467,
  [SMALL_STATE(370)] = 8476,
  [SMALL_STATE(371)] = 8485,
  [SMALL_STATE(372)] = 8492,
  [SMALL_STATE(373)] = 8499,
  [SMALL_STATE(374)] = 8506,
  [SMALL_STATE(375)] = 8517,
  [SMALL_STATE(376)] = 8524,
  [SMALL_STATE(377)] = 8531,
  [SMALL_STATE(378)] = 8540,
  [SMALL_STATE(379)] = 8547,
  [SMALL_STATE(380)] = 8556,
  [SMALL_STATE(381)] = 8563,
  [SMALL_STATE(382)] = 8570,
  [SMALL_STATE(383)] = 8577,
  [SMALL_STATE(384)] = 8584,
  [SMALL_STATE(385)] = 8593,
  [SMALL_STATE(386)] = 8602,
  [SMALL_STATE(387)] = 8609,
  [SMALL_STATE(388)] = 8618,
  [SMALL_STATE(389)] = 8625,
  [SMALL_STATE(390)] = 8636,
  [SMALL_STATE(391)] = 8643,
  [SMALL_STATE(392)] = 8650,
  [SMALL_STATE(393)] = 8657,
  [SMALL_STATE(394)] = 8664,
  [SMALL_STATE(395)] = 8671,
  [SMALL_STATE(396)] = 8682,
  [SMALL_STATE(397)] = 8689,
  [SMALL_STATE(398)] = 8698,
  [SMALL_STATE(399)] = 8705,
  [SMALL_STATE(400)] = 8716,
  [SMALL_STATE(401)] = 8723,
  [SMALL_STATE(402)] = 8730,
  [SMALL_STATE(403)] = 8737,
  [SMALL_STATE(404)] = 8744,
  [SMALL_STATE(405)] = 8751,
  [SMALL_STATE(406)] = 8762,
  [SMALL_STATE(407)] = 8769,
  [SMALL_STATE(408)] = 8778,
  [SMALL_STATE(409)] = 8789,
  [SMALL_STATE(410)] = 8800,
  [SMALL_STATE(411)] = 8811,
  [SMALL_STATE(412)] = 8822,
  [SMALL_STATE(413)] = 8829,
  [SMALL_STATE(414)] = 8838,
  [SMALL_STATE(415)] = 8847,
  [SMALL_STATE(416)] = 8858,
  [SMALL_STATE(417)] = 8867,
  [SMALL_STATE(418)] = 8878,
  [SMALL_STATE(419)] = 8886,
  [SMALL_STATE(420)] = 8894,
  [SMALL_STATE(421)] = 8902,
  [SMALL_STATE(422)] = 8910,
  [SMALL_STATE(423)] = 8918,
  [SMALL_STATE(424)] = 8926,
  [SMALL_STATE(425)] = 8934,
  [SMALL_STATE(426)] = 8942,
  [SMALL_STATE(427)] = 8950,
  [SMALL_STATE(428)] = 8958,
  [SMALL_STATE(429)] = 8966,
  [SMALL_STATE(430)] = 8974,
  [SMALL_STATE(431)] = 8982,
  [SMALL_STATE(432)] = 8990,
  [SMALL_STATE(433)] = 8998,
  [SMALL_STATE(434)] = 9006,
  [SMALL_STATE(435)] = 9014,
  [SMALL_STATE(436)] = 9022,
  [SMALL_STATE(437)] = 9030,
  [SMALL_STATE(438)] = 9038,
  [SMALL_STATE(439)] = 9046,
  [SMALL_STATE(440)] = 9054,
  [SMALL_STATE(441)] = 9062,
  [SMALL_STATE(442)] = 9070,
  [SMALL_STATE(443)] = 9078,
  [SMALL_STATE(444)] = 9086,
  [SMALL_STATE(445)] = 9094,
  [SMALL_STATE(446)] = 9102,
  [SMALL_STATE(447)] = 9110,
  [SMALL_STATE(448)] = 9118,
  [SMALL_STATE(449)] = 9126,
  [SMALL_STATE(450)] = 9134,
  [SMALL_STATE(451)] = 9142,
  [SMALL_STATE(452)] = 9150,
  [SMALL_STATE(453)] = 9158,
  [SMALL_STATE(454)] = 9166,
  [SMALL_STATE(455)] = 9174,
  [SMALL_STATE(456)] = 9182,
  [SMALL_STATE(457)] = 9190,
  [SMALL_STATE(458)] = 9198,
  [SMALL_STATE(459)] = 9206,
  [SMALL_STATE(460)] = 9214,
  [SMALL_STATE(461)] = 9222,
  [SMALL_STATE(462)] = 9230,
  [SMALL_STATE(463)] = 9238,
  [SMALL_STATE(464)] = 9246,
  [SMALL_STATE(465)] = 9254,
  [SMALL_STATE(466)] = 9262,
  [SMALL_STATE(467)] = 9270,
  [SMALL_STATE(468)] = 9278,
  [SMALL_STATE(469)] = 9286,
  [SMALL_STATE(470)] = 9294,
  [SMALL_STATE(471)] = 9302,
  [SMALL_STATE(472)] = 9310,
  [SMALL_STATE(473)] = 9318,
  [SMALL_STATE(474)] = 9326,
  [SMALL_STATE(475)] = 9334,
  [SMALL_STATE(476)] = 9342,
  [SMALL_STATE(477)] = 9350,
  [SMALL_STATE(478)] = 9358,
  [SMALL_STATE(479)] = 9366,
  [SMALL_STATE(480)] = 9374,
  [SMALL_STATE(481)] = 9382,
  [SMALL_STATE(482)] = 9390,
  [SMALL_STATE(483)] = 9398,
  [SMALL_STATE(484)] = 9406,
  [SMALL_STATE(485)] = 9414,
  [SMALL_STATE(486)] = 9422,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(9),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(246),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(40),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(40),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(255),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(440),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(207),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(145),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(145),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(152),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(189),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(411),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(142),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(142),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(472),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(237),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(146),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 5),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 5),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 4),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6), REDUCE(sym_rhs_slot, 3, .production_id = 10),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(235),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(447),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(345),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(268),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(441),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2), SHIFT_REPEAT(256),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_template, 3),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(261),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(432),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4, .production_id = 6),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(423),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(346),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3), REDUCE(sym_template_pattern_CE, 3, .production_id = 6),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(332),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2), SHIFT_REPEAT(482),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 9),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 9),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 12),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(455),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(298),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 12),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(310),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(314),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(318),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(320),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(324),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 7),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 10),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 10),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_slot, 3, .production_id = 10),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3, .production_id = 5),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_slot, 4, .production_id = 10),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 10),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 7),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_member_template, 4, .production_id = 13),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 5, .production_id = 1),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 10),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 7),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 7),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4, .production_id = 5),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 9),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 12),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 12),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 9),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_clips() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
