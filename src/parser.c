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
#define STATE_COUNT 456
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
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
  anon_sym_defgeneric = 69,
  anon_sym_defmethod = 70,
  sym_program = 71,
  sym__construct = 72,
  sym__gap = 73,
  sym__expression = 74,
  sym__lexeme = 75,
  sym__constant = 76,
  sym__variable = 77,
  sym_function_call = 78,
  sym_loop_for_count = 79,
  sym_range_spec = 80,
  sym_if_then_else = 81,
  sym_assert = 82,
  sym_deffacts_construct = 83,
  sym__rhs_pattern = 84,
  sym_ordered_rhs_pattern = 85,
  sym_template_rhs_pattern = 86,
  sym__rhs_slot = 87,
  sym_single_field_rhs_slot = 88,
  sym_multifield_rhs_slot = 89,
  sym__rhs_field = 90,
  sym_deftemplate_construct = 91,
  sym__slot_definition = 92,
  sym_single_slot_definition = 93,
  sym_multislot_definition = 94,
  sym__template_attribute = 95,
  sym_default_attribute = 96,
  sym__constraint_attribute = 97,
  sym_type_attribute = 98,
  sym_type_specification = 99,
  sym_allowed_constant_attribute = 100,
  sym_symbol_list = 101,
  sym_string_list = 102,
  sym_lexeme_list = 103,
  sym_integer_list = 104,
  sym_float_list = 105,
  sym_number_list = 106,
  sym_class_name_list = 107,
  sym_instance_list = 108,
  sym_value_list = 109,
  sym_range_attribute = 110,
  sym_range_specification = 111,
  sym_cardinality_attribute = 112,
  sym_cardinality_specification = 113,
  sym_defrule_construct = 114,
  sym_declaration = 115,
  sym_rule_property = 116,
  sym__conditional_element = 117,
  sym__pattern_CE = 118,
  sym_assigned_pattern_CE = 119,
  sym_not_CE = 120,
  sym_and_CE = 121,
  sym_or_CE = 122,
  sym_logical_CE = 123,
  sym_test_CE = 124,
  sym_exists_CE = 125,
  sym_forall_CE = 126,
  sym_ordered_pattern_CE = 127,
  sym_template_pattern_CE = 128,
  sym_object_pattern_CE = 129,
  sym_attribute_constraint = 130,
  sym_lhs_slot = 131,
  sym_constraint = 132,
  sym_connected_constraint = 133,
  sym_single_constraint = 134,
  sym_term = 135,
  sym_defglobal_construct = 136,
  sym__global_assignment = 137,
  sym_deffunction_construct = 138,
  sym_parameter_list = 139,
  sym_defgeneric_construct = 140,
  sym_defmethod_construct = 141,
  sym_parameter_restriction = 142,
  sym_wildcard_parameter_restriction = 143,
  sym_query = 144,
  aux_sym_program_repeat1 = 145,
  aux_sym_function_call_repeat1 = 146,
  aux_sym_assert_repeat1 = 147,
  aux_sym_ordered_rhs_pattern_repeat1 = 148,
  aux_sym_template_rhs_pattern_repeat1 = 149,
  aux_sym_deftemplate_construct_repeat1 = 150,
  aux_sym_single_slot_definition_repeat1 = 151,
  aux_sym_type_specification_repeat1 = 152,
  aux_sym_symbol_list_repeat1 = 153,
  aux_sym_string_list_repeat1 = 154,
  aux_sym_lexeme_list_repeat1 = 155,
  aux_sym_integer_list_repeat1 = 156,
  aux_sym_float_list_repeat1 = 157,
  aux_sym_number_list_repeat1 = 158,
  aux_sym_class_name_list_repeat1 = 159,
  aux_sym_value_list_repeat1 = 160,
  aux_sym_defrule_construct_repeat1 = 161,
  aux_sym_declaration_repeat1 = 162,
  aux_sym_ordered_pattern_CE_repeat1 = 163,
  aux_sym_template_pattern_CE_repeat1 = 164,
  aux_sym_object_pattern_CE_repeat1 = 165,
  aux_sym_defglobal_construct_repeat1 = 166,
  aux_sym_parameter_list_repeat1 = 167,
  aux_sym_defmethod_construct_repeat1 = 168,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 10,
  [18] = 10,
  [19] = 11,
  [20] = 20,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 26,
  [45] = 45,
  [46] = 27,
  [47] = 28,
  [48] = 48,
  [49] = 29,
  [50] = 50,
  [51] = 32,
  [52] = 36,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 32,
  [58] = 36,
  [59] = 50,
  [60] = 36,
  [61] = 61,
  [62] = 62,
  [63] = 38,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 20,
  [90] = 38,
  [91] = 29,
  [92] = 92,
  [93] = 28,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 43,
  [99] = 43,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 26,
  [105] = 105,
  [106] = 27,
  [107] = 107,
  [108] = 50,
  [109] = 38,
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
  [138] = 137,
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 134,
  [160] = 135,
  [161] = 161,
  [162] = 156,
  [163] = 151,
  [164] = 148,
  [165] = 153,
  [166] = 161,
  [167] = 135,
  [168] = 152,
  [169] = 134,
  [170] = 143,
  [171] = 154,
  [172] = 172,
  [173] = 149,
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
  [199] = 192,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 203,
  [209] = 192,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 135,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 216,
  [221] = 216,
  [222] = 134,
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
  [235] = 229,
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
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 229,
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
  [314] = 132,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 130,
  [319] = 319,
  [320] = 133,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 123,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 131,
  [335] = 218,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 336,
  [344] = 336,
  [345] = 153,
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
  [366] = 362,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 152,
  [373] = 373,
  [374] = 143,
  [375] = 375,
  [376] = 376,
  [377] = 161,
  [378] = 154,
  [379] = 151,
  [380] = 149,
  [381] = 148,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 139,
  [390] = 390,
  [391] = 391,
  [392] = 141,
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
  [445] = 399,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 399,
  [451] = 448,
  [452] = 452,
  [453] = 448,
  [454] = 454,
  [455] = 455,
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
      if (eof) ADVANCE(324);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(535);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ':') ADVANCE(538);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(540);
      if (lookahead == '?') ADVANCE(531);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead == '[') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '~') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(535);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(535);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == ':') ADVANCE(539);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '?') ADVANCE(531);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '~') ADVANCE(537);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ';') ADVANCE(443);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == ':') ADVANCE(539);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '~') ADVANCE(537);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(443);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(322);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(453);
      if (lookahead == 'N') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(510);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(505);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(533);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(320);
      END_STATE();
    case 36:
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(492);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(490);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(491);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(490);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(490);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(490);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(490);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(490);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == 'Y') ADVANCE(73);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 96:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 98:
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'X') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'X') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(106)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(107)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(110)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(545);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(243);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 193:
      if (lookahead == 'j') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(236)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 306:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 307:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 308:
      if (lookahead == 'y') ADVANCE(503);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 310:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 311:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 319:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 320:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 321:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 322:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 323:
      if (eof) ADVANCE(324);
      if (lookahead == 11) SKIP(323)
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 327:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == ':') ADVANCE(539);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == ':') ADVANCE(539);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '?') ADVANCE(532);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(439);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '?') ADVANCE(379);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead == 'D') ADVANCE(368);
      if (lookahead == 'N') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(381);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(350);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'B') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 396:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 412:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 417:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_symbol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 443:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'm') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 450:
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
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(101);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_single_field_variable);
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
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 461:
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
          lookahead != '~') ADVANCE(461);
      END_STATE();
    case 462:
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
          lookahead != '~') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(18);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 467:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 469:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 471:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 474:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 476:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 482:
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
          lookahead != '~') ADVANCE(461);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 484:
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
          lookahead != '~') ADVANCE(461);
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 489:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 507:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 512:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 514:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 516:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 518:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 520:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 522:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 524:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 526:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 528:
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
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 530:
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
          lookahead != '~') ADVANCE(450);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 539:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 541:
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
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 323},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 5},
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
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 323},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 323},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 106},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 107},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 10},
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
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 323},
  [224] = {.lex_state = 323},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 323},
  [229] = {.lex_state = 110},
  [230] = {.lex_state = 323},
  [231] = {.lex_state = 323},
  [232] = {.lex_state = 323},
  [233] = {.lex_state = 323},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 110},
  [236] = {.lex_state = 323},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 323},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 323},
  [242] = {.lex_state = 323},
  [243] = {.lex_state = 323},
  [244] = {.lex_state = 323},
  [245] = {.lex_state = 323},
  [246] = {.lex_state = 32},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 32},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 323},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 323},
  [258] = {.lex_state = 323},
  [259] = {.lex_state = 323},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 323},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 323},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 323},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 323},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 323},
  [276] = {.lex_state = 323},
  [277] = {.lex_state = 323},
  [278] = {.lex_state = 323},
  [279] = {.lex_state = 323},
  [280] = {.lex_state = 323},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 323},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 110},
  [286] = {.lex_state = 323},
  [287] = {.lex_state = 323},
  [288] = {.lex_state = 323},
  [289] = {.lex_state = 323},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 323},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 323},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 323},
  [300] = {.lex_state = 323},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 323},
  [305] = {.lex_state = 323},
  [306] = {.lex_state = 323},
  [307] = {.lex_state = 323},
  [308] = {.lex_state = 323},
  [309] = {.lex_state = 323},
  [310] = {.lex_state = 323},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 236},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 3},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 17},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 17},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 17},
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
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 2},
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
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 3},
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
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 3},
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
  [431] = {.lex_state = 3},
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
  [442] = {.lex_state = 17},
  [443] = {.lex_state = 17},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 17},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 17},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 17},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 17},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 3},
  [455] = {.lex_state = 3},
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
    [sym_program] = STATE(437),
    [sym__construct] = STATE(129),
    [sym__gap] = STATE(129),
    [sym_deffacts_construct] = STATE(129),
    [sym_deftemplate_construct] = STATE(129),
    [sym_defrule_construct] = STATE(129),
    [sym_defglobal_construct] = STATE(129),
    [sym_deffunction_construct] = STATE(129),
    [sym_defgeneric_construct] = STATE(129),
    [sym_defmethod_construct] = STATE(129),
    [aux_sym_program_repeat1] = STATE(129),
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
    STATE(84), 8,
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
    STATE(41), 1,
      sym_declaration,
    STATE(42), 14,
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
  [62] = 10,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(8), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [101] = 5,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
    STATE(65), 1,
      sym_declaration,
    STATE(66), 14,
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
  [130] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(8), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [169] = 11,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    STATE(140), 1,
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
  [210] = 10,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_TILDE,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(48), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(54), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(8), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(43), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [249] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(57), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(10), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [278] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(65), 7,
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
  [307] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_do,
    ACTIONS(71), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(59), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [336] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(8), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [375] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_do,
    ACTIONS(79), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(50), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [404] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(85), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(17), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [433] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(6), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [472] = 4,
    ACTIONS(93), 1,
      sym_single_field_variable,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(16), 14,
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
  [499] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_else,
    ACTIONS(65), 7,
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
  [528] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_else,
    ACTIONS(65), 7,
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
  [557] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_do,
    ACTIONS(109), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(108), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [586] = 4,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 2,
      anon_sym_RPAREN,
      anon_sym_else,
    ACTIONS(115), 7,
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
  [613] = 5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(123), 7,
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
  [642] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(139), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(12), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
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
    STATE(89), 8,
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
    STATE(89), 8,
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
    STATE(89), 8,
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
    STATE(99), 8,
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
    STATE(89), 8,
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
    ACTIONS(105), 1,
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
    STATE(89), 8,
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
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 7,
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
  [889] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(68), 8,
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
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 7,
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
  [941] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [967] = 4,
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
    STATE(89), 8,
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
    STATE(84), 8,
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
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1045] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(67), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1071] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(36), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1097] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1123] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(80), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1149] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_EQ_GT,
    STATE(83), 14,
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
  [1175] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_EQ_GT,
    STATE(16), 14,
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
  [1201] = 4,
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
    STATE(89), 8,
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
    ACTIONS(183), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(43), 8,
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
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1279] = 4,
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
    STATE(89), 8,
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
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(46), 8,
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
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1357] = 4,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1383] = 4,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1409] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(49), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1435] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1461] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(16), 14,
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
  [1487] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 7,
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
  [1513] = 4,
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
    STATE(89), 8,
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
    STATE(89), 8,
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
    STATE(91), 8,
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
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1617] = 4,
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
    STATE(89), 8,
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
    STATE(89), 8,
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
    STATE(56), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1695] = 4,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1721] = 4,
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
    STATE(60), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1747] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 7,
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
  [1773] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_EQ_GT,
    STATE(107), 14,
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
  [1799] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_EQ_GT,
    STATE(16), 14,
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
  [1825] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1851] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1877] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(100), 8,
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
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(78), 8,
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
    STATE(25), 8,
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
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [1981] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 7,
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
  [2007] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2033] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(55), 8,
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
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 7,
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
    ACTIONS(251), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(33), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2111] = 4,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2137] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(34), 8,
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
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2189] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2215] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(87), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2241] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_EQ_GT,
    STATE(16), 14,
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
  [2267] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2293] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 7,
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
  [2319] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 7,
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
  [2345] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2371] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 7,
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
  [2397] = 4,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 7,
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
  [2423] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 7,
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
  [2449] = 4,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2475] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(16), 14,
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
  [2501] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 7,
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
  [2527] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(16), 14,
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
  [2553] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(16), 14,
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
  [2579] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(16), 14,
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
    STATE(72), 8,
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
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2657] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2683] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
    STATE(89), 8,
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
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(103), 8,
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
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2787] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 7,
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
  [2813] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(62), 8,
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
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2865] = 4,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_EQ_GT,
    STATE(16), 14,
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
  [2891] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 7,
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
  [2917] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 7,
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
  [2943] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(94), 14,
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
  [2966] = 9,
    ACTIONS(335), 1,
      anon_sym_TILDE,
    STATE(314), 1,
      sym__constant,
    STATE(318), 1,
      sym_single_constraint,
    STATE(320), 1,
      sym_term,
    STATE(389), 1,
      sym_connected_constraint,
    STATE(420), 1,
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
  [3001] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(92), 14,
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
  [3024] = 4,
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
  [3049] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
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
  [3072] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(53), 14,
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
    ACTIONS(177), 1,
      anon_sym_LPAREN,
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
  [3118] = 3,
    ACTIONS(21), 1,
      sym_single_field_variable,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(428), 13,
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
  [3140] = 3,
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
    STATE(371), 7,
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
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(115), 13,
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
    STATE(426), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3206] = 3,
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
    STATE(113), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3228] = 5,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      sym__ws,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(122), 10,
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
  [3253] = 1,
    ACTIONS(362), 14,
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
  [3270] = 4,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(128), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(364), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3293] = 14,
    ACTIONS(370), 1,
      anon_sym_default,
    ACTIONS(372), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(374), 1,
      anon_sym_type,
    ACTIONS(376), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(378), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(380), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(382), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(384), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(386), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(388), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(390), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(392), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(394), 1,
      anon_sym_range,
    ACTIONS(396), 1,
      anon_sym_cardinality,
  [3336] = 4,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(128), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(364), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3359] = 5,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(172), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
    ACTIONS(400), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3384] = 4,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(128), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(404), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3407] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      sym__ws,
    ACTIONS(416), 1,
      sym_comment,
    STATE(122), 10,
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
  [3432] = 2,
    ACTIONS(420), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(418), 12,
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
  [3451] = 1,
    ACTIONS(422), 14,
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
  [3468] = 1,
    ACTIONS(424), 14,
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
  [3485] = 1,
    ACTIONS(426), 14,
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
  [3502] = 1,
    ACTIONS(428), 14,
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
  [3519] = 1,
    ACTIONS(430), 14,
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
  [3536] = 3,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(124), 5,
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
  [3556] = 7,
    ACTIONS(335), 1,
      anon_sym_TILDE,
    STATE(314), 1,
      sym__constant,
    STATE(318), 1,
      sym_single_constraint,
    STATE(320), 1,
      sym_term,
    STATE(392), 1,
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
  [3584] = 7,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(130), 1,
      sym_single_constraint,
    STATE(132), 1,
      sym__constant,
    STATE(133), 1,
      sym_term,
    STATE(141), 1,
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
  [3627] = 2,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 11,
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
  [3644] = 1,
    ACTIONS(441), 12,
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
  [3706] = 1,
    ACTIONS(467), 10,
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
  [3719] = 3,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
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
  [3736] = 3,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(158), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3753] = 3,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
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
  [3770] = 1,
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
  [3783] = 1,
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
      anon_sym_else,
  [3796] = 10,
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
  [3827] = 1,
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
  [3840] = 1,
    ACTIONS(486), 10,
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
  [3853] = 1,
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
  [3866] = 1,
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
      anon_sym_else,
  [3879] = 1,
    ACTIONS(492), 10,
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
  [3892] = 4,
    STATE(314), 1,
      sym__constant,
    STATE(330), 1,
      sym_term,
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
  [3911] = 3,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(147), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3928] = 3,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
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
  [3945] = 1,
    ACTIONS(428), 10,
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
  [3958] = 1,
    ACTIONS(430), 10,
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
  [3971] = 1,
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
  [3984] = 4,
    STATE(123), 1,
      sym_term,
    STATE(132), 1,
      sym__constant,
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
  [4003] = 1,
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
  [4039] = 1,
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
  [4051] = 1,
    ACTIONS(430), 9,
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
    ACTIONS(486), 9,
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
    ACTIONS(428), 9,
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
  [4099] = 1,
    ACTIONS(490), 9,
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
    ACTIONS(482), 9,
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
    STATE(401), 1,
      sym_value_list,
    STATE(177), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(505), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4154] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_wildcard_parameter_restriction,
    STATE(180), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4174] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_wildcard_parameter_restriction,
    STATE(206), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4194] = 3,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(519), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4208] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4228] = 4,
    ACTIONS(525), 1,
      sym_str_lit,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(210), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4244] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_wildcard_parameter_restriction,
    STATE(206), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4264] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_wildcard_parameter_restriction,
    STATE(189), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4284] = 4,
    ACTIONS(535), 1,
      sym_str_lit,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(207), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4300] = 7,
    ACTIONS(541), 1,
      anon_sym_deffacts,
    ACTIONS(543), 1,
      anon_sym_deftemplate,
    ACTIONS(545), 1,
      anon_sym_defrule,
    ACTIONS(547), 1,
      anon_sym_defglobal,
    ACTIONS(549), 1,
      anon_sym_deffunction,
    ACTIONS(551), 1,
      anon_sym_defgeneric,
    ACTIONS(553), 1,
      anon_sym_defmethod,
  [4322] = 3,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(555), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4336] = 7,
    ACTIONS(560), 1,
      sym_symbol,
    ACTIONS(562), 1,
      sym_global_variable,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_symbol_list_repeat1,
    STATE(435), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4358] = 7,
    ACTIONS(562), 1,
      sym_global_variable,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      sym_symbol,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_symbol_list_repeat1,
    STATE(439), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4380] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_wildcard_parameter_restriction,
    STATE(206), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4400] = 7,
    ACTIONS(562), 1,
      sym_global_variable,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      sym_symbol,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_symbol_list_repeat1,
    STATE(393), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4422] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_wildcard_parameter_restriction,
    STATE(206), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4442] = 7,
    ACTIONS(562), 1,
      sym_global_variable,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      sym_symbol,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_symbol_list_repeat1,
    STATE(407), 1,
      sym_query,
    STATE(441), 1,
      sym_function_call,
  [4464] = 6,
    ACTIONS(509), 1,
      sym_single_field_variable,
    ACTIONS(511), 1,
      sym_multifield_variable,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      sym_wildcard_parameter_restriction,
    STATE(176), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4484] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(451), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(584), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4497] = 3,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(200), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4510] = 3,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(194), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4523] = 3,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4536] = 3,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(197), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4549] = 3,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(205), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4562] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4575] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(448), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(608), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4588] = 3,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(194), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4601] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(198), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4614] = 4,
    ACTIONS(616), 1,
      anon_sym_QMARKVARIABLE,
    STATE(401), 1,
      sym_lexeme_list,
    ACTIONS(614), 2,
      sym_str_lit,
      sym_symbol,
    STATE(215), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4629] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4642] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4655] = 3,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(205), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4668] = 4,
    ACTIONS(627), 1,
      sym_single_field_variable,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(206), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4683] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4696] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4709] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(453), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(639), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4722] = 3,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(194), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4735] = 2,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(302), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4745] = 5,
    ACTIONS(645), 1,
      sym_single_field_variable,
    ACTIONS(647), 1,
      sym_multifield_variable,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_parameter_list_repeat1,
    STATE(404), 1,
      sym_parameter_list,
  [4761] = 1,
    ACTIONS(651), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4769] = 5,
    ACTIONS(645), 1,
      sym_single_field_variable,
    ACTIONS(647), 1,
      sym_multifield_variable,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_parameter_list_repeat1,
    STATE(429), 1,
      sym_parameter_list,
  [4785] = 3,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 2,
      sym_str_lit,
      sym_symbol,
    STATE(219), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4797] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(208), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4807] = 4,
    ACTIONS(659), 1,
      sym_variable_symbol,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(240), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4821] = 3,
    ACTIONS(665), 1,
      sym_symbol,
    STATE(218), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(668), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4833] = 3,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 2,
      sym_str_lit,
      sym_symbol,
    STATE(219), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4845] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(203), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4855] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(204), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4865] = 1,
    ACTIONS(675), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4873] = 2,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(679), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4882] = 2,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(683), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4891] = 1,
    ACTIONS(685), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4898] = 1,
    ACTIONS(687), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4905] = 3,
    ACTIONS(689), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(227), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4916] = 2,
    ACTIONS(694), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(696), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4925] = 4,
    ACTIONS(698), 1,
      sym_symbol,
    ACTIONS(700), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(702), 1,
      anon_sym_if,
    ACTIONS(704), 1,
      anon_sym_assert,
  [4938] = 2,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(708), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4947] = 2,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(712), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4956] = 2,
    ACTIONS(714), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(716), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4965] = 2,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(720), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4974] = 3,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(272), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4985] = 4,
    ACTIONS(726), 1,
      sym_symbol,
    ACTIONS(728), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(730), 1,
      anon_sym_if,
    ACTIONS(732), 1,
      anon_sym_assert,
  [4998] = 2,
    ACTIONS(734), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(736), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5007] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(256), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5018] = 2,
    ACTIONS(740), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(742), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5027] = 1,
    ACTIONS(744), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5034] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(261), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5045] = 2,
    ACTIONS(748), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(750), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5054] = 2,
    ACTIONS(752), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(754), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5063] = 2,
    ACTIONS(756), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(758), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5072] = 2,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(762), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5081] = 2,
    ACTIONS(764), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(766), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5090] = 4,
    ACTIONS(768), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(770), 1,
      sym_allowed_type,
    STATE(313), 1,
      aux_sym_type_specification_repeat1,
    STATE(395), 1,
      sym_type_specification,
  [5103] = 4,
    ACTIONS(772), 1,
      sym_symbol,
    ACTIONS(774), 1,
      anon_sym_QMARKVARIABLE,
    STATE(327), 1,
      aux_sym_symbol_list_repeat1,
    STATE(401), 1,
      sym_symbol_list,
  [5116] = 4,
    ACTIONS(776), 1,
      sym_str_lit,
    ACTIONS(778), 1,
      anon_sym_QMARKVARIABLE,
    STATE(328), 1,
      aux_sym_string_list_repeat1,
    STATE(401), 1,
      sym_string_list,
  [5129] = 4,
    ACTIONS(780), 1,
      sym_integer,
    ACTIONS(782), 1,
      anon_sym_QMARKVARIABLE,
    STATE(315), 1,
      aux_sym_integer_list_repeat1,
    STATE(401), 1,
      sym_integer_list,
  [5142] = 4,
    ACTIONS(784), 1,
      sym_float,
    ACTIONS(786), 1,
      anon_sym_QMARKVARIABLE,
    STATE(317), 1,
      aux_sym_float_list_repeat1,
    STATE(401), 1,
      sym_float_list,
  [5155] = 4,
    ACTIONS(788), 1,
      sym_number,
    ACTIONS(790), 1,
      anon_sym_QMARKVARIABLE,
    STATE(319), 1,
      aux_sym_number_list_repeat1,
    STATE(401), 1,
      sym_number_list,
  [5168] = 4,
    ACTIONS(792), 1,
      sym_variable_symbol,
    ACTIONS(794), 1,
      anon_sym_QMARKVARIABLE,
    STATE(329), 1,
      aux_sym_class_name_list_repeat1,
    STATE(401), 1,
      sym_instance_list,
  [5181] = 4,
    ACTIONS(796), 1,
      sym_variable_symbol,
    ACTIONS(798), 1,
      anon_sym_QMARKVARIABLE,
    STATE(323), 1,
      aux_sym_class_name_list_repeat1,
    STATE(401), 1,
      sym_class_name_list,
  [5194] = 3,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(269), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5205] = 2,
    ACTIONS(804), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(806), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5214] = 3,
    ACTIONS(661), 1,
      sym_global_variable,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(261), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5225] = 2,
    ACTIONS(810), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(812), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5234] = 2,
    ACTIONS(814), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(816), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5243] = 2,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(820), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5252] = 1,
    ACTIONS(822), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5259] = 3,
    ACTIONS(824), 1,
      sym_global_variable,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    STATE(261), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5270] = 1,
    ACTIONS(829), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5277] = 1,
    ACTIONS(831), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5284] = 2,
    ACTIONS(833), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(835), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5293] = 1,
    ACTIONS(837), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5300] = 2,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(841), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5309] = 1,
    ACTIONS(843), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5316] = 2,
    ACTIONS(845), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(847), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5325] = 3,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(269), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5336] = 1,
    ACTIONS(854), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5343] = 2,
    ACTIONS(856), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(858), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5352] = 3,
    ACTIONS(860), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(272), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5363] = 1,
    ACTIONS(865), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5370] = 1,
    ACTIONS(867), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5377] = 2,
    ACTIONS(869), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(871), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5386] = 2,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(875), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5395] = 2,
    ACTIONS(877), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(879), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5404] = 2,
    ACTIONS(881), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(883), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5413] = 2,
    ACTIONS(885), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(887), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5422] = 2,
    ACTIONS(889), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(891), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5431] = 3,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(234), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5442] = 3,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(227), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5453] = 2,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(901), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5462] = 3,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(282), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5473] = 4,
    ACTIONS(905), 1,
      sym_symbol,
    ACTIONS(907), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(909), 1,
      anon_sym_if,
    ACTIONS(911), 1,
      anon_sym_assert,
  [5486] = 2,
    ACTIONS(913), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(915), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5495] = 2,
    ACTIONS(917), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(919), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5504] = 2,
    ACTIONS(921), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(923), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5513] = 2,
    ACTIONS(925), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(927), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5522] = 1,
    ACTIONS(929), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5529] = 1,
    ACTIONS(931), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5536] = 4,
    ACTIONS(933), 1,
      sym_single_field_variable,
    ACTIONS(935), 1,
      sym_multifield_variable,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_parameter_list_repeat1,
  [5549] = 1,
    ACTIONS(939), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5556] = 1,
    ACTIONS(941), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5563] = 2,
    ACTIONS(943), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(945), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5572] = 1,
    ACTIONS(947), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5579] = 2,
    ACTIONS(949), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(951), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5588] = 3,
    ACTIONS(953), 1,
      sym_single_field_variable,
    STATE(298), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(956), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [5599] = 2,
    ACTIONS(958), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(960), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5608] = 2,
    ACTIONS(962), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(964), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5617] = 1,
    ACTIONS(966), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5624] = 1,
    ACTIONS(968), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5631] = 1,
    ACTIONS(970), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5638] = 2,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(974), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5647] = 2,
    ACTIONS(976), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(978), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5656] = 2,
    ACTIONS(980), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(982), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5665] = 2,
    ACTIONS(984), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(986), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5674] = 2,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(990), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5683] = 2,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(994), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5692] = 2,
    ACTIONS(996), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(998), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5701] = 2,
    STATE(423), 1,
      sym_range_specification,
    ACTIONS(1000), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5709] = 1,
    ACTIONS(1002), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5715] = 3,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    ACTIONS(1006), 1,
      sym_allowed_type,
    STATE(333), 1,
      aux_sym_type_specification_repeat1,
  [5725] = 1,
    ACTIONS(1008), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5731] = 3,
    ACTIONS(1010), 1,
      sym_integer,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_integer_list_repeat1,
  [5741] = 3,
    ACTIONS(443), 1,
      sym_symbol,
    ACTIONS(445), 1,
      sym_variable_symbol,
    ACTIONS(463), 1,
      anon_sym_object,
  [5751] = 3,
    ACTIONS(1014), 1,
      sym_float,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_float_list_repeat1,
  [5761] = 2,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(1020), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5769] = 3,
    ACTIONS(1022), 1,
      sym_number,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_number_list_repeat1,
  [5779] = 1,
    ACTIONS(1026), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5785] = 2,
    STATE(421), 1,
      sym_cardinality_specification,
    ACTIONS(1028), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5793] = 3,
    ACTIONS(1030), 1,
      sym_variable_symbol,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_class_name_list_repeat1,
  [5803] = 3,
    ACTIONS(1035), 1,
      sym_variable_symbol,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_class_name_list_repeat1,
  [5813] = 3,
    ACTIONS(1039), 1,
      sym_number,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_number_list_repeat1,
  [5823] = 3,
    ACTIONS(1044), 1,
      sym_float,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_float_list_repeat1,
  [5833] = 1,
    ACTIONS(1049), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5839] = 3,
    ACTIONS(1051), 1,
      sym_symbol,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      aux_sym_symbol_list_repeat1,
  [5849] = 3,
    ACTIONS(1055), 1,
      sym_str_lit,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_string_list_repeat1,
  [5859] = 3,
    ACTIONS(1035), 1,
      sym_variable_symbol,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_class_name_list_repeat1,
  [5869] = 1,
    ACTIONS(1061), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5875] = 3,
    ACTIONS(1063), 1,
      sym_integer,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_integer_list_repeat1,
  [5885] = 3,
    ACTIONS(1068), 1,
      sym_str_lit,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_string_list_repeat1,
  [5895] = 3,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(1075), 1,
      sym_allowed_type,
    STATE(333), 1,
      aux_sym_type_specification_repeat1,
  [5905] = 1,
    ACTIONS(1078), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5911] = 3,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(1080), 1,
      sym_symbol,
    STATE(335), 1,
      aux_sym_symbol_list_repeat1,
  [5921] = 3,
    ACTIONS(1083), 1,
      sym_integer,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_range_spec,
  [5931] = 2,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(254), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5939] = 1,
    ACTIONS(1087), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [5945] = 2,
    ACTIONS(1089), 1,
      sym_variable_symbol,
    ACTIONS(1091), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [5953] = 2,
    STATE(321), 1,
      sym_cardinality_specification,
    ACTIONS(1028), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5961] = 2,
    STATE(311), 1,
      sym_range_specification,
    ACTIONS(1000), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5969] = 3,
    ACTIONS(1093), 1,
      sym_str_lit,
    ACTIONS(1095), 1,
      sym_integer,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
  [5979] = 3,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_integer,
    STATE(13), 1,
      sym_range_spec,
  [5989] = 3,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    ACTIONS(1101), 1,
      sym_integer,
    STATE(19), 1,
      sym_range_spec,
  [5999] = 1,
    ACTIONS(1103), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6004] = 1,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6009] = 2,
    ACTIONS(1107), 1,
      sym_str_lit,
    ACTIONS(1109), 1,
      anon_sym_LPAREN,
  [6016] = 2,
    ACTIONS(1111), 1,
      anon_sym_salience,
    ACTIONS(1113), 1,
      anon_sym_auto_DASHfocus,
  [6023] = 2,
    ACTIONS(1115), 1,
      sym_str_lit,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [6030] = 2,
    ACTIONS(1119), 1,
      sym_symbol,
    ACTIONS(1121), 1,
      sym_variable_symbol,
  [6037] = 2,
    ACTIONS(1123), 1,
      anon_sym_slot,
    ACTIONS(1125), 1,
      anon_sym_multislot,
  [6044] = 1,
    ACTIONS(1127), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6049] = 1,
    ACTIONS(1129), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6054] = 1,
    ACTIONS(1131), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6059] = 1,
    ACTIONS(1133), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6064] = 1,
    ACTIONS(1135), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6069] = 1,
    ACTIONS(1137), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6074] = 1,
    ACTIONS(1139), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6079] = 1,
    ACTIONS(1141), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6084] = 1,
    ACTIONS(1143), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6089] = 1,
    ACTIONS(1145), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6094] = 2,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_function_call,
  [6101] = 1,
    ACTIONS(1149), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6106] = 2,
    ACTIONS(1151), 1,
      sym_str_lit,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
  [6113] = 1,
    ACTIONS(1155), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6118] = 2,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_function_call,
  [6125] = 1,
    ACTIONS(1157), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6130] = 1,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6135] = 1,
    ACTIONS(1161), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6140] = 2,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(432), 1,
      sym_function_call,
  [6147] = 1,
    ACTIONS(1163), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6152] = 1,
    ACTIONS(1165), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6157] = 1,
    ACTIONS(1167), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6162] = 1,
    ACTIONS(1169), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6167] = 1,
    ACTIONS(1171), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6172] = 1,
    ACTIONS(1173), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6177] = 1,
    ACTIONS(1175), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6182] = 1,
    ACTIONS(1177), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6187] = 1,
    ACTIONS(1179), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6192] = 1,
    ACTIONS(1181), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6197] = 1,
    ACTIONS(1183), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6202] = 1,
    ACTIONS(1185), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6207] = 1,
    ACTIONS(1187), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6212] = 2,
    ACTIONS(1189), 1,
      sym_single_field_variable,
    ACTIONS(1191), 1,
      sym_multifield_variable,
  [6219] = 1,
    ACTIONS(1193), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6224] = 1,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
  [6228] = 1,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
  [6232] = 1,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
  [6236] = 1,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
  [6240] = 1,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [6244] = 1,
    ACTIONS(1203), 1,
      anon_sym_LPAREN,
  [6248] = 1,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
  [6252] = 1,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
  [6256] = 1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [6260] = 1,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
  [6264] = 1,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
  [6268] = 1,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
  [6272] = 1,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
  [6276] = 1,
    ACTIONS(1217), 1,
      sym_symbol,
  [6280] = 1,
    ACTIONS(1219), 1,
      sym_variable_symbol,
  [6284] = 1,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
  [6288] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [6292] = 1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [6296] = 1,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
  [6300] = 1,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
  [6304] = 1,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [6308] = 1,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
  [6312] = 1,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [6316] = 1,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [6320] = 1,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [6324] = 1,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
  [6328] = 1,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
  [6332] = 1,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
  [6336] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [6340] = 1,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
  [6344] = 1,
    ACTIONS(1235), 1,
      sym_variable_symbol,
  [6348] = 1,
    ACTIONS(1237), 1,
      sym_variable_symbol,
  [6352] = 1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [6356] = 1,
    ACTIONS(1239), 1,
      sym_boolean_symbol,
  [6360] = 1,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [6364] = 1,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [6368] = 1,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
  [6372] = 1,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [6376] = 1,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
  [6380] = 1,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
  [6384] = 1,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
  [6388] = 1,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [6392] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [6396] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [6400] = 1,
    ACTIONS(1261), 1,
      anon_sym_LT_DASH,
  [6404] = 1,
    ACTIONS(1263), 1,
      sym_variable_symbol,
  [6408] = 1,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [6412] = 1,
    ACTIONS(1189), 1,
      sym_single_field_variable,
  [6416] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [6420] = 1,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
  [6424] = 1,
    ACTIONS(1271), 1,
      sym_single_field_variable,
  [6428] = 1,
    ACTIONS(1273), 1,
      ts_builtin_sym_end,
  [6432] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [6436] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [6440] = 1,
    ACTIONS(1279), 1,
      anon_sym_EQ,
  [6444] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [6448] = 1,
    ACTIONS(1283), 1,
      sym_symbol,
  [6452] = 1,
    ACTIONS(1285), 1,
      sym_symbol,
  [6456] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [6460] = 1,
    ACTIONS(1289), 1,
      sym_symbol,
  [6464] = 1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [6468] = 1,
    ACTIONS(1291), 1,
      sym_symbol,
  [6472] = 1,
    ACTIONS(1293), 1,
      anon_sym_then,
  [6476] = 1,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
  [6480] = 1,
    ACTIONS(1297), 1,
      sym_symbol,
  [6484] = 1,
    ACTIONS(1299), 1,
      anon_sym_then,
  [6488] = 1,
    ACTIONS(1301), 1,
      sym_symbol,
  [6492] = 1,
    ACTIONS(1303), 1,
      anon_sym_then,
  [6496] = 1,
    ACTIONS(1305), 1,
      sym_variable_symbol,
  [6500] = 1,
    ACTIONS(1307), 1,
      sym_variable_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 586,
  [SMALL_STATE(21)] = 613,
  [SMALL_STATE(22)] = 642,
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
  [SMALL_STATE(111)] = 2966,
  [SMALL_STATE(112)] = 3001,
  [SMALL_STATE(113)] = 3024,
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
  [SMALL_STATE(124)] = 3270,
  [SMALL_STATE(125)] = 3293,
  [SMALL_STATE(126)] = 3336,
  [SMALL_STATE(127)] = 3359,
  [SMALL_STATE(128)] = 3384,
  [SMALL_STATE(129)] = 3407,
  [SMALL_STATE(130)] = 3432,
  [SMALL_STATE(131)] = 3451,
  [SMALL_STATE(132)] = 3468,
  [SMALL_STATE(133)] = 3485,
  [SMALL_STATE(134)] = 3502,
  [SMALL_STATE(135)] = 3519,
  [SMALL_STATE(136)] = 3536,
  [SMALL_STATE(137)] = 3556,
  [SMALL_STATE(138)] = 3584,
  [SMALL_STATE(139)] = 3612,
  [SMALL_STATE(140)] = 3627,
  [SMALL_STATE(141)] = 3644,
  [SMALL_STATE(142)] = 3659,
  [SMALL_STATE(143)] = 3693,
  [SMALL_STATE(144)] = 3706,
  [SMALL_STATE(145)] = 3719,
  [SMALL_STATE(146)] = 3736,
  [SMALL_STATE(147)] = 3753,
  [SMALL_STATE(148)] = 3770,
  [SMALL_STATE(149)] = 3783,
  [SMALL_STATE(150)] = 3796,
  [SMALL_STATE(151)] = 3827,
  [SMALL_STATE(152)] = 3840,
  [SMALL_STATE(153)] = 3853,
  [SMALL_STATE(154)] = 3866,
  [SMALL_STATE(155)] = 3879,
  [SMALL_STATE(156)] = 3892,
  [SMALL_STATE(157)] = 3911,
  [SMALL_STATE(158)] = 3928,
  [SMALL_STATE(159)] = 3945,
  [SMALL_STATE(160)] = 3958,
  [SMALL_STATE(161)] = 3971,
  [SMALL_STATE(162)] = 3984,
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
  [SMALL_STATE(176)] = 4174,
  [SMALL_STATE(177)] = 4194,
  [SMALL_STATE(178)] = 4208,
  [SMALL_STATE(179)] = 4228,
  [SMALL_STATE(180)] = 4244,
  [SMALL_STATE(181)] = 4264,
  [SMALL_STATE(182)] = 4284,
  [SMALL_STATE(183)] = 4300,
  [SMALL_STATE(184)] = 4322,
  [SMALL_STATE(185)] = 4336,
  [SMALL_STATE(186)] = 4358,
  [SMALL_STATE(187)] = 4380,
  [SMALL_STATE(188)] = 4400,
  [SMALL_STATE(189)] = 4422,
  [SMALL_STATE(190)] = 4442,
  [SMALL_STATE(191)] = 4464,
  [SMALL_STATE(192)] = 4484,
  [SMALL_STATE(193)] = 4497,
  [SMALL_STATE(194)] = 4510,
  [SMALL_STATE(195)] = 4523,
  [SMALL_STATE(196)] = 4536,
  [SMALL_STATE(197)] = 4549,
  [SMALL_STATE(198)] = 4562,
  [SMALL_STATE(199)] = 4575,
  [SMALL_STATE(200)] = 4588,
  [SMALL_STATE(201)] = 4601,
  [SMALL_STATE(202)] = 4614,
  [SMALL_STATE(203)] = 4629,
  [SMALL_STATE(204)] = 4642,
  [SMALL_STATE(205)] = 4655,
  [SMALL_STATE(206)] = 4668,
  [SMALL_STATE(207)] = 4683,
  [SMALL_STATE(208)] = 4696,
  [SMALL_STATE(209)] = 4709,
  [SMALL_STATE(210)] = 4722,
  [SMALL_STATE(211)] = 4735,
  [SMALL_STATE(212)] = 4745,
  [SMALL_STATE(213)] = 4761,
  [SMALL_STATE(214)] = 4769,
  [SMALL_STATE(215)] = 4785,
  [SMALL_STATE(216)] = 4797,
  [SMALL_STATE(217)] = 4807,
  [SMALL_STATE(218)] = 4821,
  [SMALL_STATE(219)] = 4833,
  [SMALL_STATE(220)] = 4845,
  [SMALL_STATE(221)] = 4855,
  [SMALL_STATE(222)] = 4865,
  [SMALL_STATE(223)] = 4873,
  [SMALL_STATE(224)] = 4882,
  [SMALL_STATE(225)] = 4891,
  [SMALL_STATE(226)] = 4898,
  [SMALL_STATE(227)] = 4905,
  [SMALL_STATE(228)] = 4916,
  [SMALL_STATE(229)] = 4925,
  [SMALL_STATE(230)] = 4938,
  [SMALL_STATE(231)] = 4947,
  [SMALL_STATE(232)] = 4956,
  [SMALL_STATE(233)] = 4965,
  [SMALL_STATE(234)] = 4974,
  [SMALL_STATE(235)] = 4985,
  [SMALL_STATE(236)] = 4998,
  [SMALL_STATE(237)] = 5007,
  [SMALL_STATE(238)] = 5018,
  [SMALL_STATE(239)] = 5027,
  [SMALL_STATE(240)] = 5034,
  [SMALL_STATE(241)] = 5045,
  [SMALL_STATE(242)] = 5054,
  [SMALL_STATE(243)] = 5063,
  [SMALL_STATE(244)] = 5072,
  [SMALL_STATE(245)] = 5081,
  [SMALL_STATE(246)] = 5090,
  [SMALL_STATE(247)] = 5103,
  [SMALL_STATE(248)] = 5116,
  [SMALL_STATE(249)] = 5129,
  [SMALL_STATE(250)] = 5142,
  [SMALL_STATE(251)] = 5155,
  [SMALL_STATE(252)] = 5168,
  [SMALL_STATE(253)] = 5181,
  [SMALL_STATE(254)] = 5194,
  [SMALL_STATE(255)] = 5205,
  [SMALL_STATE(256)] = 5214,
  [SMALL_STATE(257)] = 5225,
  [SMALL_STATE(258)] = 5234,
  [SMALL_STATE(259)] = 5243,
  [SMALL_STATE(260)] = 5252,
  [SMALL_STATE(261)] = 5259,
  [SMALL_STATE(262)] = 5270,
  [SMALL_STATE(263)] = 5277,
  [SMALL_STATE(264)] = 5284,
  [SMALL_STATE(265)] = 5293,
  [SMALL_STATE(266)] = 5300,
  [SMALL_STATE(267)] = 5309,
  [SMALL_STATE(268)] = 5316,
  [SMALL_STATE(269)] = 5325,
  [SMALL_STATE(270)] = 5336,
  [SMALL_STATE(271)] = 5343,
  [SMALL_STATE(272)] = 5352,
  [SMALL_STATE(273)] = 5363,
  [SMALL_STATE(274)] = 5370,
  [SMALL_STATE(275)] = 5377,
  [SMALL_STATE(276)] = 5386,
  [SMALL_STATE(277)] = 5395,
  [SMALL_STATE(278)] = 5404,
  [SMALL_STATE(279)] = 5413,
  [SMALL_STATE(280)] = 5422,
  [SMALL_STATE(281)] = 5431,
  [SMALL_STATE(282)] = 5442,
  [SMALL_STATE(283)] = 5453,
  [SMALL_STATE(284)] = 5462,
  [SMALL_STATE(285)] = 5473,
  [SMALL_STATE(286)] = 5486,
  [SMALL_STATE(287)] = 5495,
  [SMALL_STATE(288)] = 5504,
  [SMALL_STATE(289)] = 5513,
  [SMALL_STATE(290)] = 5522,
  [SMALL_STATE(291)] = 5529,
  [SMALL_STATE(292)] = 5536,
  [SMALL_STATE(293)] = 5549,
  [SMALL_STATE(294)] = 5556,
  [SMALL_STATE(295)] = 5563,
  [SMALL_STATE(296)] = 5572,
  [SMALL_STATE(297)] = 5579,
  [SMALL_STATE(298)] = 5588,
  [SMALL_STATE(299)] = 5599,
  [SMALL_STATE(300)] = 5608,
  [SMALL_STATE(301)] = 5617,
  [SMALL_STATE(302)] = 5624,
  [SMALL_STATE(303)] = 5631,
  [SMALL_STATE(304)] = 5638,
  [SMALL_STATE(305)] = 5647,
  [SMALL_STATE(306)] = 5656,
  [SMALL_STATE(307)] = 5665,
  [SMALL_STATE(308)] = 5674,
  [SMALL_STATE(309)] = 5683,
  [SMALL_STATE(310)] = 5692,
  [SMALL_STATE(311)] = 5701,
  [SMALL_STATE(312)] = 5709,
  [SMALL_STATE(313)] = 5715,
  [SMALL_STATE(314)] = 5725,
  [SMALL_STATE(315)] = 5731,
  [SMALL_STATE(316)] = 5741,
  [SMALL_STATE(317)] = 5751,
  [SMALL_STATE(318)] = 5761,
  [SMALL_STATE(319)] = 5769,
  [SMALL_STATE(320)] = 5779,
  [SMALL_STATE(321)] = 5785,
  [SMALL_STATE(322)] = 5793,
  [SMALL_STATE(323)] = 5803,
  [SMALL_STATE(324)] = 5813,
  [SMALL_STATE(325)] = 5823,
  [SMALL_STATE(326)] = 5833,
  [SMALL_STATE(327)] = 5839,
  [SMALL_STATE(328)] = 5849,
  [SMALL_STATE(329)] = 5859,
  [SMALL_STATE(330)] = 5869,
  [SMALL_STATE(331)] = 5875,
  [SMALL_STATE(332)] = 5885,
  [SMALL_STATE(333)] = 5895,
  [SMALL_STATE(334)] = 5905,
  [SMALL_STATE(335)] = 5911,
  [SMALL_STATE(336)] = 5921,
  [SMALL_STATE(337)] = 5931,
  [SMALL_STATE(338)] = 5939,
  [SMALL_STATE(339)] = 5945,
  [SMALL_STATE(340)] = 5953,
  [SMALL_STATE(341)] = 5961,
  [SMALL_STATE(342)] = 5969,
  [SMALL_STATE(343)] = 5979,
  [SMALL_STATE(344)] = 5989,
  [SMALL_STATE(345)] = 5999,
  [SMALL_STATE(346)] = 6004,
  [SMALL_STATE(347)] = 6009,
  [SMALL_STATE(348)] = 6016,
  [SMALL_STATE(349)] = 6023,
  [SMALL_STATE(350)] = 6030,
  [SMALL_STATE(351)] = 6037,
  [SMALL_STATE(352)] = 6044,
  [SMALL_STATE(353)] = 6049,
  [SMALL_STATE(354)] = 6054,
  [SMALL_STATE(355)] = 6059,
  [SMALL_STATE(356)] = 6064,
  [SMALL_STATE(357)] = 6069,
  [SMALL_STATE(358)] = 6074,
  [SMALL_STATE(359)] = 6079,
  [SMALL_STATE(360)] = 6084,
  [SMALL_STATE(361)] = 6089,
  [SMALL_STATE(362)] = 6094,
  [SMALL_STATE(363)] = 6101,
  [SMALL_STATE(364)] = 6106,
  [SMALL_STATE(365)] = 6113,
  [SMALL_STATE(366)] = 6118,
  [SMALL_STATE(367)] = 6125,
  [SMALL_STATE(368)] = 6130,
  [SMALL_STATE(369)] = 6135,
  [SMALL_STATE(370)] = 6140,
  [SMALL_STATE(371)] = 6147,
  [SMALL_STATE(372)] = 6152,
  [SMALL_STATE(373)] = 6157,
  [SMALL_STATE(374)] = 6162,
  [SMALL_STATE(375)] = 6167,
  [SMALL_STATE(376)] = 6172,
  [SMALL_STATE(377)] = 6177,
  [SMALL_STATE(378)] = 6182,
  [SMALL_STATE(379)] = 6187,
  [SMALL_STATE(380)] = 6192,
  [SMALL_STATE(381)] = 6197,
  [SMALL_STATE(382)] = 6202,
  [SMALL_STATE(383)] = 6207,
  [SMALL_STATE(384)] = 6212,
  [SMALL_STATE(385)] = 6219,
  [SMALL_STATE(386)] = 6224,
  [SMALL_STATE(387)] = 6228,
  [SMALL_STATE(388)] = 6232,
  [SMALL_STATE(389)] = 6236,
  [SMALL_STATE(390)] = 6240,
  [SMALL_STATE(391)] = 6244,
  [SMALL_STATE(392)] = 6248,
  [SMALL_STATE(393)] = 6252,
  [SMALL_STATE(394)] = 6256,
  [SMALL_STATE(395)] = 6260,
  [SMALL_STATE(396)] = 6264,
  [SMALL_STATE(397)] = 6268,
  [SMALL_STATE(398)] = 6272,
  [SMALL_STATE(399)] = 6276,
  [SMALL_STATE(400)] = 6280,
  [SMALL_STATE(401)] = 6284,
  [SMALL_STATE(402)] = 6288,
  [SMALL_STATE(403)] = 6292,
  [SMALL_STATE(404)] = 6296,
  [SMALL_STATE(405)] = 6300,
  [SMALL_STATE(406)] = 6304,
  [SMALL_STATE(407)] = 6308,
  [SMALL_STATE(408)] = 6312,
  [SMALL_STATE(409)] = 6316,
  [SMALL_STATE(410)] = 6320,
  [SMALL_STATE(411)] = 6324,
  [SMALL_STATE(412)] = 6328,
  [SMALL_STATE(413)] = 6332,
  [SMALL_STATE(414)] = 6336,
  [SMALL_STATE(415)] = 6340,
  [SMALL_STATE(416)] = 6344,
  [SMALL_STATE(417)] = 6348,
  [SMALL_STATE(418)] = 6352,
  [SMALL_STATE(419)] = 6356,
  [SMALL_STATE(420)] = 6360,
  [SMALL_STATE(421)] = 6364,
  [SMALL_STATE(422)] = 6368,
  [SMALL_STATE(423)] = 6372,
  [SMALL_STATE(424)] = 6376,
  [SMALL_STATE(425)] = 6380,
  [SMALL_STATE(426)] = 6384,
  [SMALL_STATE(427)] = 6388,
  [SMALL_STATE(428)] = 6392,
  [SMALL_STATE(429)] = 6396,
  [SMALL_STATE(430)] = 6400,
  [SMALL_STATE(431)] = 6404,
  [SMALL_STATE(432)] = 6408,
  [SMALL_STATE(433)] = 6412,
  [SMALL_STATE(434)] = 6416,
  [SMALL_STATE(435)] = 6420,
  [SMALL_STATE(436)] = 6424,
  [SMALL_STATE(437)] = 6428,
  [SMALL_STATE(438)] = 6432,
  [SMALL_STATE(439)] = 6436,
  [SMALL_STATE(440)] = 6440,
  [SMALL_STATE(441)] = 6444,
  [SMALL_STATE(442)] = 6448,
  [SMALL_STATE(443)] = 6452,
  [SMALL_STATE(444)] = 6456,
  [SMALL_STATE(445)] = 6460,
  [SMALL_STATE(446)] = 6464,
  [SMALL_STATE(447)] = 6468,
  [SMALL_STATE(448)] = 6472,
  [SMALL_STATE(449)] = 6476,
  [SMALL_STATE(450)] = 6480,
  [SMALL_STATE(451)] = 6484,
  [SMALL_STATE(452)] = 6488,
  [SMALL_STATE(453)] = 6492,
  [SMALL_STATE(454)] = 6496,
  [SMALL_STATE(455)] = 6500,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(132),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(139),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(162),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(362),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(430),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(150),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(229),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(89),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(285),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(128),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(399),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1), SHIFT(359),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(125),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(382),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(184),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(351),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(350),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(400),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(296),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(433),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexeme_list, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(218),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(219),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(339),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(440),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(348),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(431),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 8),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 11),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 11),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(298),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2), SHIFT_REPEAT(322),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(324),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(325),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_list, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(331),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(332),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(333),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(335),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 5),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 9),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 9),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 5),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 9),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 9),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 5),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 11),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 8),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 11),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 8),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
