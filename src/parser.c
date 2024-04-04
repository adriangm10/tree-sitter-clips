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
#define STATE_COUNT 448
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
  [6] = 6,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 7,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 16,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 36,
  [42] = 42,
  [43] = 16,
  [44] = 44,
  [45] = 17,
  [46] = 46,
  [47] = 47,
  [48] = 35,
  [49] = 32,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 6,
  [69] = 31,
  [70] = 70,
  [71] = 28,
  [72] = 17,
  [73] = 73,
  [74] = 26,
  [75] = 25,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 24,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
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
  [131] = 130,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 122,
  [137] = 118,
  [138] = 138,
  [139] = 139,
  [140] = 118,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 122,
  [160] = 160,
  [161] = 161,
  [162] = 158,
  [163] = 139,
  [164] = 161,
  [165] = 154,
  [166] = 151,
  [167] = 167,
  [168] = 147,
  [169] = 169,
  [170] = 141,
  [171] = 171,
  [172] = 149,
  [173] = 173,
  [174] = 144,
  [175] = 148,
  [176] = 176,
  [177] = 160,
  [178] = 150,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 183,
  [190] = 184,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 205,
  [215] = 215,
  [216] = 209,
  [217] = 204,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
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
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
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
  [282] = 120,
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
  [293] = 283,
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
  [326] = 326,
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
  [340] = 301,
  [341] = 302,
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
  [365] = 305,
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
  [408] = 408,
  [409] = 409,
  [410] = 118,
  [411] = 122,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
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
  [437] = 398,
  [438] = 438,
  [439] = 439,
  [440] = 438,
  [441] = 441,
  [442] = 442,
  [443] = 398,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
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
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(502);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == ':') ADVANCE(505);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '[') ADVANCE(316);
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
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '~') ADVANCE(504);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(320);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(502);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '~') ADVANCE(504);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11) ADVANCE(420);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(502);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == 'D') ADVANCE(423);
      if (lookahead == 'N') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(474);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(501);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(315);
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
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(459);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(460);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(458);
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
      if (lookahead == 'G') ADVANCE(459);
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
      if (lookahead == 'L') ADVANCE(459);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(22);
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
      if (lookahead == 'R') ADVANCE(459);
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
      if (lookahead == 'S') ADVANCE(459);
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
      if (lookahead == 'T') ADVANCE(459);
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
      if (lookahead == 'T') ADVANCE(22);
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
      if (lookahead == ']') ADVANCE(421);
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
      if (lookahead == 'a') ADVANCE(496);
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
      if (lookahead == 'r') ADVANCE(484);
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
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(456);
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
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(450);
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
      if (lookahead == 'e') ADVANCE(25);
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
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 's') ADVANCE(23);
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
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(509);
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
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(510);
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
      if (lookahead == 'o') ADVANCE(19);
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
      if (lookahead == 'p') ADVANCE(21);
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
      if (lookahead == 'r') ADVANCE(24);
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
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(468);
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
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(436);
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
      if (lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 306:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 307:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 315:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 316:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 317:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 321:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(339);
      END_STATE();
    case 340:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 353:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 395:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 401:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 420:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(421);
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
    case 422:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 431:
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
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 432:
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
          lookahead != '~') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 437:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 439:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 441:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 444:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 446:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 447:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 448:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 454:
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
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 455:
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
          lookahead != '~') ADVANCE(431);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 476:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 481:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 483:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 485:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 487:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 489:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 491:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 493:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 495:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 497:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 499:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 506:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 508:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 29},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 30},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 27},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 13},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 13},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 12},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
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
  [373] = {.lex_state = 32},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 12},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 12},
  [384] = {.lex_state = 12},
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
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 12},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 12},
  [406] = {.lex_state = 12},
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
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 12},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 12},
  [436] = {.lex_state = 12},
  [437] = {.lex_state = 12},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 12},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 12},
  [442] = {.lex_state = 12},
  [443] = {.lex_state = 12},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 12},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(3),
    [sym_str_lit] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
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
    [sym_program] = STATE(399),
    [sym__construct] = STATE(133),
    [sym__gap] = STATE(133),
    [sym_deffacts_construct] = STATE(133),
    [sym_deftemplate_construct] = STATE(133),
    [sym_defrule_construct] = STATE(133),
    [sym_defglobal_construct] = STATE(133),
    [sym_deffunction_construct] = STATE(133),
    [sym_defgeneric_construct] = STATE(133),
    [sym_defmethod_construct] = STATE(133),
    [aux_sym_program_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__ws] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(86), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(264), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [52] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(128), 2,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(27), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(167), 3,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(25), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(18), 7,
      sym__expression,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [92] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(35), 2,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(39), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    ACTIONS(33), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
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
  [130] = 7,
    ACTIONS(29), 1,
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
    STATE(38), 10,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(52), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(49), 4,
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
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [204] = 7,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(64), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(62), 4,
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
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [241] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      anon_sym_do,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(74), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(72), 4,
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
  [278] = 7,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(82), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(80), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(7), 10,
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
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(64), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(62), 4,
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
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [352] = 7,
    ACTIONS(66), 1,
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
  [389] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
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
    STATE(29), 10,
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
  [423] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(108), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(106), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(60), 10,
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
  [457] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
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
  [491] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(35), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(33), 4,
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
  [525] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
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
  [559] = 6,
    ACTIONS(29), 1,
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
  [593] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
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
  [627] = 7,
    ACTIONS(128), 1,
      sym_str_lit,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_EQ_GT,
    STATE(107), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(96), 14,
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
  [663] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
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
  [697] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(140), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(138), 4,
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
  [731] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
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
  [765] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(148), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(146), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(22), 10,
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
  [799] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
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
  [833] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
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
  [867] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
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
  [901] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
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
  [935] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(160), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(158), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(24), 10,
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
  [969] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
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
  [1003] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(166), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(164), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(27), 10,
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
  [1037] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
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
  [1071] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(174), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(172), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(25), 10,
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
  [1105] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(180), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(178), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(55), 10,
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
  [1139] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(186), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(184), 4,
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
  [1173] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(192), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(190), 4,
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
  [1207] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(198), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(196), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(69), 10,
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
  [1241] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(204), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(202), 4,
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
  [1275] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
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
  [1309] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
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
  [1343] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
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
  [1377] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(212), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(210), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(31), 10,
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
  [1411] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
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
  [1445] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
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
  [1479] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(220), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(218), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(42), 10,
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
  [1513] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(226), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(224), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(43), 10,
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
  [1547] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
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
  [1581] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
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
  [1615] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(232), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(230), 4,
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
  [1649] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(238), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(236), 4,
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
  [1683] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
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
  [1717] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(246), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(244), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(76), 10,
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
  [1751] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
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
  [1785] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(252), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(250), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(78), 10,
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
  [1819] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
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
  [1853] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
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
  [1887] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(260), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(258), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(73), 10,
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
  [1921] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
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
  [1955] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(266), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(264), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(83), 10,
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
  [1989] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(270), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(268), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(46), 10,
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
  [2023] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
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
  [2057] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(278), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(276), 4,
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
  [2091] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(284), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(282), 4,
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
  [2125] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
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
  [2159] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
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
  [2193] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(294), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(292), 4,
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
  [2227] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(298), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(296), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(14), 10,
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
  [2261] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
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
  [2295] = 6,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(305), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(302), 4,
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
  [2329] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
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
  [2363] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
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
  [2397] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
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
  [2431] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(325), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(323), 4,
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
  [2465] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
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
  [2499] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
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
  [2533] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
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
  [2567] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
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
  [2601] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
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
  [2635] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
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
  [2669] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(341), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(339), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(67), 10,
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
  [2703] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
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
    STATE(81), 10,
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
  [2737] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
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
  [2771] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
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
  [2805] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
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
  [2839] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(359), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(357), 4,
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
  [2873] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
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
  [2907] = 12,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(90), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [2952] = 5,
    ACTIONS(365), 1,
      sym_single_field_variable,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(87), 14,
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
  [2983] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(375), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(373), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(382), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3016] = 12,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(93), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3061] = 12,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_TILDE,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(384), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(389), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(395), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(90), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(381), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3106] = 6,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_EQ_GT,
    STATE(100), 1,
      sym_declaration,
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
  [3139] = 12,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(90), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3184] = 12,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(90), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3229] = 12,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(92), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3274] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3304] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3334] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3364] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3394] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(418), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(416), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(348), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3424] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(95), 14,
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
  [3454] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3484] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(426), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(424), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(88), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3514] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3544] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3574] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3604] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(87), 14,
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
  [3634] = 5,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(101), 14,
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
  [3664] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(436), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(434), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(388), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3694] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(103), 14,
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
  [3721] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(104), 14,
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
  [3748] = 11,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(132), 1,
      sym_connected_constraint,
    STATE(282), 1,
      sym_single_constraint,
    STATE(390), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(440), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3789] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(106), 14,
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
  [3816] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(98), 14,
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
  [3843] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(97), 14,
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
  [3870] = 7,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(247), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
    ACTIONS(444), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(442), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(127), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [3903] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(395), 13,
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
  [3929] = 4,
    ACTIONS(130), 1,
      sym_single_field_variable,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(109), 13,
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
  [3955] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(452), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(450), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3978] = 15,
    ACTIONS(454), 1,
      anon_sym_default,
    ACTIONS(456), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(458), 1,
      anon_sym_type,
    ACTIONS(460), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(462), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(464), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(466), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(468), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(470), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(472), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(474), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(476), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(478), 1,
      anon_sym_range,
    ACTIONS(480), 1,
      anon_sym_cardinality,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [4025] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(484), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(482), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4050] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(490), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(488), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4073] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(494), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(492), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4096] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(498), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(496), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4119] = 6,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(503), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(500), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4148] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(513), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(511), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4171] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(517), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(515), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4194] = 6,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(521), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(519), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4223] = 6,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(521), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(519), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4252] = 6,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(531), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(529), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(128), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4281] = 9,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    STATE(120), 1,
      sym_single_constraint,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(134), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4315] = 9,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(121), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    STATE(134), 1,
      sym_connected_constraint,
    STATE(282), 1,
      sym_single_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(440), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4349] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(537), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(535), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4370] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 2,
      sym__ws,
      sym_comment,
    STATE(135), 10,
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
  [4393] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(545), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(543), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4414] = 4,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 2,
      sym__ws,
      sym_comment,
    STATE(135), 10,
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
  [4437] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(492), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(494), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4457] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(450), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(452), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4477] = 11,
    ACTIONS(555), 1,
      sym_symbol,
    ACTIONS(557), 1,
      anon_sym_declare,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(565), 1,
      anon_sym_logical,
    ACTIONS(567), 1,
      anon_sym_test,
    ACTIONS(569), 1,
      anon_sym_exists,
    ACTIONS(571), 1,
      anon_sym_forall,
    ACTIONS(573), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [4512] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(575), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(577), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4531] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(450), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(452), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4550] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(579), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(581), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4569] = 4,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(152), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4590] = 6,
    STATE(123), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4615] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(587), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(589), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4634] = 6,
    STATE(123), 1,
      sym_term,
    STATE(126), 1,
      sym__constant,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(440), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4659] = 4,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(152), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4680] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(593), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(595), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4699] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(597), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(599), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4718] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(601), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(603), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4737] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(605), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(607), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4756] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(609), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(611), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4775] = 4,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(152), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4796] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(618), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(620), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4815] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(622), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(624), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4834] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(626), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(628), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4853] = 4,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(142), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4874] = 4,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(146), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4895] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(634), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(636), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4914] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(492), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(494), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4933] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(638), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(640), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4952] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(642), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(644), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4971] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(634), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(636), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4989] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(575), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(577), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5007] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(642), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(644), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5025] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(622), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(624), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5043] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(609), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(611), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5061] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(646), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(649), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5079] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(593), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(595), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5097] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(652), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(654), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5115] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(579), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(581), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5133] = 10,
    ACTIONS(555), 1,
      sym_symbol,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(565), 1,
      anon_sym_logical,
    ACTIONS(567), 1,
      anon_sym_test,
    ACTIONS(569), 1,
      anon_sym_exists,
    ACTIONS(571), 1,
      anon_sym_forall,
    ACTIONS(573), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5165] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(601), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(603), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5183] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(656), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(658), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5201] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(587), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(589), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5219] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(597), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(599), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5237] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(660), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(662), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5255] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(638), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(640), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5273] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(605), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(607), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5291] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(452), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(450), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5311] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARKVARIABLE,
    STATE(420), 1,
      sym_value_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(185), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(667), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5332] = 8,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      sym_symbol,
    ACTIONS(673), 1,
      sym_global_variable,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(403), 1,
      sym_query,
    STATE(414), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5358] = 8,
    ACTIONS(677), 1,
      anon_sym_deffacts,
    ACTIONS(679), 1,
      anon_sym_deftemplate,
    ACTIONS(681), 1,
      anon_sym_defrule,
    ACTIONS(683), 1,
      anon_sym_defglobal,
    ACTIONS(685), 1,
      anon_sym_deffunction,
    ACTIONS(687), 1,
      anon_sym_defgeneric,
    ACTIONS(689), 1,
      anon_sym_defmethod,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5384] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(32), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(691), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5402] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(35), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(693), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5420] = 4,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(186), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(695), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5438] = 4,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(186), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(699), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5456] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(198), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5480] = 8,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      sym_global_variable,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(414), 1,
      sym_function_call,
    STATE(431), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5506] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(49), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(716), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5524] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(48), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(718), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5542] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(200), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5566] = 8,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      sym_global_variable,
    ACTIONS(722), 1,
      sym_symbol,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(396), 1,
      sym_query,
    STATE(414), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5592] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5616] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5640] = 8,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      sym_global_variable,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(414), 1,
      sym_function_call,
    STATE(444), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5666] = 5,
    ACTIONS(732), 1,
      sym_str_lit,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(202), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5686] = 5,
    ACTIONS(738), 1,
      sym_str_lit,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(208), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5706] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5730] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5754] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5778] = 7,
    ACTIONS(704), 1,
      sym_single_field_variable,
    ACTIONS(706), 1,
      sym_multifield_variable,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(193), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5802] = 4,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(213), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5819] = 4,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(215), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5836] = 4,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(438), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(756), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [5853] = 7,
    ACTIONS(760), 1,
      sym_symbol,
    ACTIONS(762), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(764), 1,
      anon_sym_if,
    ACTIONS(766), 1,
      anon_sym_assert,
    ACTIONS(768), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(770), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5876] = 4,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(206), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5893] = 4,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(211), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5910] = 4,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(206), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5927] = 4,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(213), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5944] = 5,
    ACTIONS(785), 1,
      anon_sym_QMARKVARIABLE,
    STATE(420), 1,
      sym_lexeme_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(783), 2,
      sym_str_lit,
      sym_symbol,
    STATE(219), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [5963] = 4,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(206), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5980] = 5,
    ACTIONS(789), 1,
      sym_single_field_variable,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(792), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(212), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5999] = 4,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(213), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6016] = 7,
    ACTIONS(802), 1,
      sym_symbol,
    ACTIONS(804), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(806), 1,
      anon_sym_if,
    ACTIONS(808), 1,
      anon_sym_assert,
    ACTIONS(810), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(812), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6039] = 4,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(213), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6056] = 4,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(213), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6073] = 4,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(440), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(818), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6090] = 3,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(226), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [6104] = 4,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(822), 2,
      sym_str_lit,
      sym_symbol,
    STATE(223), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [6120] = 5,
    ACTIONS(826), 1,
      sym_symbol,
    ACTIONS(828), 1,
      sym_global_variable,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(234), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6138] = 3,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(209), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6152] = 3,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(216), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6166] = 4,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(832), 2,
      sym_str_lit,
      sym_symbol,
    STATE(223), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [6182] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(837), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      sym_boolean_symbol,
  [6194] = 4,
    ACTIONS(839), 1,
      sym_symbol,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(842), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6210] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(844), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6221] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(846), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6232] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(848), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6243] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(850), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6254] = 4,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(230), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6269] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(857), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6280] = 4,
    ACTIONS(828), 1,
      sym_global_variable,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(237), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6295] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(861), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6306] = 4,
    ACTIONS(828), 1,
      sym_global_variable,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6321] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(865), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6332] = 4,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(236), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [6347] = 4,
    ACTIONS(828), 1,
      sym_global_variable,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6362] = 4,
    ACTIONS(874), 1,
      sym_global_variable,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6377] = 5,
    ACTIONS(879), 1,
      sym_single_field_variable,
    ACTIONS(881), 1,
      sym_multifield_variable,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6394] = 4,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(230), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6409] = 4,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(241), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [6424] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(894), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6435] = 4,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(240), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6450] = 5,
    ACTIONS(898), 1,
      sym_single_field_variable,
    ACTIONS(900), 1,
      sym_multifield_variable,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6467] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(904), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6478] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(906), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6489] = 4,
    ACTIONS(908), 1,
      anon_sym_LPAREN,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(236), 2,
      sym_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [6504] = 5,
    ACTIONS(912), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(914), 1,
      sym_allowed_type,
    STATE(296), 1,
      aux_sym_type_specification_repeat1,
    STATE(424), 1,
      sym_type_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6521] = 5,
    ACTIONS(916), 1,
      sym_symbol,
    ACTIONS(918), 1,
      anon_sym_QMARKVARIABLE,
    STATE(273), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(420), 1,
      sym_symbol_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6538] = 5,
    ACTIONS(920), 1,
      sym_str_lit,
    ACTIONS(922), 1,
      anon_sym_QMARKVARIABLE,
    STATE(287), 1,
      aux_sym_string_list_repeat1,
    STATE(420), 1,
      sym_string_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6555] = 5,
    ACTIONS(924), 1,
      sym_integer,
    ACTIONS(926), 1,
      anon_sym_QMARKVARIABLE,
    STATE(291), 1,
      aux_sym_integer_list_repeat1,
    STATE(420), 1,
      sym_integer_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6572] = 5,
    ACTIONS(928), 1,
      sym_float,
    ACTIONS(930), 1,
      anon_sym_QMARKVARIABLE,
    STATE(295), 1,
      aux_sym_float_list_repeat1,
    STATE(420), 1,
      sym_float_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6589] = 5,
    ACTIONS(932), 1,
      sym_number,
    ACTIONS(934), 1,
      anon_sym_QMARKVARIABLE,
    STATE(298), 1,
      aux_sym_number_list_repeat1,
    STATE(420), 1,
      sym_number_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6606] = 5,
    ACTIONS(936), 1,
      sym_symbol,
    ACTIONS(938), 1,
      anon_sym_QMARKVARIABLE,
    STATE(288), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(420), 1,
      sym_instance_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6623] = 5,
    ACTIONS(940), 1,
      sym_symbol,
    ACTIONS(942), 1,
      anon_sym_QMARKVARIABLE,
    STATE(290), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(420), 1,
      sym_class_name_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6640] = 4,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(241), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [6655] = 4,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(265), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [6670] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(952), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6681] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(955), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6692] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(957), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6703] = 4,
    ACTIONS(959), 1,
      sym_single_field_variable,
    STATE(261), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(962), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [6718] = 4,
    ACTIONS(964), 1,
      anon_sym_LPAREN,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(262), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [6733] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(969), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6744] = 4,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(262), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [6759] = 4,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(265), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [6774] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(978), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6785] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(980), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6796] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(982), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6807] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(984), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6818] = 4,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(988), 1,
      sym_allowed_type,
    STATE(270), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6832] = 4,
    ACTIONS(991), 1,
      sym_str_lit,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6846] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(996), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [6856] = 4,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6870] = 4,
    ACTIONS(1000), 1,
      sym_integer,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6884] = 4,
    ACTIONS(1005), 1,
      sym_float,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6898] = 4,
    ACTIONS(1010), 1,
      sym_number,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6912] = 3,
    STATE(297), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1015), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [6924] = 3,
    STATE(289), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1017), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [6936] = 3,
    ACTIONS(1019), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1021), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [6948] = 4,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6962] = 3,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(257), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [6974] = 3,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6986] = 4,
    ACTIONS(1027), 1,
      sym_integer,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_range_spec,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7000] = 4,
    ACTIONS(1031), 1,
      sym_str_lit,
    ACTIONS(1033), 1,
      sym_integer,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7014] = 4,
    ACTIONS(1037), 1,
      sym_str_lit,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7028] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1041), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [7038] = 4,
    ACTIONS(1043), 1,
      sym_str_lit,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7052] = 4,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7066] = 3,
    STATE(386), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1017), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [7078] = 4,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7092] = 4,
    ACTIONS(1051), 1,
      sym_integer,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7106] = 3,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(256), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [7118] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1055), 1,
      sym_integer,
    STATE(8), 1,
      sym_range_spec,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7132] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1057), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [7142] = 4,
    ACTIONS(1059), 1,
      sym_float,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7156] = 4,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      sym_allowed_type,
    STATE(270), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7170] = 3,
    STATE(385), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1015), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [7182] = 4,
    ACTIONS(1067), 1,
      sym_number,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7196] = 1,
    ACTIONS(1071), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7203] = 1,
    ACTIONS(1073), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7210] = 3,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7221] = 3,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7232] = 1,
    ACTIONS(1077), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7239] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1079), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7248] = 3,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7259] = 1,
    ACTIONS(1081), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7266] = 1,
    ACTIONS(1083), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7273] = 1,
    ACTIONS(1085), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7280] = 1,
    ACTIONS(1087), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7287] = 1,
    ACTIONS(1089), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7294] = 1,
    ACTIONS(1091), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7301] = 3,
    ACTIONS(1093), 1,
      sym_str_lit,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7312] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1097), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7321] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7330] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1101), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7339] = 1,
    ACTIONS(1103), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7346] = 3,
    ACTIONS(1105), 1,
      anon_sym_slot,
    ACTIONS(1107), 1,
      anon_sym_multislot,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7357] = 1,
    ACTIONS(1109), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7364] = 1,
    ACTIONS(1111), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7371] = 1,
    ACTIONS(1113), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7378] = 1,
    ACTIONS(1115), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7385] = 3,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7396] = 1,
    ACTIONS(1117), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7403] = 1,
    ACTIONS(1119), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7410] = 3,
    ACTIONS(1121), 1,
      sym_str_lit,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7421] = 1,
    ACTIONS(1125), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7428] = 1,
    ACTIONS(1127), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7435] = 1,
    ACTIONS(1129), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7442] = 1,
    ACTIONS(1131), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7449] = 3,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7460] = 1,
    ACTIONS(1133), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7467] = 1,
    ACTIONS(1135), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7474] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1137), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7483] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1139), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7492] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1141), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7501] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1143), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7510] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7519] = 1,
    ACTIONS(1147), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7526] = 1,
    ACTIONS(1149), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7533] = 3,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7544] = 3,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7555] = 1,
    ACTIONS(1151), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7562] = 3,
    ACTIONS(1153), 1,
      sym_symbol,
    STATE(280), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7573] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1155), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7582] = 1,
    ACTIONS(1157), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7589] = 1,
    ACTIONS(1159), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7596] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1161), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7605] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1163), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [7614] = 1,
    ACTIONS(1165), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7621] = 1,
    ACTIONS(1167), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7628] = 1,
    ACTIONS(1169), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7635] = 1,
    ACTIONS(1171), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7642] = 1,
    ACTIONS(1173), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7649] = 3,
    ACTIONS(1175), 1,
      anon_sym_salience,
    ACTIONS(1177), 1,
      anon_sym_auto_DASHfocus,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7660] = 1,
    ACTIONS(1179), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7667] = 1,
    ACTIONS(1181), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7674] = 1,
    ACTIONS(1183), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7681] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1185), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7690] = 1,
    ACTIONS(1187), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7697] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1189), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7706] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1191), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7715] = 3,
    ACTIONS(1193), 1,
      sym_single_field_variable,
    ACTIONS(1195), 1,
      sym_multifield_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7726] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1197), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7735] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1199), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7744] = 3,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7755] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7764] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1205), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7773] = 1,
    ACTIONS(1207), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7780] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7789] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1211), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7798] = 1,
    ACTIONS(1213), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7805] = 1,
    ACTIONS(1215), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7812] = 3,
    ACTIONS(555), 1,
      sym_symbol,
    ACTIONS(573), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7823] = 1,
    ACTIONS(1217), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7830] = 1,
    ACTIONS(1219), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7837] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1221), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7846] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1223), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7855] = 1,
    ACTIONS(1225), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7862] = 2,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7870] = 2,
    ACTIONS(1229), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7878] = 2,
    ACTIONS(1193), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7886] = 2,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7894] = 2,
    ACTIONS(1233), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7902] = 2,
    ACTIONS(1235), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7910] = 2,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7918] = 2,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7926] = 2,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7934] = 2,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7942] = 2,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7950] = 2,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7958] = 2,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7966] = 2,
    ACTIONS(436), 1,
      sym_boolean_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7974] = 2,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7982] = 2,
    ACTIONS(1251), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7990] = 2,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7998] = 2,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8006] = 2,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8014] = 2,
    ACTIONS(1257), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8022] = 2,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8030] = 2,
    ACTIONS(1261), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8038] = 2,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8046] = 2,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8054] = 2,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8062] = 2,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8070] = 2,
    ACTIONS(1269), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8078] = 2,
    ACTIONS(1271), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8086] = 2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8094] = 2,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8102] = 2,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8110] = 2,
    ACTIONS(452), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8118] = 2,
    ACTIONS(494), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8126] = 2,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8134] = 2,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8142] = 2,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8150] = 2,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8158] = 2,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8166] = 2,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8174] = 2,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8182] = 2,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8190] = 2,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8198] = 2,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8206] = 2,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8214] = 2,
    ACTIONS(1283), 1,
      anon_sym_LT_DASH,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8222] = 2,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8230] = 2,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8238] = 2,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8246] = 2,
    ACTIONS(1287), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8254] = 2,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8262] = 2,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8270] = 2,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8278] = 2,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8286] = 2,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8294] = 2,
    ACTIONS(1295), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8302] = 2,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8310] = 2,
    ACTIONS(1299), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8318] = 2,
    ACTIONS(1301), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8326] = 2,
    ACTIONS(1303), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8334] = 2,
    ACTIONS(1305), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8342] = 2,
    ACTIONS(1307), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8350] = 2,
    ACTIONS(1309), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8358] = 2,
    ACTIONS(1311), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8366] = 2,
    ACTIONS(1313), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8374] = 2,
    ACTIONS(1315), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8382] = 2,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8390] = 2,
    ACTIONS(1319), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8398] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8406] = 2,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 457,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 525,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 627,
  [SMALL_STATE(20)] = 663,
  [SMALL_STATE(21)] = 697,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 799,
  [SMALL_STATE(25)] = 833,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 935,
  [SMALL_STATE(29)] = 969,
  [SMALL_STATE(30)] = 1003,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1071,
  [SMALL_STATE(33)] = 1105,
  [SMALL_STATE(34)] = 1139,
  [SMALL_STATE(35)] = 1173,
  [SMALL_STATE(36)] = 1207,
  [SMALL_STATE(37)] = 1241,
  [SMALL_STATE(38)] = 1275,
  [SMALL_STATE(39)] = 1309,
  [SMALL_STATE(40)] = 1343,
  [SMALL_STATE(41)] = 1377,
  [SMALL_STATE(42)] = 1411,
  [SMALL_STATE(43)] = 1445,
  [SMALL_STATE(44)] = 1479,
  [SMALL_STATE(45)] = 1513,
  [SMALL_STATE(46)] = 1547,
  [SMALL_STATE(47)] = 1581,
  [SMALL_STATE(48)] = 1615,
  [SMALL_STATE(49)] = 1649,
  [SMALL_STATE(50)] = 1683,
  [SMALL_STATE(51)] = 1717,
  [SMALL_STATE(52)] = 1751,
  [SMALL_STATE(53)] = 1785,
  [SMALL_STATE(54)] = 1819,
  [SMALL_STATE(55)] = 1853,
  [SMALL_STATE(56)] = 1887,
  [SMALL_STATE(57)] = 1921,
  [SMALL_STATE(58)] = 1955,
  [SMALL_STATE(59)] = 1989,
  [SMALL_STATE(60)] = 2023,
  [SMALL_STATE(61)] = 2057,
  [SMALL_STATE(62)] = 2091,
  [SMALL_STATE(63)] = 2125,
  [SMALL_STATE(64)] = 2159,
  [SMALL_STATE(65)] = 2193,
  [SMALL_STATE(66)] = 2227,
  [SMALL_STATE(67)] = 2261,
  [SMALL_STATE(68)] = 2295,
  [SMALL_STATE(69)] = 2329,
  [SMALL_STATE(70)] = 2363,
  [SMALL_STATE(71)] = 2397,
  [SMALL_STATE(72)] = 2431,
  [SMALL_STATE(73)] = 2465,
  [SMALL_STATE(74)] = 2499,
  [SMALL_STATE(75)] = 2533,
  [SMALL_STATE(76)] = 2567,
  [SMALL_STATE(77)] = 2601,
  [SMALL_STATE(78)] = 2635,
  [SMALL_STATE(79)] = 2669,
  [SMALL_STATE(80)] = 2703,
  [SMALL_STATE(81)] = 2737,
  [SMALL_STATE(82)] = 2771,
  [SMALL_STATE(83)] = 2805,
  [SMALL_STATE(84)] = 2839,
  [SMALL_STATE(85)] = 2873,
  [SMALL_STATE(86)] = 2907,
  [SMALL_STATE(87)] = 2952,
  [SMALL_STATE(88)] = 2983,
  [SMALL_STATE(89)] = 3016,
  [SMALL_STATE(90)] = 3061,
  [SMALL_STATE(91)] = 3106,
  [SMALL_STATE(92)] = 3139,
  [SMALL_STATE(93)] = 3184,
  [SMALL_STATE(94)] = 3229,
  [SMALL_STATE(95)] = 3274,
  [SMALL_STATE(96)] = 3304,
  [SMALL_STATE(97)] = 3334,
  [SMALL_STATE(98)] = 3364,
  [SMALL_STATE(99)] = 3394,
  [SMALL_STATE(100)] = 3424,
  [SMALL_STATE(101)] = 3454,
  [SMALL_STATE(102)] = 3484,
  [SMALL_STATE(103)] = 3514,
  [SMALL_STATE(104)] = 3544,
  [SMALL_STATE(105)] = 3574,
  [SMALL_STATE(106)] = 3604,
  [SMALL_STATE(107)] = 3634,
  [SMALL_STATE(108)] = 3664,
  [SMALL_STATE(109)] = 3694,
  [SMALL_STATE(110)] = 3721,
  [SMALL_STATE(111)] = 3748,
  [SMALL_STATE(112)] = 3789,
  [SMALL_STATE(113)] = 3816,
  [SMALL_STATE(114)] = 3843,
  [SMALL_STATE(115)] = 3870,
  [SMALL_STATE(116)] = 3903,
  [SMALL_STATE(117)] = 3929,
  [SMALL_STATE(118)] = 3955,
  [SMALL_STATE(119)] = 3978,
  [SMALL_STATE(120)] = 4025,
  [SMALL_STATE(121)] = 4050,
  [SMALL_STATE(122)] = 4073,
  [SMALL_STATE(123)] = 4096,
  [SMALL_STATE(124)] = 4119,
  [SMALL_STATE(125)] = 4148,
  [SMALL_STATE(126)] = 4171,
  [SMALL_STATE(127)] = 4194,
  [SMALL_STATE(128)] = 4223,
  [SMALL_STATE(129)] = 4252,
  [SMALL_STATE(130)] = 4281,
  [SMALL_STATE(131)] = 4315,
  [SMALL_STATE(132)] = 4349,
  [SMALL_STATE(133)] = 4370,
  [SMALL_STATE(134)] = 4393,
  [SMALL_STATE(135)] = 4414,
  [SMALL_STATE(136)] = 4437,
  [SMALL_STATE(137)] = 4457,
  [SMALL_STATE(138)] = 4477,
  [SMALL_STATE(139)] = 4512,
  [SMALL_STATE(140)] = 4531,
  [SMALL_STATE(141)] = 4550,
  [SMALL_STATE(142)] = 4569,
  [SMALL_STATE(143)] = 4590,
  [SMALL_STATE(144)] = 4615,
  [SMALL_STATE(145)] = 4634,
  [SMALL_STATE(146)] = 4659,
  [SMALL_STATE(147)] = 4680,
  [SMALL_STATE(148)] = 4699,
  [SMALL_STATE(149)] = 4718,
  [SMALL_STATE(150)] = 4737,
  [SMALL_STATE(151)] = 4756,
  [SMALL_STATE(152)] = 4775,
  [SMALL_STATE(153)] = 4796,
  [SMALL_STATE(154)] = 4815,
  [SMALL_STATE(155)] = 4834,
  [SMALL_STATE(156)] = 4853,
  [SMALL_STATE(157)] = 4874,
  [SMALL_STATE(158)] = 4895,
  [SMALL_STATE(159)] = 4914,
  [SMALL_STATE(160)] = 4933,
  [SMALL_STATE(161)] = 4952,
  [SMALL_STATE(162)] = 4971,
  [SMALL_STATE(163)] = 4989,
  [SMALL_STATE(164)] = 5007,
  [SMALL_STATE(165)] = 5025,
  [SMALL_STATE(166)] = 5043,
  [SMALL_STATE(167)] = 5061,
  [SMALL_STATE(168)] = 5079,
  [SMALL_STATE(169)] = 5097,
  [SMALL_STATE(170)] = 5115,
  [SMALL_STATE(171)] = 5133,
  [SMALL_STATE(172)] = 5165,
  [SMALL_STATE(173)] = 5183,
  [SMALL_STATE(174)] = 5201,
  [SMALL_STATE(175)] = 5219,
  [SMALL_STATE(176)] = 5237,
  [SMALL_STATE(177)] = 5255,
  [SMALL_STATE(178)] = 5273,
  [SMALL_STATE(179)] = 5291,
  [SMALL_STATE(180)] = 5311,
  [SMALL_STATE(181)] = 5332,
  [SMALL_STATE(182)] = 5358,
  [SMALL_STATE(183)] = 5384,
  [SMALL_STATE(184)] = 5402,
  [SMALL_STATE(185)] = 5420,
  [SMALL_STATE(186)] = 5438,
  [SMALL_STATE(187)] = 5456,
  [SMALL_STATE(188)] = 5480,
  [SMALL_STATE(189)] = 5506,
  [SMALL_STATE(190)] = 5524,
  [SMALL_STATE(191)] = 5542,
  [SMALL_STATE(192)] = 5566,
  [SMALL_STATE(193)] = 5592,
  [SMALL_STATE(194)] = 5616,
  [SMALL_STATE(195)] = 5640,
  [SMALL_STATE(196)] = 5666,
  [SMALL_STATE(197)] = 5686,
  [SMALL_STATE(198)] = 5706,
  [SMALL_STATE(199)] = 5730,
  [SMALL_STATE(200)] = 5754,
  [SMALL_STATE(201)] = 5778,
  [SMALL_STATE(202)] = 5802,
  [SMALL_STATE(203)] = 5819,
  [SMALL_STATE(204)] = 5836,
  [SMALL_STATE(205)] = 5853,
  [SMALL_STATE(206)] = 5876,
  [SMALL_STATE(207)] = 5893,
  [SMALL_STATE(208)] = 5910,
  [SMALL_STATE(209)] = 5927,
  [SMALL_STATE(210)] = 5944,
  [SMALL_STATE(211)] = 5963,
  [SMALL_STATE(212)] = 5980,
  [SMALL_STATE(213)] = 5999,
  [SMALL_STATE(214)] = 6016,
  [SMALL_STATE(215)] = 6039,
  [SMALL_STATE(216)] = 6056,
  [SMALL_STATE(217)] = 6073,
  [SMALL_STATE(218)] = 6090,
  [SMALL_STATE(219)] = 6104,
  [SMALL_STATE(220)] = 6120,
  [SMALL_STATE(221)] = 6138,
  [SMALL_STATE(222)] = 6152,
  [SMALL_STATE(223)] = 6166,
  [SMALL_STATE(224)] = 6182,
  [SMALL_STATE(225)] = 6194,
  [SMALL_STATE(226)] = 6210,
  [SMALL_STATE(227)] = 6221,
  [SMALL_STATE(228)] = 6232,
  [SMALL_STATE(229)] = 6243,
  [SMALL_STATE(230)] = 6254,
  [SMALL_STATE(231)] = 6269,
  [SMALL_STATE(232)] = 6280,
  [SMALL_STATE(233)] = 6295,
  [SMALL_STATE(234)] = 6306,
  [SMALL_STATE(235)] = 6321,
  [SMALL_STATE(236)] = 6332,
  [SMALL_STATE(237)] = 6347,
  [SMALL_STATE(238)] = 6362,
  [SMALL_STATE(239)] = 6377,
  [SMALL_STATE(240)] = 6394,
  [SMALL_STATE(241)] = 6409,
  [SMALL_STATE(242)] = 6424,
  [SMALL_STATE(243)] = 6435,
  [SMALL_STATE(244)] = 6450,
  [SMALL_STATE(245)] = 6467,
  [SMALL_STATE(246)] = 6478,
  [SMALL_STATE(247)] = 6489,
  [SMALL_STATE(248)] = 6504,
  [SMALL_STATE(249)] = 6521,
  [SMALL_STATE(250)] = 6538,
  [SMALL_STATE(251)] = 6555,
  [SMALL_STATE(252)] = 6572,
  [SMALL_STATE(253)] = 6589,
  [SMALL_STATE(254)] = 6606,
  [SMALL_STATE(255)] = 6623,
  [SMALL_STATE(256)] = 6640,
  [SMALL_STATE(257)] = 6655,
  [SMALL_STATE(258)] = 6670,
  [SMALL_STATE(259)] = 6681,
  [SMALL_STATE(260)] = 6692,
  [SMALL_STATE(261)] = 6703,
  [SMALL_STATE(262)] = 6718,
  [SMALL_STATE(263)] = 6733,
  [SMALL_STATE(264)] = 6744,
  [SMALL_STATE(265)] = 6759,
  [SMALL_STATE(266)] = 6774,
  [SMALL_STATE(267)] = 6785,
  [SMALL_STATE(268)] = 6796,
  [SMALL_STATE(269)] = 6807,
  [SMALL_STATE(270)] = 6818,
  [SMALL_STATE(271)] = 6832,
  [SMALL_STATE(272)] = 6846,
  [SMALL_STATE(273)] = 6856,
  [SMALL_STATE(274)] = 6870,
  [SMALL_STATE(275)] = 6884,
  [SMALL_STATE(276)] = 6898,
  [SMALL_STATE(277)] = 6912,
  [SMALL_STATE(278)] = 6924,
  [SMALL_STATE(279)] = 6936,
  [SMALL_STATE(280)] = 6948,
  [SMALL_STATE(281)] = 6962,
  [SMALL_STATE(282)] = 6974,
  [SMALL_STATE(283)] = 6986,
  [SMALL_STATE(284)] = 7000,
  [SMALL_STATE(285)] = 7014,
  [SMALL_STATE(286)] = 7028,
  [SMALL_STATE(287)] = 7038,
  [SMALL_STATE(288)] = 7052,
  [SMALL_STATE(289)] = 7066,
  [SMALL_STATE(290)] = 7078,
  [SMALL_STATE(291)] = 7092,
  [SMALL_STATE(292)] = 7106,
  [SMALL_STATE(293)] = 7118,
  [SMALL_STATE(294)] = 7132,
  [SMALL_STATE(295)] = 7142,
  [SMALL_STATE(296)] = 7156,
  [SMALL_STATE(297)] = 7170,
  [SMALL_STATE(298)] = 7182,
  [SMALL_STATE(299)] = 7196,
  [SMALL_STATE(300)] = 7203,
  [SMALL_STATE(301)] = 7210,
  [SMALL_STATE(302)] = 7221,
  [SMALL_STATE(303)] = 7232,
  [SMALL_STATE(304)] = 7239,
  [SMALL_STATE(305)] = 7248,
  [SMALL_STATE(306)] = 7259,
  [SMALL_STATE(307)] = 7266,
  [SMALL_STATE(308)] = 7273,
  [SMALL_STATE(309)] = 7280,
  [SMALL_STATE(310)] = 7287,
  [SMALL_STATE(311)] = 7294,
  [SMALL_STATE(312)] = 7301,
  [SMALL_STATE(313)] = 7312,
  [SMALL_STATE(314)] = 7321,
  [SMALL_STATE(315)] = 7330,
  [SMALL_STATE(316)] = 7339,
  [SMALL_STATE(317)] = 7346,
  [SMALL_STATE(318)] = 7357,
  [SMALL_STATE(319)] = 7364,
  [SMALL_STATE(320)] = 7371,
  [SMALL_STATE(321)] = 7378,
  [SMALL_STATE(322)] = 7385,
  [SMALL_STATE(323)] = 7396,
  [SMALL_STATE(324)] = 7403,
  [SMALL_STATE(325)] = 7410,
  [SMALL_STATE(326)] = 7421,
  [SMALL_STATE(327)] = 7428,
  [SMALL_STATE(328)] = 7435,
  [SMALL_STATE(329)] = 7442,
  [SMALL_STATE(330)] = 7449,
  [SMALL_STATE(331)] = 7460,
  [SMALL_STATE(332)] = 7467,
  [SMALL_STATE(333)] = 7474,
  [SMALL_STATE(334)] = 7483,
  [SMALL_STATE(335)] = 7492,
  [SMALL_STATE(336)] = 7501,
  [SMALL_STATE(337)] = 7510,
  [SMALL_STATE(338)] = 7519,
  [SMALL_STATE(339)] = 7526,
  [SMALL_STATE(340)] = 7533,
  [SMALL_STATE(341)] = 7544,
  [SMALL_STATE(342)] = 7555,
  [SMALL_STATE(343)] = 7562,
  [SMALL_STATE(344)] = 7573,
  [SMALL_STATE(345)] = 7582,
  [SMALL_STATE(346)] = 7589,
  [SMALL_STATE(347)] = 7596,
  [SMALL_STATE(348)] = 7605,
  [SMALL_STATE(349)] = 7614,
  [SMALL_STATE(350)] = 7621,
  [SMALL_STATE(351)] = 7628,
  [SMALL_STATE(352)] = 7635,
  [SMALL_STATE(353)] = 7642,
  [SMALL_STATE(354)] = 7649,
  [SMALL_STATE(355)] = 7660,
  [SMALL_STATE(356)] = 7667,
  [SMALL_STATE(357)] = 7674,
  [SMALL_STATE(358)] = 7681,
  [SMALL_STATE(359)] = 7690,
  [SMALL_STATE(360)] = 7697,
  [SMALL_STATE(361)] = 7706,
  [SMALL_STATE(362)] = 7715,
  [SMALL_STATE(363)] = 7726,
  [SMALL_STATE(364)] = 7735,
  [SMALL_STATE(365)] = 7744,
  [SMALL_STATE(366)] = 7755,
  [SMALL_STATE(367)] = 7764,
  [SMALL_STATE(368)] = 7773,
  [SMALL_STATE(369)] = 7780,
  [SMALL_STATE(370)] = 7789,
  [SMALL_STATE(371)] = 7798,
  [SMALL_STATE(372)] = 7805,
  [SMALL_STATE(373)] = 7812,
  [SMALL_STATE(374)] = 7823,
  [SMALL_STATE(375)] = 7830,
  [SMALL_STATE(376)] = 7837,
  [SMALL_STATE(377)] = 7846,
  [SMALL_STATE(378)] = 7855,
  [SMALL_STATE(379)] = 7862,
  [SMALL_STATE(380)] = 7870,
  [SMALL_STATE(381)] = 7878,
  [SMALL_STATE(382)] = 7886,
  [SMALL_STATE(383)] = 7894,
  [SMALL_STATE(384)] = 7902,
  [SMALL_STATE(385)] = 7910,
  [SMALL_STATE(386)] = 7918,
  [SMALL_STATE(387)] = 7926,
  [SMALL_STATE(388)] = 7934,
  [SMALL_STATE(389)] = 7942,
  [SMALL_STATE(390)] = 7950,
  [SMALL_STATE(391)] = 7958,
  [SMALL_STATE(392)] = 7966,
  [SMALL_STATE(393)] = 7974,
  [SMALL_STATE(394)] = 7982,
  [SMALL_STATE(395)] = 7990,
  [SMALL_STATE(396)] = 7998,
  [SMALL_STATE(397)] = 8006,
  [SMALL_STATE(398)] = 8014,
  [SMALL_STATE(399)] = 8022,
  [SMALL_STATE(400)] = 8030,
  [SMALL_STATE(401)] = 8038,
  [SMALL_STATE(402)] = 8046,
  [SMALL_STATE(403)] = 8054,
  [SMALL_STATE(404)] = 8062,
  [SMALL_STATE(405)] = 8070,
  [SMALL_STATE(406)] = 8078,
  [SMALL_STATE(407)] = 8086,
  [SMALL_STATE(408)] = 8094,
  [SMALL_STATE(409)] = 8102,
  [SMALL_STATE(410)] = 8110,
  [SMALL_STATE(411)] = 8118,
  [SMALL_STATE(412)] = 8126,
  [SMALL_STATE(413)] = 8134,
  [SMALL_STATE(414)] = 8142,
  [SMALL_STATE(415)] = 8150,
  [SMALL_STATE(416)] = 8158,
  [SMALL_STATE(417)] = 8166,
  [SMALL_STATE(418)] = 8174,
  [SMALL_STATE(419)] = 8182,
  [SMALL_STATE(420)] = 8190,
  [SMALL_STATE(421)] = 8198,
  [SMALL_STATE(422)] = 8206,
  [SMALL_STATE(423)] = 8214,
  [SMALL_STATE(424)] = 8222,
  [SMALL_STATE(425)] = 8230,
  [SMALL_STATE(426)] = 8238,
  [SMALL_STATE(427)] = 8246,
  [SMALL_STATE(428)] = 8254,
  [SMALL_STATE(429)] = 8262,
  [SMALL_STATE(430)] = 8270,
  [SMALL_STATE(431)] = 8278,
  [SMALL_STATE(432)] = 8286,
  [SMALL_STATE(433)] = 8294,
  [SMALL_STATE(434)] = 8302,
  [SMALL_STATE(435)] = 8310,
  [SMALL_STATE(436)] = 8318,
  [SMALL_STATE(437)] = 8326,
  [SMALL_STATE(438)] = 8334,
  [SMALL_STATE(439)] = 8342,
  [SMALL_STATE(440)] = 8350,
  [SMALL_STATE(441)] = 8358,
  [SMALL_STATE(442)] = 8366,
  [SMALL_STATE(443)] = 8374,
  [SMALL_STATE(444)] = 8382,
  [SMALL_STATE(445)] = 8390,
  [SMALL_STATE(446)] = 8398,
  [SMALL_STATE(447)] = 8406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(214),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(68),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(68),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(205),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(423),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(171),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(126),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(126),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(132),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(143),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(365),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(124),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(124),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(398),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(182),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 6),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(119),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 6),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 5),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6), REDUCE(sym_rhs_slot, 3, .production_id = 10),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(186),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(317),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(245),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(381),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(427),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(223),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_template, 3),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2), SHIFT_REPEAT(225),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(279),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 12),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 9),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(383),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(433),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2), SHIFT_REPEAT(394),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 9),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3), REDUCE(sym_template_pattern_CE, 3, .production_id = 6),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4, .production_id = 6),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(261),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(384),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(354),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 12),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(270),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(271),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(274),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(275),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(276),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_slot, 4, .production_id = 10),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_slot, 3, .production_id = 10),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 10),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 10),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4, .production_id = 5),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 7),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 7),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 5, .production_id = 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_member_template, 4, .production_id = 13),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 10),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 10),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 7),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 7),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3, .production_id = 5),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 12),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 9),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 12),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 9),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
