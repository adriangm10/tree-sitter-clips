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
#define STATE_COUNT 463
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 170
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym__ws = 1,
  sym_str_lit = 2,
  sym_integer = 3,
  sym_float = 4,
  sym_number = 5,
  sym_symbol = 6,
  sym_variable_symbol = 7,
  sym_instance_name = 8,
  sym_comment = 9,
  sym_single_field_variable = 10,
  sym_multifield_variable = 11,
  sym_global_variable = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_loop_DASHfor_DASHcount = 15,
  anon_sym_do = 16,
  anon_sym_if = 17,
  anon_sym_then = 18,
  anon_sym_else = 19,
  anon_sym_assert = 20,
  anon_sym_deffacts = 21,
  anon_sym_deftemplate = 22,
  anon_sym_slot = 23,
  anon_sym_multislot = 24,
  anon_sym_default = 25,
  anon_sym_QMARKDERIVE = 26,
  anon_sym_QMARKNONE = 27,
  anon_sym_default_DASHdynamic = 28,
  anon_sym_type = 29,
  anon_sym_QMARKVARIABLE = 30,
  sym_allowed_type = 31,
  sym_boolean_symbol = 32,
  anon_sym_allowed_DASHsymbols = 33,
  anon_sym_allowed_DASHstrings = 34,
  anon_sym_allowed_DASHlexemes = 35,
  anon_sym_allowed_DASHintegers = 36,
  anon_sym_allowed_DASHfloats = 37,
  anon_sym_allowed_DASHnumbers = 38,
  anon_sym_allowed_DASHinstance_DASHnames = 39,
  anon_sym_allowed_DASHclasses = 40,
  anon_sym_allowed_DASHvalues = 41,
  anon_sym_range = 42,
  anon_sym_cardinality = 43,
  anon_sym_defrule = 44,
  anon_sym_EQ_GT = 45,
  anon_sym_declare = 46,
  anon_sym_salience = 47,
  anon_sym_auto_DASHfocus = 48,
  anon_sym_LT_DASH = 49,
  anon_sym_not = 50,
  anon_sym_and = 51,
  anon_sym_or = 52,
  anon_sym_logical = 53,
  anon_sym_test = 54,
  anon_sym_exists = 55,
  anon_sym_forall = 56,
  anon_sym_object = 57,
  anon_sym_is_DASHa = 58,
  anon_sym_name = 59,
  anon_sym_QMARK = 60,
  anon_sym_DOLLAR_QMARK = 61,
  anon_sym_AMP = 62,
  anon_sym_PIPE = 63,
  anon_sym_TILDE = 64,
  anon_sym_COLON = 65,
  anon_sym_EQ = 66,
  anon_sym_defglobal = 67,
  anon_sym_deffunction = 68,
  aux_sym_parameter_list_token1 = 69,
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
  sym_deffacts_construct = 84,
  sym__rhs_pattern = 85,
  sym_ordered_rhs_pattern = 86,
  sym_template_rhs_pattern = 87,
  sym__rhs_slot = 88,
  sym_single_field_rhs_slot = 89,
  sym_multifield_rhs_slot = 90,
  sym__rhs_field = 91,
  sym_deftemplate_construct = 92,
  sym__slot_definition = 93,
  sym_single_slot_definition = 94,
  sym_multislot_definition = 95,
  sym__template_attribute = 96,
  sym_default_attribute = 97,
  sym__constraint_attribute = 98,
  sym_type_attribute = 99,
  sym_type_specification = 100,
  sym_allowed_constant_attribute = 101,
  sym_symbol_list = 102,
  sym_string_list = 103,
  sym_lexeme_list = 104,
  sym_integer_list = 105,
  sym_float_list = 106,
  sym_number_list = 107,
  sym_class_name_list = 108,
  sym_instance_list = 109,
  sym_value_list = 110,
  sym_range_attribute = 111,
  sym_range_specification = 112,
  sym_cardinality_attribute = 113,
  sym_cardinality_specification = 114,
  sym_defrule_construct = 115,
  sym_declaration = 116,
  sym_rule_property = 117,
  sym__conditional_element = 118,
  sym__pattern_CE = 119,
  sym_assigned_pattern_CE = 120,
  sym_not_CE = 121,
  sym_and_CE = 122,
  sym_or_CE = 123,
  sym_logical_CE = 124,
  sym_test_CE = 125,
  sym_exists_CE = 126,
  sym_forall_CE = 127,
  sym_ordered_pattern_CE = 128,
  sym_template_pattern_CE = 129,
  sym_object_pattern_CE = 130,
  sym_attribute_constraint = 131,
  sym_lhs_slot = 132,
  sym_constraint = 133,
  sym_connected_constraint = 134,
  sym_single_constraint = 135,
  sym_term = 136,
  sym_defglobal_construct = 137,
  sym__global_assignment = 138,
  sym_deffunction_construct = 139,
  sym_parameter_list = 140,
  sym_defgeneric_construct = 141,
  sym_defmethod_construct = 142,
  sym_parameter_restriction = 143,
  sym_wildcard_parameter_restriction = 144,
  sym_query = 145,
  aux_sym_program_repeat1 = 146,
  aux_sym_function_call_repeat1 = 147,
  aux_sym_assert_repeat1 = 148,
  aux_sym_ordered_rhs_pattern_repeat1 = 149,
  aux_sym_template_rhs_pattern_repeat1 = 150,
  aux_sym_deftemplate_construct_repeat1 = 151,
  aux_sym_single_slot_definition_repeat1 = 152,
  aux_sym_type_specification_repeat1 = 153,
  aux_sym_symbol_list_repeat1 = 154,
  aux_sym_string_list_repeat1 = 155,
  aux_sym_lexeme_list_repeat1 = 156,
  aux_sym_integer_list_repeat1 = 157,
  aux_sym_float_list_repeat1 = 158,
  aux_sym_number_list_repeat1 = 159,
  aux_sym_class_name_list_repeat1 = 160,
  aux_sym_value_list_repeat1 = 161,
  aux_sym_defrule_construct_repeat1 = 162,
  aux_sym_declaration_repeat1 = 163,
  aux_sym_ordered_pattern_CE_repeat1 = 164,
  aux_sym_template_pattern_CE_repeat1 = 165,
  aux_sym_object_pattern_CE_repeat1 = 166,
  aux_sym_defglobal_construct_repeat1 = 167,
  aux_sym_parameter_list_repeat1 = 168,
  aux_sym_defmethod_construct_repeat1 = 169,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_str_lit] = "str_lit",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_variable_symbol] = "variable_symbol",
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
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
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
  [sym_deffacts_construct] = "deffacts_construct",
  [sym__rhs_pattern] = "_rhs_pattern",
  [sym_ordered_rhs_pattern] = "ordered_rhs_pattern",
  [sym_template_rhs_pattern] = "template_rhs_pattern",
  [sym__rhs_slot] = "_rhs_slot",
  [sym_single_field_rhs_slot] = "single_field_rhs_slot",
  [sym_multifield_rhs_slot] = "multifield_rhs_slot",
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
  [aux_sym_ordered_rhs_pattern_repeat1] = "ordered_rhs_pattern_repeat1",
  [aux_sym_template_rhs_pattern_repeat1] = "template_rhs_pattern_repeat1",
  [aux_sym_deftemplate_construct_repeat1] = "deftemplate_construct_repeat1",
  [aux_sym_single_slot_definition_repeat1] = "single_slot_definition_repeat1",
  [aux_sym_type_specification_repeat1] = "type_specification_repeat1",
  [aux_sym_symbol_list_repeat1] = "symbol_list_repeat1",
  [aux_sym_string_list_repeat1] = "string_list_repeat1",
  [aux_sym_lexeme_list_repeat1] = "lexeme_list_repeat1",
  [aux_sym_integer_list_repeat1] = "integer_list_repeat1",
  [aux_sym_float_list_repeat1] = "float_list_repeat1",
  [aux_sym_number_list_repeat1] = "number_list_repeat1",
  [aux_sym_class_name_list_repeat1] = "class_name_list_repeat1",
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
  [sym_variable_symbol] = sym_variable_symbol,
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
  [aux_sym_parameter_list_token1] = aux_sym_parameter_list_token1,
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
  [sym_deffacts_construct] = sym_deffacts_construct,
  [sym__rhs_pattern] = sym__rhs_pattern,
  [sym_ordered_rhs_pattern] = sym_ordered_rhs_pattern,
  [sym_template_rhs_pattern] = sym_template_rhs_pattern,
  [sym__rhs_slot] = sym__rhs_slot,
  [sym_single_field_rhs_slot] = sym_single_field_rhs_slot,
  [sym_multifield_rhs_slot] = sym_multifield_rhs_slot,
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
  [aux_sym_ordered_rhs_pattern_repeat1] = aux_sym_ordered_rhs_pattern_repeat1,
  [aux_sym_template_rhs_pattern_repeat1] = aux_sym_template_rhs_pattern_repeat1,
  [aux_sym_deftemplate_construct_repeat1] = aux_sym_deftemplate_construct_repeat1,
  [aux_sym_single_slot_definition_repeat1] = aux_sym_single_slot_definition_repeat1,
  [aux_sym_type_specification_repeat1] = aux_sym_type_specification_repeat1,
  [aux_sym_symbol_list_repeat1] = aux_sym_symbol_list_repeat1,
  [aux_sym_string_list_repeat1] = aux_sym_string_list_repeat1,
  [aux_sym_lexeme_list_repeat1] = aux_sym_lexeme_list_repeat1,
  [aux_sym_integer_list_repeat1] = aux_sym_integer_list_repeat1,
  [aux_sym_float_list_repeat1] = aux_sym_float_list_repeat1,
  [aux_sym_number_list_repeat1] = aux_sym_number_list_repeat1,
  [aux_sym_class_name_list_repeat1] = aux_sym_class_name_list_repeat1,
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
  [sym_variable_symbol] = {
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
  [aux_sym_parameter_list_token1] = {
    .visible = false,
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
  [sym__rhs_slot] = {
    .visible = false,
    .named = true,
  },
  [sym_single_field_rhs_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_multifield_rhs_slot] = {
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
  [aux_sym_symbol_list_repeat1] = {
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
  [aux_sym_class_name_list_repeat1] = {
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
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment] = "comment",
  [field_index] = "index",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_param] = "param",
  [field_slot_name] = "slot_name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 2},
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
    {field_slot_name, 2},
  [6] =
    {field_name, 1},
  [7] =
    {field_index, 3},
    {field_name, 2},
  [9] =
    {field_param, 1},
  [10] =
    {field_slot_name, 1},
  [11] =
    {field_comment, 4},
    {field_index, 3},
    {field_name, 2},
  [14] =
    {field_param, 1},
    {field_type, 2},
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 5,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 8,
  [21] = 21,
  [22] = 8,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 18,
  [40] = 33,
  [41] = 25,
  [42] = 42,
  [43] = 26,
  [44] = 27,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 28,
  [50] = 50,
  [51] = 51,
  [52] = 29,
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
  [65] = 24,
  [66] = 33,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 30,
  [72] = 31,
  [73] = 31,
  [74] = 30,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 29,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 28,
  [96] = 24,
  [97] = 97,
  [98] = 27,
  [99] = 99,
  [100] = 26,
  [101] = 25,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 33,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 144,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 134,
  [159] = 159,
  [160] = 160,
  [161] = 133,
  [162] = 162,
  [163] = 143,
  [164] = 150,
  [165] = 160,
  [166] = 154,
  [167] = 152,
  [168] = 133,
  [169] = 149,
  [170] = 147,
  [171] = 134,
  [172] = 172,
  [173] = 162,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
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
  [189] = 189,
  [190] = 190,
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
  [202] = 196,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 196,
  [208] = 200,
  [209] = 209,
  [210] = 200,
  [211] = 211,
  [212] = 212,
  [213] = 133,
  [214] = 134,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 212,
  [219] = 212,
  [220] = 220,
  [221] = 221,
  [222] = 222,
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
  [235] = 232,
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
  [274] = 232,
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
  [309] = 132,
  [310] = 310,
  [311] = 130,
  [312] = 312,
  [313] = 128,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 131,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 127,
  [328] = 328,
  [329] = 329,
  [330] = 211,
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
  [343] = 339,
  [344] = 339,
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
  [378] = 162,
  [379] = 160,
  [380] = 143,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 154,
  [387] = 152,
  [388] = 150,
  [389] = 149,
  [390] = 147,
  [391] = 369,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 140,
  [400] = 400,
  [401] = 139,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
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
  [452] = 395,
  [453] = 453,
  [454] = 454,
  [455] = 403,
  [456] = 456,
  [457] = 395,
  [458] = 458,
  [459] = 459,
  [460] = 403,
  [461] = 461,
  [462] = 462,
};

static inline bool sym_instance_name_character_set_1(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
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
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(536);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ':') ADVANCE(539);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '?') ADVANCE(532);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '[') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '|') ADVANCE(537);
      if (lookahead == '~') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(536);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '|') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(327);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(536);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(540);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '?') ADVANCE(532);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '|') ADVANCE(537);
      if (lookahead == '~') ADVANCE(538);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ';') ADVANCE(444);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(540);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '~') ADVANCE(538);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(444);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(18)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(545);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(323);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == 'D') ADVANCE(454);
      if (lookahead == 'N') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(506);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(534);
      END_STATE();
    case 36:
      if (lookahead == '?') ADVANCE(321);
      END_STATE();
    case 37:
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(37)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(493);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(491);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(492);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(489);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(491);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(491);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(491);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(491);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(491);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == 'Y') ADVANCE(74);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'X') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(107)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(108)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(111)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(471);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(241);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 194:
      if (lookahead == 'j') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(237)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 307:
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 308:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(504);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 311:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 312:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 320:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 321:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 322:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 323:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 324:
      if (eof) ADVANCE(325);
      if (lookahead == 11) SKIP(324)
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(540);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(540);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '?') ADVANCE(533);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead == 'D') ADVANCE(369);
      if (lookahead == 'N') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(382);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(351);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_symbol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(102);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_multifield_variable);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(20);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_QMARKDERIVE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_QMARKDERIVE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_QMARKNONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_QMARKNONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_logical);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_forall);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(451);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(444);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 324},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 324},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 324},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 107},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 108},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 324},
  [222] = {.lex_state = 324},
  [223] = {.lex_state = 324},
  [224] = {.lex_state = 324},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 324},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 324},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 324},
  [232] = {.lex_state = 111},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 111},
  [236] = {.lex_state = 324},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 324},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 324},
  [242] = {.lex_state = 324},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 324},
  [245] = {.lex_state = 324},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 324},
  [248] = {.lex_state = 324},
  [249] = {.lex_state = 324},
  [250] = {.lex_state = 324},
  [251] = {.lex_state = 324},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 37},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 324},
  [261] = {.lex_state = 324},
  [262] = {.lex_state = 324},
  [263] = {.lex_state = 324},
  [264] = {.lex_state = 324},
  [265] = {.lex_state = 324},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 324},
  [271] = {.lex_state = 324},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 324},
  [274] = {.lex_state = 111},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 324},
  [278] = {.lex_state = 324},
  [279] = {.lex_state = 324},
  [280] = {.lex_state = 324},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 324},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 324},
  [286] = {.lex_state = 324},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 324},
  [289] = {.lex_state = 324},
  [290] = {.lex_state = 324},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 324},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 324},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 324},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 324},
  [303] = {.lex_state = 324},
  [304] = {.lex_state = 324},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 324},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 237},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 16},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 19},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 19},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 2},
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
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 18},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 3},
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
  [413] = {.lex_state = 3},
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
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 18},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 18},
  [448] = {.lex_state = 3},
  [449] = {.lex_state = 3},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 18},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_instance_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_program] = STATE(450),
    [sym__construct] = STATE(126),
    [sym__gap] = STATE(126),
    [sym_deffacts_construct] = STATE(126),
    [sym_deftemplate_construct] = STATE(126),
    [sym_defrule_construct] = STATE(126),
    [sym_defglobal_construct] = STATE(126),
    [sym_deffunction_construct] = STATE(126),
    [sym_defgeneric_construct] = STATE(126),
    [sym_defmethod_construct] = STATE(126),
    [aux_sym_program_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    ACTIONS(11), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(53), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [30] = 6,
    ACTIONS(19), 1,
      sym_str_lit,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_EQ_GT,
    STATE(37), 1,
      sym_declaration,
    STATE(38), 14,
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
  [62] = 11,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(12), 1,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    STATE(141), 1,
      sym_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [103] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(37), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(30), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [132] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(13), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [171] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_do,
    ACTIONS(45), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(71), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [200] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_else,
    ACTIONS(51), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(18), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [229] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(15), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [268] = 4,
    ACTIONS(61), 1,
      sym_single_field_variable,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(10), 14,
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
  [295] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_else,
    ACTIONS(69), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(8), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [324] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(15), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [363] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(15), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [402] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_else,
    ACTIONS(79), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(20), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [431] = 10,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_TILDE,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(90), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(96), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(15), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(85), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [470] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_do,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(74), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [499] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(9), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [538] = 4,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      anon_sym_else,
    ACTIONS(107), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(18), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [565] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_else,
    ACTIONS(115), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(22), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [594] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(51), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(18), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [623] = 5,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_EQ_GT,
    STATE(62), 1,
      sym_declaration,
    STATE(63), 14,
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
  [652] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_else,
    ACTIONS(51), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(18), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [681] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [707] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [733] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [759] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(25), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [785] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [811] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(27), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [837] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [863] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [889] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(29), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [915] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [941] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(32), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [967] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(94), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [993] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1019] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(75), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1045] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_EQ_GT,
    STATE(78), 14,
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
  [1071] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_EQ_GT,
    STATE(10), 14,
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
  [1097] = 4,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1123] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(96), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1149] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1175] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1201] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(41), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1227] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1253] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1279] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(42), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1305] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1331] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1357] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(44), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1383] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(10), 14,
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
  [1409] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(10), 14,
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
  [1435] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1461] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1487] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1513] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(45), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1539] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1565] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(47), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1591] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1617] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(48), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1643] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1669] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(102), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1695] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_EQ_GT,
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
  [1721] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_EQ_GT,
    STATE(10), 14,
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
  [1747] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1773] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1799] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(24), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1825] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(10), 14,
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
  [1851] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(10), 14,
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
  [1877] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1903] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(86), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1929] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1955] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(52), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1981] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(81), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2007] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2033] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2059] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2085] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(35), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2111] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_EQ_GT,
    STATE(10), 14,
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
  [2137] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2163] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(53), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2189] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2215] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(23), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2241] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2267] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2293] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(56), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2319] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2345] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(58), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2371] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(60), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2397] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2423] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2449] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(64), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2475] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(54), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2501] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2527] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2553] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(98), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2579] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2605] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(90), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2631] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2657] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(10), 14,
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
  [2683] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(101), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2709] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2735] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2761] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(107), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2787] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_EQ_GT,
    STATE(10), 14,
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
  [2813] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(76), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2839] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2865] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(39), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2891] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(65), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2917] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(84), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2943] = 9,
    ACTIONS(335), 1,
      anon_sym_TILDE,
    STATE(309), 1,
      sym_single_constraint,
    STATE(311), 1,
      sym_term,
    STATE(327), 1,
      sym__constant,
    STATE(401), 1,
      sym_connected_constraint,
    STATE(415), 1,
      sym_constraint,
    ACTIONS(333), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(337), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(331), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2978] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(99), 14,
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
  [3001] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(414), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3026] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(68), 14,
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
  [3049] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(67), 14,
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
  [3072] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(50), 14,
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
  [3095] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(51), 14,
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
  [3118] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(420), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3140] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(364), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3162] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(111), 13,
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
  [3184] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(112), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3206] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(426), 13,
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
  [3228] = 5,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(172), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
    ACTIONS(351), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3253] = 4,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(357), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3276] = 4,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(361), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3299] = 4,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(357), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3322] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      sym__ws,
    ACTIONS(375), 1,
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
  [3347] = 1,
    ACTIONS(377), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3364] = 1,
    ACTIONS(379), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3381] = 14,
    ACTIONS(381), 1,
      anon_sym_default,
    ACTIONS(383), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(385), 1,
      anon_sym_type,
    ACTIONS(387), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(389), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(391), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(393), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(395), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(397), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(399), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(401), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(403), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(405), 1,
      anon_sym_range,
    ACTIONS(407), 1,
      anon_sym_cardinality,
  [3424] = 1,
    ACTIONS(409), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3441] = 1,
    ACTIONS(411), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3458] = 2,
    ACTIONS(415), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(413), 12,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3477] = 1,
    ACTIONS(417), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3494] = 1,
    ACTIONS(419), 14,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3511] = 5,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      sym__ws,
    ACTIONS(426), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
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
  [3536] = 7,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(127), 1,
      sym__constant,
    STATE(130), 1,
      sym_term,
    STATE(132), 1,
      sym_single_constraint,
    STATE(140), 1,
      sym_connected_constraint,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3564] = 3,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(123), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(432), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3584] = 7,
    ACTIONS(335), 1,
      anon_sym_TILDE,
    STATE(309), 1,
      sym_single_constraint,
    STATE(311), 1,
      sym_term,
    STATE(327), 1,
      sym__constant,
    STATE(399), 1,
      sym_connected_constraint,
    ACTIONS(337), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(331), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3612] = 1,
    ACTIONS(434), 12,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3627] = 1,
    ACTIONS(436), 12,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3642] = 2,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 11,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_EQ,
  [3659] = 11,
    ACTIONS(443), 1,
      sym_symbol,
    ACTIONS(445), 1,
      sym_variable_symbol,
    ACTIONS(447), 1,
      anon_sym_declare,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(451), 1,
      anon_sym_and,
    ACTIONS(453), 1,
      anon_sym_or,
    ACTIONS(455), 1,
      anon_sym_logical,
    ACTIONS(457), 1,
      anon_sym_test,
    ACTIONS(459), 1,
      anon_sym_exists,
    ACTIONS(461), 1,
      anon_sym_forall,
    ACTIONS(463), 1,
      anon_sym_object,
  [3693] = 1,
    ACTIONS(465), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3706] = 4,
    STATE(313), 1,
      sym_term,
    STATE(327), 1,
      sym__constant,
    ACTIONS(337), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(331), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3725] = 3,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(146), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3742] = 3,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(146), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3759] = 1,
    ACTIONS(476), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3772] = 4,
    STATE(127), 1,
      sym__constant,
    STATE(128), 1,
      sym_term,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3791] = 1,
    ACTIONS(478), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3804] = 1,
    ACTIONS(480), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3817] = 1,
    ACTIONS(482), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_do,
  [3830] = 1,
    ACTIONS(484), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3843] = 3,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(145), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3860] = 1,
    ACTIONS(488), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3873] = 1,
    ACTIONS(490), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_do,
  [3886] = 3,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(159), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3903] = 10,
    ACTIONS(443), 1,
      sym_symbol,
    ACTIONS(445), 1,
      sym_variable_symbol,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(451), 1,
      anon_sym_and,
    ACTIONS(453), 1,
      anon_sym_or,
    ACTIONS(455), 1,
      anon_sym_logical,
    ACTIONS(457), 1,
      anon_sym_test,
    ACTIONS(459), 1,
      anon_sym_exists,
    ACTIONS(461), 1,
      anon_sym_forall,
    ACTIONS(463), 1,
      anon_sym_object,
  [3934] = 1,
    ACTIONS(419), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3947] = 3,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(146), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3964] = 1,
    ACTIONS(496), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3977] = 1,
    ACTIONS(417), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [3990] = 1,
    ACTIONS(498), 10,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
  [4003] = 1,
    ACTIONS(465), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4015] = 1,
    ACTIONS(480), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4027] = 1,
    ACTIONS(496), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4039] = 1,
    ACTIONS(488), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4051] = 1,
    ACTIONS(484), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4063] = 1,
    ACTIONS(417), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4075] = 1,
    ACTIONS(478), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4087] = 1,
    ACTIONS(476), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4099] = 1,
    ACTIONS(419), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4111] = 2,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(500), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [4125] = 1,
    ACTIONS(498), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4137] = 4,
    ACTIONS(507), 1,
      anon_sym_QMARKVARIABLE,
    STATE(416), 1,
      sym_value_list,
    STATE(189), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(505), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4154] = 7,
    ACTIONS(509), 1,
      sym_symbol,
    ACTIONS(511), 1,
      sym_global_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_symbol_list_repeat1,
    STATE(440), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4176] = 4,
    ACTIONS(517), 1,
      sym_str_lit,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(209), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4192] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4212] = 4,
    ACTIONS(531), 1,
      sym_str_lit,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(205), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4228] = 7,
    ACTIONS(511), 1,
      sym_global_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      sym_symbol,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_symbol_list_repeat1,
    STATE(406), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4250] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_wildcard_parameter_restriction,
    STATE(197), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4270] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_wildcard_parameter_restriction,
    STATE(197), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4290] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_wildcard_parameter_restriction,
    STATE(184), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4310] = 7,
    ACTIONS(511), 1,
      sym_global_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      sym_symbol,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_symbol_list_repeat1,
    STATE(402), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4332] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_wildcard_parameter_restriction,
    STATE(197), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4352] = 7,
    ACTIONS(511), 1,
      sym_global_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym_symbol,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_symbol_list_repeat1,
    STATE(437), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4374] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_wildcard_parameter_restriction,
    STATE(180), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4394] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_wildcard_parameter_restriction,
    STATE(197), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4414] = 3,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(188), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(559), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4428] = 3,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(188), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(564), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4442] = 6,
    ACTIONS(523), 1,
      sym_single_field_variable,
    ACTIONS(525), 1,
      sym_multifield_variable,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_wildcard_parameter_restriction,
    STATE(181), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4462] = 7,
    ACTIONS(570), 1,
      anon_sym_deffacts,
    ACTIONS(572), 1,
      anon_sym_deftemplate,
    ACTIONS(574), 1,
      anon_sym_defrule,
    ACTIONS(576), 1,
      anon_sym_defglobal,
    ACTIONS(578), 1,
      anon_sym_deffunction,
    ACTIONS(580), 1,
      anon_sym_defgeneric,
    ACTIONS(582), 1,
      anon_sym_defmethod,
  [4484] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(194), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4497] = 4,
    ACTIONS(588), 1,
      anon_sym_QMARKVARIABLE,
    STATE(416), 1,
      sym_lexeme_list,
    ACTIONS(586), 2,
      sym_str_lit,
      sym_symbol,
    STATE(220), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4512] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4525] = 3,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(201), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4538] = 3,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(455), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(594), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4551] = 4,
    ACTIONS(598), 1,
      sym_single_field_variable,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(197), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4566] = 3,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(204), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4579] = 3,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4592] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4605] = 3,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(203), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4618] = 3,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(403), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(619), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4631] = 3,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(203), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4644] = 3,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(204), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4657] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4670] = 3,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(198), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4683] = 3,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(460), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(635), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4696] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4709] = 3,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(203), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4722] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4735] = 3,
    ACTIONS(643), 1,
      sym_symbol,
    STATE(211), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(646), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4747] = 2,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(210), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4757] = 1,
    ACTIONS(648), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4765] = 1,
    ACTIONS(650), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4773] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 2,
      sym_str_lit,
      sym_symbol,
    STATE(215), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4785] = 2,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    STATE(298), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4795] = 4,
    ACTIONS(659), 1,
      sym_variable_symbol,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(243), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4809] = 2,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(208), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4819] = 2,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(200), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4829] = 3,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 2,
      sym_str_lit,
      sym_symbol,
    STATE(215), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4841] = 2,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(671), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4850] = 2,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(675), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4859] = 2,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(679), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4868] = 2,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(683), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4877] = 1,
    ACTIONS(685), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4884] = 3,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(299), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4895] = 2,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(693), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4904] = 1,
    ACTIONS(695), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4911] = 2,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(699), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4920] = 1,
    ACTIONS(701), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4927] = 2,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(705), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4936] = 4,
    ACTIONS(707), 1,
      sym_symbol,
    ACTIONS(709), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(713), 1,
      anon_sym_assert,
  [4949] = 1,
    ACTIONS(715), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4956] = 1,
    ACTIONS(717), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4963] = 4,
    ACTIONS(719), 1,
      sym_symbol,
    ACTIONS(721), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(723), 1,
      anon_sym_if,
    ACTIONS(725), 1,
      anon_sym_assert,
  [4976] = 2,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(729), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4985] = 1,
    ACTIONS(731), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4992] = 2,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(735), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5001] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(282), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5012] = 1,
    ACTIONS(739), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5019] = 2,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(743), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5028] = 2,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(747), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5037] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(301), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5048] = 2,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(753), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5057] = 2,
    ACTIONS(755), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(757), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5066] = 1,
    ACTIONS(759), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5073] = 2,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(763), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5082] = 2,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(767), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5091] = 2,
    ACTIONS(769), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(771), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5100] = 2,
    ACTIONS(773), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(775), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5109] = 2,
    ACTIONS(777), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(779), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5118] = 4,
    ACTIONS(781), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(783), 1,
      sym_allowed_type,
    STATE(312), 1,
      aux_sym_type_specification_repeat1,
    STATE(410), 1,
      sym_type_specification,
  [5131] = 4,
    ACTIONS(785), 1,
      sym_symbol,
    ACTIONS(787), 1,
      anon_sym_QMARKVARIABLE,
    STATE(315), 1,
      aux_sym_symbol_list_repeat1,
    STATE(416), 1,
      sym_symbol_list,
  [5144] = 4,
    ACTIONS(789), 1,
      sym_str_lit,
    ACTIONS(791), 1,
      anon_sym_QMARKVARIABLE,
    STATE(317), 1,
      aux_sym_string_list_repeat1,
    STATE(416), 1,
      sym_string_list,
  [5157] = 4,
    ACTIONS(793), 1,
      sym_integer,
    ACTIONS(795), 1,
      anon_sym_QMARKVARIABLE,
    STATE(321), 1,
      aux_sym_integer_list_repeat1,
    STATE(416), 1,
      sym_integer_list,
  [5170] = 4,
    ACTIONS(797), 1,
      sym_float,
    ACTIONS(799), 1,
      anon_sym_QMARKVARIABLE,
    STATE(323), 1,
      aux_sym_float_list_repeat1,
    STATE(416), 1,
      sym_float_list,
  [5183] = 4,
    ACTIONS(801), 1,
      sym_number,
    ACTIONS(803), 1,
      anon_sym_QMARKVARIABLE,
    STATE(325), 1,
      aux_sym_number_list_repeat1,
    STATE(416), 1,
      sym_number_list,
  [5196] = 4,
    ACTIONS(805), 1,
      sym_variable_symbol,
    ACTIONS(807), 1,
      anon_sym_QMARKVARIABLE,
    STATE(307), 1,
      aux_sym_class_name_list_repeat1,
    STATE(416), 1,
      sym_instance_list,
  [5209] = 4,
    ACTIONS(809), 1,
      sym_variable_symbol,
    ACTIONS(811), 1,
      anon_sym_QMARKVARIABLE,
    STATE(328), 1,
      aux_sym_class_name_list_repeat1,
    STATE(416), 1,
      sym_class_name_list,
  [5222] = 2,
    ACTIONS(813), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(815), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5231] = 2,
    ACTIONS(817), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(819), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5240] = 2,
    ACTIONS(821), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(823), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5249] = 2,
    ACTIONS(825), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(827), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5258] = 2,
    ACTIONS(829), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(831), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5267] = 2,
    ACTIONS(833), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(835), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5276] = 3,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(284), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5287] = 3,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(287), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5298] = 1,
    ACTIONS(845), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5305] = 1,
    ACTIONS(847), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5312] = 2,
    ACTIONS(849), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(851), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5321] = 2,
    ACTIONS(853), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(855), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5330] = 1,
    ACTIONS(857), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5337] = 2,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(861), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5346] = 4,
    ACTIONS(863), 1,
      sym_symbol,
    ACTIONS(865), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(867), 1,
      anon_sym_if,
    ACTIONS(869), 1,
      anon_sym_assert,
  [5359] = 3,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(226), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5370] = 1,
    ACTIONS(873), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5377] = 2,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(877), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5386] = 2,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(881), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5395] = 2,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(885), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5404] = 2,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(889), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5413] = 3,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(267), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5424] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(301), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5435] = 2,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(897), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5444] = 3,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(284), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5455] = 2,
    ACTIONS(904), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(906), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5464] = 2,
    ACTIONS(908), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(910), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5473] = 3,
    ACTIONS(912), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(287), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5484] = 2,
    ACTIONS(917), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(919), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5493] = 2,
    ACTIONS(921), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(923), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5502] = 2,
    ACTIONS(925), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(927), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5511] = 1,
    ACTIONS(929), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5518] = 1,
    ACTIONS(931), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5525] = 2,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(935), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5534] = 1,
    ACTIONS(937), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5541] = 2,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(941), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5550] = 1,
    ACTIONS(943), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5557] = 1,
    ACTIONS(945), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5564] = 1,
    ACTIONS(947), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5571] = 3,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(299), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5582] = 2,
    ACTIONS(954), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(956), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5591] = 3,
    ACTIONS(958), 1,
      sym_global_variable,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(301), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5602] = 2,
    ACTIONS(963), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(965), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5611] = 2,
    ACTIONS(967), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(969), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5620] = 2,
    ACTIONS(971), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(973), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5629] = 1,
    ACTIONS(975), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5636] = 2,
    ACTIONS(977), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(979), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5645] = 3,
    ACTIONS(981), 1,
      sym_variable_symbol,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_class_name_list_repeat1,
  [5655] = 2,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
    STATE(266), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5663] = 2,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    ACTIONS(987), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5671] = 3,
    ACTIONS(989), 1,
      sym_single_field_variable,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_parameter_list,
  [5681] = 1,
    ACTIONS(993), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5687] = 3,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(997), 1,
      sym_allowed_type,
    STATE(326), 1,
      aux_sym_type_specification_repeat1,
  [5697] = 1,
    ACTIONS(999), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5703] = 1,
    ACTIONS(1001), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [5709] = 3,
    ACTIONS(1003), 1,
      sym_symbol,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_symbol_list_repeat1,
  [5719] = 3,
    ACTIONS(1007), 1,
      sym_variable_symbol,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_class_name_list_repeat1,
  [5729] = 3,
    ACTIONS(1012), 1,
      sym_str_lit,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_string_list_repeat1,
  [5739] = 3,
    ACTIONS(1016), 1,
      sym_number,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_number_list_repeat1,
  [5749] = 3,
    ACTIONS(1021), 1,
      sym_float,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_float_list_repeat1,
  [5759] = 3,
    ACTIONS(1026), 1,
      sym_integer,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      aux_sym_integer_list_repeat1,
  [5769] = 3,
    ACTIONS(1031), 1,
      sym_integer,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      aux_sym_integer_list_repeat1,
  [5779] = 1,
    ACTIONS(1035), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5785] = 3,
    ACTIONS(1037), 1,
      sym_float,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_float_list_repeat1,
  [5795] = 3,
    ACTIONS(1041), 1,
      sym_str_lit,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_string_list_repeat1,
  [5805] = 3,
    ACTIONS(1046), 1,
      sym_number,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_number_list_repeat1,
  [5815] = 3,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      sym_allowed_type,
    STATE(326), 1,
      aux_sym_type_specification_repeat1,
  [5825] = 1,
    ACTIONS(1055), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5831] = 3,
    ACTIONS(981), 1,
      sym_variable_symbol,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_class_name_list_repeat1,
  [5841] = 3,
    ACTIONS(443), 1,
      sym_symbol,
    ACTIONS(445), 1,
      sym_variable_symbol,
    ACTIONS(463), 1,
      anon_sym_object,
  [5851] = 3,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(1059), 1,
      sym_symbol,
    STATE(330), 1,
      aux_sym_symbol_list_repeat1,
  [5861] = 2,
    STATE(335), 1,
      sym_cardinality_specification,
    ACTIONS(1062), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5869] = 1,
    ACTIONS(1064), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5875] = 2,
    STATE(421), 1,
      sym_range_specification,
    ACTIONS(1066), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5883] = 1,
    ACTIONS(1068), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5889] = 2,
    STATE(419), 1,
      sym_cardinality_specification,
    ACTIONS(1062), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5897] = 2,
    STATE(333), 1,
      sym_range_specification,
    ACTIONS(1066), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5905] = 3,
    ACTIONS(989), 1,
      sym_single_field_variable,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_parameter_list,
  [5915] = 3,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      aux_sym_parameter_list_token1,
    STATE(341), 1,
      aux_sym_parameter_list_repeat1,
  [5925] = 3,
    ACTIONS(1076), 1,
      sym_integer,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_range_spec,
  [5935] = 3,
    ACTIONS(1080), 1,
      sym_str_lit,
    ACTIONS(1082), 1,
      sym_integer,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
  [5945] = 3,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      aux_sym_parameter_list_token1,
    STATE(345), 1,
      aux_sym_parameter_list_repeat1,
  [5955] = 3,
    ACTIONS(1090), 1,
      sym_single_field_variable,
    ACTIONS(1092), 1,
      sym_multifield_variable,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [5965] = 3,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(1096), 1,
      sym_integer,
    STATE(5), 1,
      sym_range_spec,
  [5975] = 3,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(1098), 1,
      sym_integer,
    STATE(16), 1,
      sym_range_spec,
  [5985] = 3,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    ACTIONS(1102), 1,
      aux_sym_parameter_list_token1,
    STATE(345), 1,
      aux_sym_parameter_list_repeat1,
  [5995] = 3,
    ACTIONS(1090), 1,
      sym_single_field_variable,
    ACTIONS(1105), 1,
      sym_multifield_variable,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
  [6005] = 2,
    ACTIONS(1109), 1,
      sym_variable_symbol,
    ACTIONS(1111), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [6013] = 2,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(1115), 1,
      aux_sym_parameter_list_token1,
  [6020] = 2,
    ACTIONS(1117), 1,
      sym_str_lit,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
  [6027] = 2,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    ACTIONS(1121), 1,
      aux_sym_parameter_list_token1,
  [6034] = 1,
    ACTIONS(1123), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6039] = 2,
    ACTIONS(1125), 1,
      sym_str_lit,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
  [6046] = 2,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    ACTIONS(1131), 1,
      aux_sym_parameter_list_token1,
  [6053] = 1,
    ACTIONS(1133), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6058] = 1,
    ACTIONS(1135), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6063] = 1,
    ACTIONS(1137), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6068] = 2,
    ACTIONS(1139), 1,
      sym_single_field_variable,
    ACTIONS(1141), 1,
      sym_multifield_variable,
  [6075] = 2,
    ACTIONS(1143), 1,
      sym_str_lit,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
  [6082] = 1,
    ACTIONS(1147), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6087] = 1,
    ACTIONS(1149), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6092] = 1,
    ACTIONS(1151), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6097] = 1,
    ACTIONS(1153), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6102] = 2,
    ACTIONS(1155), 1,
      sym_symbol,
    ACTIONS(1157), 1,
      sym_variable_symbol,
  [6109] = 1,
    ACTIONS(1159), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6114] = 1,
    ACTIONS(1161), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6119] = 2,
    ACTIONS(1163), 1,
      anon_sym_slot,
    ACTIONS(1165), 1,
      anon_sym_multislot,
  [6126] = 1,
    ACTIONS(1167), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6131] = 1,
    ACTIONS(1169), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6136] = 2,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_function_call,
  [6143] = 1,
    ACTIONS(1171), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6148] = 2,
    ACTIONS(1173), 1,
      anon_sym_salience,
    ACTIONS(1175), 1,
      anon_sym_auto_DASHfocus,
  [6155] = 1,
    ACTIONS(1177), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6160] = 1,
    ACTIONS(1179), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6165] = 1,
    ACTIONS(1181), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6170] = 1,
    ACTIONS(1183), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6175] = 1,
    ACTIONS(1185), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6180] = 2,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(454), 1,
      sym_function_call,
  [6187] = 1,
    ACTIONS(1187), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6192] = 1,
    ACTIONS(1189), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6197] = 1,
    ACTIONS(1191), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6202] = 1,
    ACTIONS(1193), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6207] = 1,
    ACTIONS(1195), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6212] = 1,
    ACTIONS(1197), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6217] = 1,
    ACTIONS(1199), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6222] = 1,
    ACTIONS(1201), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6227] = 1,
    ACTIONS(1203), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6232] = 1,
    ACTIONS(1205), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6237] = 1,
    ACTIONS(1207), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6242] = 1,
    ACTIONS(1209), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6247] = 1,
    ACTIONS(1211), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6252] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_function_call,
  [6259] = 1,
    ACTIONS(1215), 1,
      sym_variable_symbol,
  [6263] = 1,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
  [6267] = 1,
    ACTIONS(1219), 1,
      sym_variable_symbol,
  [6271] = 1,
    ACTIONS(1221), 1,
      sym_symbol,
  [6275] = 1,
    ACTIONS(1223), 1,
      sym_single_field_variable,
  [6279] = 1,
    ACTIONS(1090), 1,
      sym_single_field_variable,
  [6283] = 1,
    ACTIONS(1225), 1,
      sym_variable_symbol,
  [6287] = 1,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
  [6291] = 1,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [6295] = 1,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [6299] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [6303] = 1,
    ACTIONS(1235), 1,
      anon_sym_then,
  [6307] = 1,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
  [6311] = 1,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
  [6315] = 1,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [6319] = 1,
    ACTIONS(1243), 1,
      anon_sym_LPAREN,
  [6323] = 1,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
  [6327] = 1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [6331] = 1,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [6335] = 1,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
  [6339] = 1,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [6343] = 1,
    ACTIONS(1253), 1,
      sym_variable_symbol,
  [6347] = 1,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [6351] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [6355] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [6359] = 1,
    ACTIONS(1261), 1,
      sym_boolean_symbol,
  [6363] = 1,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
  [6367] = 1,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [6371] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [6375] = 1,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
  [6379] = 1,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [6383] = 1,
    ACTIONS(1271), 1,
      anon_sym_LT_DASH,
  [6387] = 1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [6391] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [6395] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [6399] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [6403] = 1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [6407] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [6411] = 1,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
  [6415] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [6419] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [6423] = 1,
    ACTIONS(1139), 1,
      sym_single_field_variable,
  [6427] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [6431] = 1,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
  [6435] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [6439] = 1,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
  [6443] = 1,
    ACTIONS(1285), 1,
      anon_sym_EQ,
  [6447] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [6451] = 1,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
  [6455] = 1,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
  [6459] = 1,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [6463] = 1,
    ACTIONS(1295), 1,
      sym_symbol,
  [6467] = 1,
    ACTIONS(1297), 1,
      sym_symbol,
  [6471] = 1,
    ACTIONS(1299), 1,
      sym_symbol,
  [6475] = 1,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [6479] = 1,
    ACTIONS(1303), 1,
      sym_symbol,
  [6483] = 1,
    ACTIONS(1305), 1,
      sym_variable_symbol,
  [6487] = 1,
    ACTIONS(1307), 1,
      sym_variable_symbol,
  [6491] = 1,
    ACTIONS(1309), 1,
      ts_builtin_sym_end,
  [6495] = 1,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
  [6499] = 1,
    ACTIONS(1313), 1,
      sym_symbol,
  [6503] = 1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [6507] = 1,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [6511] = 1,
    ACTIONS(1317), 1,
      anon_sym_then,
  [6515] = 1,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [6519] = 1,
    ACTIONS(1321), 1,
      sym_symbol,
  [6523] = 1,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
  [6527] = 1,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
  [6531] = 1,
    ACTIONS(1327), 1,
      anon_sym_then,
  [6535] = 1,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
  [6539] = 1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 565,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 623,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 707,
  [SMALL_STATE(25)] = 733,
  [SMALL_STATE(26)] = 759,
  [SMALL_STATE(27)] = 785,
  [SMALL_STATE(28)] = 811,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 863,
  [SMALL_STATE(31)] = 889,
  [SMALL_STATE(32)] = 915,
  [SMALL_STATE(33)] = 941,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 993,
  [SMALL_STATE(36)] = 1019,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1097,
  [SMALL_STATE(40)] = 1123,
  [SMALL_STATE(41)] = 1149,
  [SMALL_STATE(42)] = 1175,
  [SMALL_STATE(43)] = 1201,
  [SMALL_STATE(44)] = 1227,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1279,
  [SMALL_STATE(47)] = 1305,
  [SMALL_STATE(48)] = 1331,
  [SMALL_STATE(49)] = 1357,
  [SMALL_STATE(50)] = 1383,
  [SMALL_STATE(51)] = 1409,
  [SMALL_STATE(52)] = 1435,
  [SMALL_STATE(53)] = 1461,
  [SMALL_STATE(54)] = 1487,
  [SMALL_STATE(55)] = 1513,
  [SMALL_STATE(56)] = 1539,
  [SMALL_STATE(57)] = 1565,
  [SMALL_STATE(58)] = 1591,
  [SMALL_STATE(59)] = 1617,
  [SMALL_STATE(60)] = 1643,
  [SMALL_STATE(61)] = 1669,
  [SMALL_STATE(62)] = 1695,
  [SMALL_STATE(63)] = 1721,
  [SMALL_STATE(64)] = 1747,
  [SMALL_STATE(65)] = 1773,
  [SMALL_STATE(66)] = 1799,
  [SMALL_STATE(67)] = 1825,
  [SMALL_STATE(68)] = 1851,
  [SMALL_STATE(69)] = 1877,
  [SMALL_STATE(70)] = 1903,
  [SMALL_STATE(71)] = 1929,
  [SMALL_STATE(72)] = 1955,
  [SMALL_STATE(73)] = 1981,
  [SMALL_STATE(74)] = 2007,
  [SMALL_STATE(75)] = 2033,
  [SMALL_STATE(76)] = 2059,
  [SMALL_STATE(77)] = 2085,
  [SMALL_STATE(78)] = 2111,
  [SMALL_STATE(79)] = 2137,
  [SMALL_STATE(80)] = 2163,
  [SMALL_STATE(81)] = 2189,
  [SMALL_STATE(82)] = 2215,
  [SMALL_STATE(83)] = 2241,
  [SMALL_STATE(84)] = 2267,
  [SMALL_STATE(85)] = 2293,
  [SMALL_STATE(86)] = 2319,
  [SMALL_STATE(87)] = 2345,
  [SMALL_STATE(88)] = 2371,
  [SMALL_STATE(89)] = 2397,
  [SMALL_STATE(90)] = 2423,
  [SMALL_STATE(91)] = 2449,
  [SMALL_STATE(92)] = 2475,
  [SMALL_STATE(93)] = 2501,
  [SMALL_STATE(94)] = 2527,
  [SMALL_STATE(95)] = 2553,
  [SMALL_STATE(96)] = 2579,
  [SMALL_STATE(97)] = 2605,
  [SMALL_STATE(98)] = 2631,
  [SMALL_STATE(99)] = 2657,
  [SMALL_STATE(100)] = 2683,
  [SMALL_STATE(101)] = 2709,
  [SMALL_STATE(102)] = 2735,
  [SMALL_STATE(103)] = 2761,
  [SMALL_STATE(104)] = 2787,
  [SMALL_STATE(105)] = 2813,
  [SMALL_STATE(106)] = 2839,
  [SMALL_STATE(107)] = 2865,
  [SMALL_STATE(108)] = 2891,
  [SMALL_STATE(109)] = 2917,
  [SMALL_STATE(110)] = 2943,
  [SMALL_STATE(111)] = 2978,
  [SMALL_STATE(112)] = 3001,
  [SMALL_STATE(113)] = 3026,
  [SMALL_STATE(114)] = 3049,
  [SMALL_STATE(115)] = 3072,
  [SMALL_STATE(116)] = 3095,
  [SMALL_STATE(117)] = 3118,
  [SMALL_STATE(118)] = 3140,
  [SMALL_STATE(119)] = 3162,
  [SMALL_STATE(120)] = 3184,
  [SMALL_STATE(121)] = 3206,
  [SMALL_STATE(122)] = 3228,
  [SMALL_STATE(123)] = 3253,
  [SMALL_STATE(124)] = 3276,
  [SMALL_STATE(125)] = 3299,
  [SMALL_STATE(126)] = 3322,
  [SMALL_STATE(127)] = 3347,
  [SMALL_STATE(128)] = 3364,
  [SMALL_STATE(129)] = 3381,
  [SMALL_STATE(130)] = 3424,
  [SMALL_STATE(131)] = 3441,
  [SMALL_STATE(132)] = 3458,
  [SMALL_STATE(133)] = 3477,
  [SMALL_STATE(134)] = 3494,
  [SMALL_STATE(135)] = 3511,
  [SMALL_STATE(136)] = 3536,
  [SMALL_STATE(137)] = 3564,
  [SMALL_STATE(138)] = 3584,
  [SMALL_STATE(139)] = 3612,
  [SMALL_STATE(140)] = 3627,
  [SMALL_STATE(141)] = 3642,
  [SMALL_STATE(142)] = 3659,
  [SMALL_STATE(143)] = 3693,
  [SMALL_STATE(144)] = 3706,
  [SMALL_STATE(145)] = 3725,
  [SMALL_STATE(146)] = 3742,
  [SMALL_STATE(147)] = 3759,
  [SMALL_STATE(148)] = 3772,
  [SMALL_STATE(149)] = 3791,
  [SMALL_STATE(150)] = 3804,
  [SMALL_STATE(151)] = 3817,
  [SMALL_STATE(152)] = 3830,
  [SMALL_STATE(153)] = 3843,
  [SMALL_STATE(154)] = 3860,
  [SMALL_STATE(155)] = 3873,
  [SMALL_STATE(156)] = 3886,
  [SMALL_STATE(157)] = 3903,
  [SMALL_STATE(158)] = 3934,
  [SMALL_STATE(159)] = 3947,
  [SMALL_STATE(160)] = 3964,
  [SMALL_STATE(161)] = 3977,
  [SMALL_STATE(162)] = 3990,
  [SMALL_STATE(163)] = 4003,
  [SMALL_STATE(164)] = 4015,
  [SMALL_STATE(165)] = 4027,
  [SMALL_STATE(166)] = 4039,
  [SMALL_STATE(167)] = 4051,
  [SMALL_STATE(168)] = 4063,
  [SMALL_STATE(169)] = 4075,
  [SMALL_STATE(170)] = 4087,
  [SMALL_STATE(171)] = 4099,
  [SMALL_STATE(172)] = 4111,
  [SMALL_STATE(173)] = 4125,
  [SMALL_STATE(174)] = 4137,
  [SMALL_STATE(175)] = 4154,
  [SMALL_STATE(176)] = 4176,
  [SMALL_STATE(177)] = 4192,
  [SMALL_STATE(178)] = 4212,
  [SMALL_STATE(179)] = 4228,
  [SMALL_STATE(180)] = 4250,
  [SMALL_STATE(181)] = 4270,
  [SMALL_STATE(182)] = 4290,
  [SMALL_STATE(183)] = 4310,
  [SMALL_STATE(184)] = 4332,
  [SMALL_STATE(185)] = 4352,
  [SMALL_STATE(186)] = 4374,
  [SMALL_STATE(187)] = 4394,
  [SMALL_STATE(188)] = 4414,
  [SMALL_STATE(189)] = 4428,
  [SMALL_STATE(190)] = 4442,
  [SMALL_STATE(191)] = 4462,
  [SMALL_STATE(192)] = 4484,
  [SMALL_STATE(193)] = 4497,
  [SMALL_STATE(194)] = 4512,
  [SMALL_STATE(195)] = 4525,
  [SMALL_STATE(196)] = 4538,
  [SMALL_STATE(197)] = 4551,
  [SMALL_STATE(198)] = 4566,
  [SMALL_STATE(199)] = 4579,
  [SMALL_STATE(200)] = 4592,
  [SMALL_STATE(201)] = 4605,
  [SMALL_STATE(202)] = 4618,
  [SMALL_STATE(203)] = 4631,
  [SMALL_STATE(204)] = 4644,
  [SMALL_STATE(205)] = 4657,
  [SMALL_STATE(206)] = 4670,
  [SMALL_STATE(207)] = 4683,
  [SMALL_STATE(208)] = 4696,
  [SMALL_STATE(209)] = 4709,
  [SMALL_STATE(210)] = 4722,
  [SMALL_STATE(211)] = 4735,
  [SMALL_STATE(212)] = 4747,
  [SMALL_STATE(213)] = 4757,
  [SMALL_STATE(214)] = 4765,
  [SMALL_STATE(215)] = 4773,
  [SMALL_STATE(216)] = 4785,
  [SMALL_STATE(217)] = 4795,
  [SMALL_STATE(218)] = 4809,
  [SMALL_STATE(219)] = 4819,
  [SMALL_STATE(220)] = 4829,
  [SMALL_STATE(221)] = 4841,
  [SMALL_STATE(222)] = 4850,
  [SMALL_STATE(223)] = 4859,
  [SMALL_STATE(224)] = 4868,
  [SMALL_STATE(225)] = 4877,
  [SMALL_STATE(226)] = 4884,
  [SMALL_STATE(227)] = 4895,
  [SMALL_STATE(228)] = 4904,
  [SMALL_STATE(229)] = 4911,
  [SMALL_STATE(230)] = 4920,
  [SMALL_STATE(231)] = 4927,
  [SMALL_STATE(232)] = 4936,
  [SMALL_STATE(233)] = 4949,
  [SMALL_STATE(234)] = 4956,
  [SMALL_STATE(235)] = 4963,
  [SMALL_STATE(236)] = 4976,
  [SMALL_STATE(237)] = 4985,
  [SMALL_STATE(238)] = 4992,
  [SMALL_STATE(239)] = 5001,
  [SMALL_STATE(240)] = 5012,
  [SMALL_STATE(241)] = 5019,
  [SMALL_STATE(242)] = 5028,
  [SMALL_STATE(243)] = 5037,
  [SMALL_STATE(244)] = 5048,
  [SMALL_STATE(245)] = 5057,
  [SMALL_STATE(246)] = 5066,
  [SMALL_STATE(247)] = 5073,
  [SMALL_STATE(248)] = 5082,
  [SMALL_STATE(249)] = 5091,
  [SMALL_STATE(250)] = 5100,
  [SMALL_STATE(251)] = 5109,
  [SMALL_STATE(252)] = 5118,
  [SMALL_STATE(253)] = 5131,
  [SMALL_STATE(254)] = 5144,
  [SMALL_STATE(255)] = 5157,
  [SMALL_STATE(256)] = 5170,
  [SMALL_STATE(257)] = 5183,
  [SMALL_STATE(258)] = 5196,
  [SMALL_STATE(259)] = 5209,
  [SMALL_STATE(260)] = 5222,
  [SMALL_STATE(261)] = 5231,
  [SMALL_STATE(262)] = 5240,
  [SMALL_STATE(263)] = 5249,
  [SMALL_STATE(264)] = 5258,
  [SMALL_STATE(265)] = 5267,
  [SMALL_STATE(266)] = 5276,
  [SMALL_STATE(267)] = 5287,
  [SMALL_STATE(268)] = 5298,
  [SMALL_STATE(269)] = 5305,
  [SMALL_STATE(270)] = 5312,
  [SMALL_STATE(271)] = 5321,
  [SMALL_STATE(272)] = 5330,
  [SMALL_STATE(273)] = 5337,
  [SMALL_STATE(274)] = 5346,
  [SMALL_STATE(275)] = 5359,
  [SMALL_STATE(276)] = 5370,
  [SMALL_STATE(277)] = 5377,
  [SMALL_STATE(278)] = 5386,
  [SMALL_STATE(279)] = 5395,
  [SMALL_STATE(280)] = 5404,
  [SMALL_STATE(281)] = 5413,
  [SMALL_STATE(282)] = 5424,
  [SMALL_STATE(283)] = 5435,
  [SMALL_STATE(284)] = 5444,
  [SMALL_STATE(285)] = 5455,
  [SMALL_STATE(286)] = 5464,
  [SMALL_STATE(287)] = 5473,
  [SMALL_STATE(288)] = 5484,
  [SMALL_STATE(289)] = 5493,
  [SMALL_STATE(290)] = 5502,
  [SMALL_STATE(291)] = 5511,
  [SMALL_STATE(292)] = 5518,
  [SMALL_STATE(293)] = 5525,
  [SMALL_STATE(294)] = 5534,
  [SMALL_STATE(295)] = 5541,
  [SMALL_STATE(296)] = 5550,
  [SMALL_STATE(297)] = 5557,
  [SMALL_STATE(298)] = 5564,
  [SMALL_STATE(299)] = 5571,
  [SMALL_STATE(300)] = 5582,
  [SMALL_STATE(301)] = 5591,
  [SMALL_STATE(302)] = 5602,
  [SMALL_STATE(303)] = 5611,
  [SMALL_STATE(304)] = 5620,
  [SMALL_STATE(305)] = 5629,
  [SMALL_STATE(306)] = 5636,
  [SMALL_STATE(307)] = 5645,
  [SMALL_STATE(308)] = 5655,
  [SMALL_STATE(309)] = 5663,
  [SMALL_STATE(310)] = 5671,
  [SMALL_STATE(311)] = 5681,
  [SMALL_STATE(312)] = 5687,
  [SMALL_STATE(313)] = 5697,
  [SMALL_STATE(314)] = 5703,
  [SMALL_STATE(315)] = 5709,
  [SMALL_STATE(316)] = 5719,
  [SMALL_STATE(317)] = 5729,
  [SMALL_STATE(318)] = 5739,
  [SMALL_STATE(319)] = 5749,
  [SMALL_STATE(320)] = 5759,
  [SMALL_STATE(321)] = 5769,
  [SMALL_STATE(322)] = 5779,
  [SMALL_STATE(323)] = 5785,
  [SMALL_STATE(324)] = 5795,
  [SMALL_STATE(325)] = 5805,
  [SMALL_STATE(326)] = 5815,
  [SMALL_STATE(327)] = 5825,
  [SMALL_STATE(328)] = 5831,
  [SMALL_STATE(329)] = 5841,
  [SMALL_STATE(330)] = 5851,
  [SMALL_STATE(331)] = 5861,
  [SMALL_STATE(332)] = 5869,
  [SMALL_STATE(333)] = 5875,
  [SMALL_STATE(334)] = 5883,
  [SMALL_STATE(335)] = 5889,
  [SMALL_STATE(336)] = 5897,
  [SMALL_STATE(337)] = 5905,
  [SMALL_STATE(338)] = 5915,
  [SMALL_STATE(339)] = 5925,
  [SMALL_STATE(340)] = 5935,
  [SMALL_STATE(341)] = 5945,
  [SMALL_STATE(342)] = 5955,
  [SMALL_STATE(343)] = 5965,
  [SMALL_STATE(344)] = 5975,
  [SMALL_STATE(345)] = 5985,
  [SMALL_STATE(346)] = 5995,
  [SMALL_STATE(347)] = 6005,
  [SMALL_STATE(348)] = 6013,
  [SMALL_STATE(349)] = 6020,
  [SMALL_STATE(350)] = 6027,
  [SMALL_STATE(351)] = 6034,
  [SMALL_STATE(352)] = 6039,
  [SMALL_STATE(353)] = 6046,
  [SMALL_STATE(354)] = 6053,
  [SMALL_STATE(355)] = 6058,
  [SMALL_STATE(356)] = 6063,
  [SMALL_STATE(357)] = 6068,
  [SMALL_STATE(358)] = 6075,
  [SMALL_STATE(359)] = 6082,
  [SMALL_STATE(360)] = 6087,
  [SMALL_STATE(361)] = 6092,
  [SMALL_STATE(362)] = 6097,
  [SMALL_STATE(363)] = 6102,
  [SMALL_STATE(364)] = 6109,
  [SMALL_STATE(365)] = 6114,
  [SMALL_STATE(366)] = 6119,
  [SMALL_STATE(367)] = 6126,
  [SMALL_STATE(368)] = 6131,
  [SMALL_STATE(369)] = 6136,
  [SMALL_STATE(370)] = 6143,
  [SMALL_STATE(371)] = 6148,
  [SMALL_STATE(372)] = 6155,
  [SMALL_STATE(373)] = 6160,
  [SMALL_STATE(374)] = 6165,
  [SMALL_STATE(375)] = 6170,
  [SMALL_STATE(376)] = 6175,
  [SMALL_STATE(377)] = 6180,
  [SMALL_STATE(378)] = 6187,
  [SMALL_STATE(379)] = 6192,
  [SMALL_STATE(380)] = 6197,
  [SMALL_STATE(381)] = 6202,
  [SMALL_STATE(382)] = 6207,
  [SMALL_STATE(383)] = 6212,
  [SMALL_STATE(384)] = 6217,
  [SMALL_STATE(385)] = 6222,
  [SMALL_STATE(386)] = 6227,
  [SMALL_STATE(387)] = 6232,
  [SMALL_STATE(388)] = 6237,
  [SMALL_STATE(389)] = 6242,
  [SMALL_STATE(390)] = 6247,
  [SMALL_STATE(391)] = 6252,
  [SMALL_STATE(392)] = 6259,
  [SMALL_STATE(393)] = 6263,
  [SMALL_STATE(394)] = 6267,
  [SMALL_STATE(395)] = 6271,
  [SMALL_STATE(396)] = 6275,
  [SMALL_STATE(397)] = 6279,
  [SMALL_STATE(398)] = 6283,
  [SMALL_STATE(399)] = 6287,
  [SMALL_STATE(400)] = 6291,
  [SMALL_STATE(401)] = 6295,
  [SMALL_STATE(402)] = 6299,
  [SMALL_STATE(403)] = 6303,
  [SMALL_STATE(404)] = 6307,
  [SMALL_STATE(405)] = 6311,
  [SMALL_STATE(406)] = 6315,
  [SMALL_STATE(407)] = 6319,
  [SMALL_STATE(408)] = 6323,
  [SMALL_STATE(409)] = 6327,
  [SMALL_STATE(410)] = 6331,
  [SMALL_STATE(411)] = 6335,
  [SMALL_STATE(412)] = 6339,
  [SMALL_STATE(413)] = 6343,
  [SMALL_STATE(414)] = 6347,
  [SMALL_STATE(415)] = 6351,
  [SMALL_STATE(416)] = 6355,
  [SMALL_STATE(417)] = 6359,
  [SMALL_STATE(418)] = 6363,
  [SMALL_STATE(419)] = 6367,
  [SMALL_STATE(420)] = 6371,
  [SMALL_STATE(421)] = 6375,
  [SMALL_STATE(422)] = 6379,
  [SMALL_STATE(423)] = 6383,
  [SMALL_STATE(424)] = 6387,
  [SMALL_STATE(425)] = 6391,
  [SMALL_STATE(426)] = 6395,
  [SMALL_STATE(427)] = 6399,
  [SMALL_STATE(428)] = 6403,
  [SMALL_STATE(429)] = 6407,
  [SMALL_STATE(430)] = 6411,
  [SMALL_STATE(431)] = 6415,
  [SMALL_STATE(432)] = 6419,
  [SMALL_STATE(433)] = 6423,
  [SMALL_STATE(434)] = 6427,
  [SMALL_STATE(435)] = 6431,
  [SMALL_STATE(436)] = 6435,
  [SMALL_STATE(437)] = 6439,
  [SMALL_STATE(438)] = 6443,
  [SMALL_STATE(439)] = 6447,
  [SMALL_STATE(440)] = 6451,
  [SMALL_STATE(441)] = 6455,
  [SMALL_STATE(442)] = 6459,
  [SMALL_STATE(443)] = 6463,
  [SMALL_STATE(444)] = 6467,
  [SMALL_STATE(445)] = 6471,
  [SMALL_STATE(446)] = 6475,
  [SMALL_STATE(447)] = 6479,
  [SMALL_STATE(448)] = 6483,
  [SMALL_STATE(449)] = 6487,
  [SMALL_STATE(450)] = 6491,
  [SMALL_STATE(451)] = 6495,
  [SMALL_STATE(452)] = 6499,
  [SMALL_STATE(453)] = 6503,
  [SMALL_STATE(454)] = 6507,
  [SMALL_STATE(455)] = 6511,
  [SMALL_STATE(456)] = 6515,
  [SMALL_STATE(457)] = 6519,
  [SMALL_STATE(458)] = 6523,
  [SMALL_STATE(459)] = 6527,
  [SMALL_STATE(460)] = 6531,
  [SMALL_STATE(461)] = 6535,
  [SMALL_STATE(462)] = 6539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(423),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(157),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(127),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(139),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(148),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(391),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(232),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(39),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(274),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(124),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(395),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(191),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1), SHIFT(356),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(129),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(385),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(188),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(233),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(433),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(363),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(366),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(398),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(211),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(215),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexeme_list, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 8),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 11),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(371),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(413),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 8),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 11),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(347),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(438),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_list, 1),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2), SHIFT_REPEAT(316),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(318),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(319),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(320),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(324),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(326),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(330),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(397),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 9),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 9),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 5),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 5),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 9),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 9),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 5),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 8),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 11),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 8),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 11),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
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
