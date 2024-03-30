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
#define STATE_COUNT 424
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_deffacts = 20,
  anon_sym_deftemplate = 21,
  anon_sym_slot = 22,
  anon_sym_multislot = 23,
  anon_sym_default = 24,
  anon_sym_QMARKDERIVE = 25,
  anon_sym_QMARKNONE = 26,
  anon_sym_default_DASHdynamic = 27,
  anon_sym_type = 28,
  anon_sym_QMARKVARIABLE = 29,
  sym_allowed_type = 30,
  sym_boolean_symbol = 31,
  anon_sym_allowed_DASHsymbols = 32,
  anon_sym_allowed_DASHstrings = 33,
  anon_sym_allowed_DASHlexemes = 34,
  anon_sym_allowed_DASHintegers = 35,
  anon_sym_allowed_DASHfloats = 36,
  anon_sym_allowed_DASHnumbers = 37,
  anon_sym_allowed_DASHinstance_DASHnames = 38,
  anon_sym_allowed_DASHclasses = 39,
  anon_sym_allowed_DASHvalues = 40,
  anon_sym_range = 41,
  anon_sym_cardinality = 42,
  anon_sym_defrule = 43,
  anon_sym_EQ_GT = 44,
  anon_sym_declare = 45,
  anon_sym_salience = 46,
  anon_sym_auto_DASHfocus = 47,
  anon_sym_LT_DASH = 48,
  anon_sym_not = 49,
  anon_sym_and = 50,
  anon_sym_or = 51,
  anon_sym_logical = 52,
  anon_sym_test = 53,
  anon_sym_exists = 54,
  anon_sym_forall = 55,
  anon_sym_object = 56,
  anon_sym_is_DASHa = 57,
  anon_sym_name = 58,
  anon_sym_QMARK = 59,
  anon_sym_DOLLAR_QMARK = 60,
  anon_sym_AMP = 61,
  anon_sym_PIPE = 62,
  anon_sym_TILDE = 63,
  anon_sym_COLON = 64,
  anon_sym_EQ = 65,
  anon_sym_defglobal = 66,
  anon_sym_deffunction = 67,
  anon_sym_defgeneric = 68,
  anon_sym_defmethod = 69,
  sym_program = 70,
  sym__construct = 71,
  sym__gap = 72,
  sym__expression = 73,
  sym__lexeme = 74,
  sym__constant = 75,
  sym__variable = 76,
  sym_function_call = 77,
  sym_loop_for_count = 78,
  sym_range_spec = 79,
  sym_if_then_else = 80,
  sym_assert = 81,
  sym_deffacts_construct = 82,
  sym__rhs_pattern = 83,
  sym_ordered_rhs_pattern = 84,
  sym_template_rhs_pattern = 85,
  sym__rhs_slot = 86,
  sym_single_field_rhs_slot = 87,
  sym_multifield_rhs_slot = 88,
  sym__rhs_field = 89,
  sym_deftemplate_construct = 90,
  sym__slot_definition = 91,
  sym_single_slot_definition = 92,
  sym_multislot_definition = 93,
  sym__template_attribute = 94,
  sym_default_attribute = 95,
  sym__constraint_attribute = 96,
  sym_type_attribute = 97,
  sym_type_specification = 98,
  sym_allowed_constant_attribute = 99,
  sym_symbol_list = 100,
  sym_string_list = 101,
  sym_lexeme_list = 102,
  sym_integer_list = 103,
  sym_float_list = 104,
  sym_number_list = 105,
  sym_class_name_list = 106,
  sym_instance_list = 107,
  sym_value_list = 108,
  sym_range_attribute = 109,
  sym_range_specification = 110,
  sym_cardinality_attribute = 111,
  sym_cardinality_specification = 112,
  sym_defrule_construct = 113,
  sym_declaration = 114,
  sym_rule_property = 115,
  sym__conditional_element = 116,
  sym__pattern_CE = 117,
  sym_assigned_pattern_CE = 118,
  sym_not_CE = 119,
  sym_and_CE = 120,
  sym_or_CE = 121,
  sym_logical_CE = 122,
  sym_test_CE = 123,
  sym_exists_CE = 124,
  sym_forall_CE = 125,
  sym_ordered_pattern_CE = 126,
  sym_template_pattern_CE = 127,
  sym_object_pattern_CE = 128,
  sym_attribute_constraint = 129,
  sym_lhs_slot = 130,
  sym_constraint = 131,
  sym_connected_constraint = 132,
  sym_single_constraint = 133,
  sym_term = 134,
  sym_defglobal_construct = 135,
  sym__global_assignment = 136,
  sym_deffunction_construct = 137,
  sym_parameter_list = 138,
  sym_defgeneric_construct = 139,
  sym_defmethod_construct = 140,
  sym_parameter_restriction = 141,
  sym_wildcard_parameter_restriction = 142,
  sym_query = 143,
  aux_sym_program_repeat1 = 144,
  aux_sym_function_call_repeat1 = 145,
  aux_sym_assert_repeat1 = 146,
  aux_sym_ordered_rhs_pattern_repeat1 = 147,
  aux_sym_template_rhs_pattern_repeat1 = 148,
  aux_sym_deftemplate_construct_repeat1 = 149,
  aux_sym_single_slot_definition_repeat1 = 150,
  aux_sym_type_specification_repeat1 = 151,
  aux_sym_symbol_list_repeat1 = 152,
  aux_sym_string_list_repeat1 = 153,
  aux_sym_lexeme_list_repeat1 = 154,
  aux_sym_integer_list_repeat1 = 155,
  aux_sym_float_list_repeat1 = 156,
  aux_sym_number_list_repeat1 = 157,
  aux_sym_value_list_repeat1 = 158,
  aux_sym_defrule_construct_repeat1 = 159,
  aux_sym_declaration_repeat1 = 160,
  aux_sym_ordered_pattern_CE_repeat1 = 161,
  aux_sym_template_pattern_CE_repeat1 = 162,
  aux_sym_object_pattern_CE_repeat1 = 163,
  aux_sym_defglobal_construct_repeat1 = 164,
  aux_sym_parameter_list_repeat1 = 165,
  aux_sym_defmethod_construct_repeat1 = 166,
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
  field_type = 8,
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
  [field_type] = "type",
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 8,
  [19] = 10,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 42,
  [60] = 60,
  [61] = 51,
  [62] = 62,
  [63] = 63,
  [64] = 24,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 39,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 31,
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
  [86] = 30,
  [87] = 51,
  [88] = 88,
  [89] = 28,
  [90] = 90,
  [91] = 24,
  [92] = 51,
  [93] = 20,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 24,
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
  [129] = 128,
  [130] = 130,
  [131] = 131,
  [132] = 124,
  [133] = 126,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 126,
  [145] = 124,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 151,
  [156] = 150,
  [157] = 152,
  [158] = 143,
  [159] = 148,
  [160] = 146,
  [161] = 149,
  [162] = 162,
  [163] = 163,
  [164] = 147,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
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
  [189] = 187,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 188,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 200,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
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
  [245] = 218,
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
  [297] = 116,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 296,
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
  [328] = 322,
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
  [394] = 124,
  [395] = 126,
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
  [417] = 396,
  [418] = 418,
  [419] = 419,
  [420] = 411,
  [421] = 396,
  [422] = 422,
  [423] = 423,
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
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(482);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(487);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == '[') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '|') ADVANCE(483);
      if (lookahead == '~') ADVANCE(484);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(320);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(482);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == ':') ADVANCE(486);
      if (lookahead == '=') ADVANCE(488);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == '|') ADVANCE(483);
      if (lookahead == '~') ADVANCE(484);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(402);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '&') ADVANCE(482);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == '|') ADVANCE(483);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '?') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '.') ADVANCE(400);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '?') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(417);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(415);
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
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == 'D') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(454);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(481);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(314);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(440);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(438);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(439);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(439);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(439);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(439);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(439);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'Y') ADVANCE(67);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 93:
      if (lookahead == 'X') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'X') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 't') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 't') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(104)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(239);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 171:
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(180)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 187:
      if (lookahead == 'j') ADVANCE(152);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(230)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 302:
      if (lookahead == 'y') ADVANCE(452);
      END_STATE();
    case 303:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 304:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 305:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 313:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 314:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 315:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 316:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 317:
      if (eof) ADVANCE(318);
      if (lookahead == 11) SKIP(317)
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
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
          lookahead == 'e') ADVANCE(398);
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
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
          lookahead != '~') ADVANCE(402);
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 346:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 352:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 373:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 375:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(401);
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 399:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 400:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 401:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 402:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(95);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 413:
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
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 414:
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
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(415);
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
    case 416:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 419:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 421:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 423:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 426:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 428:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 434:
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
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 435:
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
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 456:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 461:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 463:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 465:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 467:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 469:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 471:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 473:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 475:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 477:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 479:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 486:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 488:
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
          lookahead != '~') ADVANCE(402);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 317},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
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
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 2},
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
  [74] = {.lex_state = 2},
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
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 317},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 317},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 100},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 101},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 317},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 317},
  [214] = {.lex_state = 317},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 104},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 317},
  [223] = {.lex_state = 317},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 317},
  [226] = {.lex_state = 317},
  [227] = {.lex_state = 317},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 317},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 317},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 317},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 317},
  [236] = {.lex_state = 317},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 317},
  [239] = {.lex_state = 317},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 317},
  [242] = {.lex_state = 317},
  [243] = {.lex_state = 317},
  [244] = {.lex_state = 317},
  [245] = {.lex_state = 104},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 317},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 27},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 317},
  [257] = {.lex_state = 317},
  [258] = {.lex_state = 317},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 317},
  [261] = {.lex_state = 317},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 317},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 317},
  [266] = {.lex_state = 317},
  [267] = {.lex_state = 317},
  [268] = {.lex_state = 317},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 317},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 317},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 317},
  [276] = {.lex_state = 317},
  [277] = {.lex_state = 317},
  [278] = {.lex_state = 317},
  [279] = {.lex_state = 317},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 317},
  [282] = {.lex_state = 317},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 317},
  [285] = {.lex_state = 317},
  [286] = {.lex_state = 317},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 317},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 317},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 180},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 12},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 7},
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
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 230},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 12},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 12},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 12},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 12},
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
  [396] = {.lex_state = 12},
  [397] = {.lex_state = 0},
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
  [408] = {.lex_state = 12},
  [409] = {.lex_state = 12},
  [410] = {.lex_state = 12},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 12},
  [413] = {.lex_state = 12},
  [414] = {.lex_state = 12},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 12},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 12},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
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
    [sym_program] = STATE(415),
    [sym__construct] = STATE(119),
    [sym__gap] = STATE(119),
    [sym_deffacts_construct] = STATE(119),
    [sym_deftemplate_construct] = STATE(119),
    [sym_defrule_construct] = STATE(119),
    [sym_defglobal_construct] = STATE(119),
    [sym_deffunction_construct] = STATE(119),
    [sym_defgeneric_construct] = STATE(119),
    [sym_defmethod_construct] = STATE(119),
    [aux_sym_program_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(15), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(221), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [48] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(33), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    ACTIONS(25), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
    STATE(43), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [80] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(165), 1,
      sym__rhs_field,
    ACTIONS(37), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(163), 3,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(35), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(87), 5,
      sym__expression,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [116] = 6,
    ACTIONS(41), 1,
      sym_str_lit,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
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
  [148] = 11,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      anon_sym_TILDE,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(52), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(57), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(63), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(6), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(49), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [189] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(13), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [230] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      anon_sym_do,
    ACTIONS(70), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(68), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(54), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [261] = 4,
    ACTIONS(76), 1,
      sym_single_field_variable,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(9), 14,
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
  [288] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(86), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(84), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(20), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [319] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(12), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [360] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(6), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [401] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(6), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [442] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(102), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(100), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(10), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [473] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(23), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(6), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [514] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      anon_sym_else,
    ACTIONS(112), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(110), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(19), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [545] = 6,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(193), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
    STATE(114), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [576] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(128), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(126), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(57), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [607] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_else,
    ACTIONS(86), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(84), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(20), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [638] = 6,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(141), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(138), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(20), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [669] = 5,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_EQ_GT,
    STATE(23), 1,
      sym_declaration,
    STATE(62), 14,
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
  [698] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [726] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_EQ_GT,
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
  [752] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(165), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(163), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(61), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [780] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(9), 14,
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
  [806] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(171), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(85), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [834] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(177), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(84), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [862] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [890] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [918] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(187), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(28), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [946] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [974] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1002] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(195), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(29), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1030] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1058] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1086] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(203), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(71), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1114] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_EQ_GT,
    STATE(74), 14,
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
  [1140] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_EQ_GT,
    STATE(9), 14,
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
  [1166] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(211), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(31), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1194] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(9), 14,
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
  [1220] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(9), 14,
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
  [1246] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1274] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1302] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1330] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(225), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(32), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1358] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1386] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(231), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(34), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1414] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1442] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(237), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(35), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1470] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1498] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1526] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(245), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(59), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1554] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(9), 14,
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
  [1580] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1608] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(255), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(42), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1636] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1664] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1692] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(261), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(82), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1720] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1748] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(267), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(95), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1776] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1804] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_EQ_GT,
    STATE(9), 14,
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
  [1830] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1858] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(277), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(87), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1886] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(25), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(43), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1914] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(283), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(81), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1942] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1970] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(289), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(77), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1998] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(295), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(75), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2026] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(299), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(44), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2054] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2082] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2110] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(307), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(67), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2138] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_EQ_GT,
    STATE(9), 14,
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
  [2164] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2192] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(315), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(46), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2220] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2248] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(321), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(48), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2276] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(327), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(22), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2304] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(333), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(56), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2332] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2360] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2388] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(341), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(50), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2416] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2444] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2472] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(349), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(89), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2500] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2528] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(355), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(101), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2556] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2584] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(9), 14,
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
  [2610] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(365), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(92), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2638] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2666] = 5,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(373), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2694] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(382), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(63), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2722] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2750] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(390), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(98), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2778] = 4,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_EQ_GT,
    STATE(9), 14,
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
  [2804] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2832] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(396), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(51), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2860] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(402), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(72), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2888] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(153), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(93), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2916] = 3,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
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
  [2939] = 3,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(25), 14,
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
  [2962] = 3,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(90), 14,
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
  [2985] = 10,
    ACTIONS(408), 1,
      anon_sym_TILDE,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(130), 1,
      sym_connected_constraint,
    STATE(297), 1,
      sym_single_constraint,
    STATE(353), 1,
      sym_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(410), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3022] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(412), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(369), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3049] = 3,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(40), 14,
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
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(41), 14,
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
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(104), 13,
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
  [3117] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(418), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(326), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3141] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(422), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(362), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3165] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(426), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3189] = 3,
    ACTIONS(43), 1,
      sym_single_field_variable,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(393), 13,
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
  [3211] = 5,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(430), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(120), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [3236] = 2,
    ACTIONS(440), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(438), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3255] = 3,
    ACTIONS(446), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(444), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(442), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3276] = 2,
    ACTIONS(450), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(448), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3295] = 2,
    ACTIONS(454), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(452), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3314] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      sym__ws,
    ACTIONS(460), 1,
      sym_comment,
    STATE(127), 10,
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
  [3339] = 5,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(462), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(120), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [3364] = 2,
    ACTIONS(475), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(473), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3383] = 14,
    ACTIONS(477), 1,
      anon_sym_default,
    ACTIONS(479), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(481), 1,
      anon_sym_type,
    ACTIONS(483), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(485), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(487), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(489), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(491), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(493), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(495), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(497), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(499), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(501), 1,
      anon_sym_range,
    ACTIONS(503), 1,
      anon_sym_cardinality,
  [3426] = 5,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(430), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(120), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [3451] = 2,
    ACTIONS(509), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(507), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3470] = 6,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(513), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(511), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(165), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
  [3497] = 2,
    ACTIONS(519), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(517), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3516] = 5,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 1,
      sym__ws,
    ACTIONS(526), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(127), 10,
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
  [3541] = 8,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    STATE(116), 1,
      sym_single_constraint,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(131), 1,
      sym_connected_constraint,
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
  [3571] = 8,
    ACTIONS(408), 1,
      anon_sym_TILDE,
    STATE(117), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    STATE(131), 1,
      sym_connected_constraint,
    STATE(297), 1,
      sym_single_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(410), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3601] = 2,
    ACTIONS(534), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(532), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3618] = 2,
    ACTIONS(538), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(536), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3635] = 2,
    ACTIONS(507), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(509), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3651] = 2,
    ACTIONS(517), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(519), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3667] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(141), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3684] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(136), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3701] = 3,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(136), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3718] = 2,
    ACTIONS(551), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(553), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3733] = 5,
    STATE(115), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
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
  [3754] = 2,
    ACTIONS(555), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(557), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3769] = 5,
    STATE(115), 1,
      sym_term,
    STATE(121), 1,
      sym__constant,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(410), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3790] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(136), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3807] = 10,
    ACTIONS(561), 1,
      sym_symbol,
    ACTIONS(563), 1,
      anon_sym_declare,
    ACTIONS(565), 1,
      anon_sym_not,
    ACTIONS(567), 1,
      anon_sym_and,
    ACTIONS(569), 1,
      anon_sym_or,
    ACTIONS(571), 1,
      anon_sym_logical,
    ACTIONS(573), 1,
      anon_sym_test,
    ACTIONS(575), 1,
      anon_sym_exists,
    ACTIONS(577), 1,
      anon_sym_forall,
    ACTIONS(579), 1,
      anon_sym_object,
  [3838] = 2,
    ACTIONS(581), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(583), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3853] = 2,
    ACTIONS(517), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(519), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3868] = 2,
    ACTIONS(507), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(509), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3883] = 2,
    ACTIONS(585), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(587), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3898] = 2,
    ACTIONS(589), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(591), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3913] = 2,
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
  [3928] = 2,
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
  [3943] = 2,
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
  [3958] = 2,
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
  [3973] = 2,
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
  [3988] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(135), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4005] = 9,
    ACTIONS(561), 1,
      sym_symbol,
    ACTIONS(565), 1,
      anon_sym_not,
    ACTIONS(567), 1,
      anon_sym_and,
    ACTIONS(569), 1,
      anon_sym_or,
    ACTIONS(571), 1,
      anon_sym_logical,
    ACTIONS(573), 1,
      anon_sym_test,
    ACTIONS(575), 1,
      anon_sym_exists,
    ACTIONS(577), 1,
      anon_sym_forall,
    ACTIONS(579), 1,
      anon_sym_object,
  [4033] = 2,
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
  [4047] = 2,
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
  [4061] = 2,
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
  [4075] = 2,
    ACTIONS(581), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(583), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4089] = 2,
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
  [4103] = 2,
    ACTIONS(585), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(587), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4117] = 2,
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
  [4131] = 3,
    ACTIONS(615), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(509), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(507), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4147] = 2,
    ACTIONS(618), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(621), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4161] = 2,
    ACTIONS(589), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(591), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4175] = 3,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(624), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(626), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [4191] = 4,
    ACTIONS(633), 1,
      anon_sym_QMARKVARIABLE,
    STATE(381), 1,
      sym_value_list,
    STATE(182), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(631), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4208] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_wildcard_parameter_restriction,
    STATE(196), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4228] = 7,
    ACTIONS(643), 1,
      anon_sym_deffacts,
    ACTIONS(645), 1,
      anon_sym_deftemplate,
    ACTIONS(647), 1,
      anon_sym_defrule,
    ACTIONS(649), 1,
      anon_sym_defglobal,
    ACTIONS(651), 1,
      anon_sym_deffunction,
    ACTIONS(653), 1,
      anon_sym_defgeneric,
    ACTIONS(655), 1,
      anon_sym_defmethod,
  [4250] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym_wildcard_parameter_restriction,
    STATE(179), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4270] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      sym_wildcard_parameter_restriction,
    STATE(196), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4290] = 7,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_symbol,
    ACTIONS(663), 1,
      sym_global_variable,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
    STATE(385), 1,
      sym_query,
    STATE(386), 1,
      sym_function_call,
  [4312] = 7,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_symbol,
    ACTIONS(663), 1,
      sym_global_variable,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
    STATE(375), 1,
      sym_query,
    STATE(386), 1,
      sym_function_call,
  [4334] = 3,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(173), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(669), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4348] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      sym_wildcard_parameter_restriction,
    STATE(196), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4368] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_wildcard_parameter_restriction,
    STATE(167), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4388] = 4,
    ACTIONS(678), 1,
      sym_str_lit,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(197), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4404] = 7,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(663), 1,
      sym_global_variable,
    ACTIONS(684), 1,
      sym_symbol,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_symbol_list_repeat1,
    STATE(379), 1,
      sym_query,
    STATE(386), 1,
      sym_function_call,
  [4426] = 7,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(663), 1,
      sym_global_variable,
    ACTIONS(688), 1,
      sym_symbol,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_symbol_list_repeat1,
    STATE(384), 1,
      sym_query,
    STATE(386), 1,
      sym_function_call,
  [4448] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_wildcard_parameter_restriction,
    STATE(196), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4468] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_wildcard_parameter_restriction,
    STATE(170), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4488] = 4,
    ACTIONS(696), 1,
      sym_str_lit,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(194), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4504] = 3,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(173), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(702), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4518] = 6,
    ACTIONS(635), 1,
      sym_single_field_variable,
    ACTIONS(637), 1,
      sym_multifield_variable,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      sym_wildcard_parameter_restriction,
    STATE(174), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4538] = 3,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4551] = 4,
    ACTIONS(712), 1,
      anon_sym_QMARKVARIABLE,
    STATE(381), 1,
      sym_lexeme_list,
    ACTIONS(710), 2,
      sym_str_lit,
      sym_symbol,
    STATE(203), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4566] = 3,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(191), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4579] = 3,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4592] = 3,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(420), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(718), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4605] = 3,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4618] = 3,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4631] = 3,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4644] = 3,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(192), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4657] = 3,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(192), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4670] = 3,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4683] = 3,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4696] = 4,
    ACTIONS(747), 1,
      sym_single_field_variable,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(196), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4711] = 3,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4724] = 3,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(411), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(757), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4737] = 3,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(184), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4750] = 2,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    STATE(187), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4760] = 2,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    STATE(259), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4770] = 3,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 2,
      sym_str_lit,
      sym_symbol,
    STATE(202), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4782] = 3,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 2,
      sym_str_lit,
      sym_symbol,
    STATE(202), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4794] = 2,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    STATE(189), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4804] = 4,
    ACTIONS(772), 1,
      sym_symbol,
    ACTIONS(774), 1,
      sym_global_variable,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(230), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4818] = 3,
    ACTIONS(778), 1,
      sym_symbol,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(781), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4830] = 5,
    ACTIONS(783), 1,
      sym_single_field_variable,
    ACTIONS(785), 1,
      sym_multifield_variable,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
    STATE(402), 1,
      sym_parameter_list,
  [4846] = 5,
    ACTIONS(783), 1,
      sym_single_field_variable,
    ACTIONS(785), 1,
      sym_multifield_variable,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
    STATE(405), 1,
      sym_parameter_list,
  [4862] = 2,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(793), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4871] = 1,
    ACTIONS(795), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4878] = 1,
    ACTIONS(797), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4885] = 1,
    ACTIONS(799), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4892] = 2,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(803), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4901] = 2,
    ACTIONS(805), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(807), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4910] = 1,
    ACTIONS(809), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4917] = 3,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(216), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4928] = 1,
    ACTIONS(816), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4935] = 4,
    ACTIONS(818), 1,
      sym_symbol,
    ACTIONS(820), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(822), 1,
      anon_sym_if,
    ACTIONS(824), 1,
      anon_sym_assert,
  [4948] = 1,
    ACTIONS(826), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4955] = 3,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(216), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4966] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(269), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4977] = 2,
    ACTIONS(834), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(836), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4986] = 2,
    ACTIONS(838), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(840), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4995] = 3,
    ACTIONS(774), 1,
      sym_global_variable,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(283), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5006] = 2,
    ACTIONS(844), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(846), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5015] = 2,
    ACTIONS(848), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(850), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5024] = 2,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(854), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5033] = 4,
    ACTIONS(856), 1,
      sym_single_field_variable,
    ACTIONS(858), 1,
      sym_multifield_variable,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_parameter_list_repeat1,
  [5046] = 2,
    ACTIONS(862), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(864), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5055] = 3,
    ACTIONS(774), 1,
      sym_global_variable,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(287), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5066] = 2,
    ACTIONS(868), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(870), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5075] = 3,
    ACTIONS(872), 1,
      sym_single_field_variable,
    STATE(232), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(875), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [5086] = 2,
    ACTIONS(877), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(879), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5095] = 3,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(280), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5106] = 2,
    ACTIONS(885), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(887), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5115] = 2,
    ACTIONS(889), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(891), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5124] = 1,
    ACTIONS(893), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5131] = 2,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(897), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5140] = 2,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(901), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5149] = 1,
    ACTIONS(903), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5156] = 2,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(908), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5165] = 2,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(912), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5174] = 2,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(916), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5183] = 2,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(920), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5192] = 4,
    ACTIONS(922), 1,
      sym_symbol,
    ACTIONS(924), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(926), 1,
      anon_sym_if,
    ACTIONS(928), 1,
      anon_sym_assert,
  [5205] = 3,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(220), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5216] = 2,
    ACTIONS(932), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(934), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5225] = 4,
    ACTIONS(936), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(938), 1,
      sym_allowed_type,
    STATE(308), 1,
      aux_sym_type_specification_repeat1,
    STATE(357), 1,
      sym_type_specification,
  [5238] = 4,
    ACTIONS(940), 1,
      sym_symbol,
    ACTIONS(942), 1,
      anon_sym_QMARKVARIABLE,
    STATE(311), 1,
      aux_sym_symbol_list_repeat1,
    STATE(381), 1,
      sym_symbol_list,
  [5251] = 4,
    ACTIONS(944), 1,
      sym_str_lit,
    ACTIONS(946), 1,
      anon_sym_QMARKVARIABLE,
    STATE(313), 1,
      aux_sym_string_list_repeat1,
    STATE(381), 1,
      sym_string_list,
  [5264] = 4,
    ACTIONS(948), 1,
      sym_integer,
    ACTIONS(950), 1,
      anon_sym_QMARKVARIABLE,
    STATE(316), 1,
      aux_sym_integer_list_repeat1,
    STATE(381), 1,
      sym_integer_list,
  [5277] = 4,
    ACTIONS(952), 1,
      sym_float,
    ACTIONS(954), 1,
      anon_sym_QMARKVARIABLE,
    STATE(294), 1,
      aux_sym_float_list_repeat1,
    STATE(381), 1,
      sym_float_list,
  [5290] = 4,
    ACTIONS(956), 1,
      sym_number,
    ACTIONS(958), 1,
      anon_sym_QMARKVARIABLE,
    STATE(319), 1,
      aux_sym_number_list_repeat1,
    STATE(381), 1,
      sym_number_list,
  [5303] = 4,
    ACTIONS(960), 1,
      sym_symbol,
    ACTIONS(962), 1,
      anon_sym_QMARKVARIABLE,
    STATE(318), 1,
      aux_sym_symbol_list_repeat1,
    STATE(381), 1,
      sym_instance_list,
  [5316] = 4,
    ACTIONS(964), 1,
      sym_symbol,
    ACTIONS(966), 1,
      anon_sym_QMARKVARIABLE,
    STATE(317), 1,
      aux_sym_symbol_list_repeat1,
    STATE(381), 1,
      sym_class_name_list,
  [5329] = 2,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(970), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5338] = 2,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(974), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5347] = 2,
    ACTIONS(976), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(978), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5356] = 1,
    ACTIONS(980), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5363] = 2,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(984), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5372] = 2,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(988), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5381] = 1,
    ACTIONS(990), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5388] = 2,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(994), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5397] = 1,
    ACTIONS(996), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5404] = 2,
    ACTIONS(998), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1000), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5413] = 2,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1004), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5422] = 2,
    ACTIONS(1006), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1008), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5431] = 2,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1012), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5440] = 3,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(269), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5451] = 2,
    ACTIONS(1019), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1021), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5460] = 1,
    ACTIONS(1023), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5467] = 2,
    ACTIONS(1025), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1027), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5476] = 1,
    ACTIONS(1029), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5483] = 1,
    ACTIONS(1031), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5490] = 2,
    ACTIONS(1033), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1035), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5499] = 2,
    ACTIONS(1037), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1039), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5508] = 2,
    ACTIONS(1041), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1043), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5517] = 2,
    ACTIONS(1045), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1047), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5526] = 2,
    ACTIONS(1049), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1051), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5535] = 3,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(280), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5546] = 2,
    ACTIONS(1058), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1060), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5555] = 2,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1064), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5564] = 3,
    ACTIONS(774), 1,
      sym_global_variable,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(287), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5575] = 2,
    ACTIONS(1068), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1070), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5584] = 2,
    ACTIONS(1072), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1074), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5593] = 2,
    ACTIONS(1076), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1078), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5602] = 3,
    ACTIONS(1080), 1,
      sym_global_variable,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(287), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5613] = 1,
    ACTIONS(1085), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5620] = 1,
    ACTIONS(1087), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5627] = 1,
    ACTIONS(1089), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5634] = 2,
    ACTIONS(1091), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1093), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5643] = 1,
    ACTIONS(1095), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5650] = 2,
    ACTIONS(1097), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1099), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5659] = 3,
    ACTIONS(1101), 1,
      sym_float,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_float_list_repeat1,
  [5669] = 3,
    ACTIONS(1105), 1,
      sym_float,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_float_list_repeat1,
  [5679] = 3,
    ACTIONS(1110), 1,
      sym_integer,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_range_spec,
  [5689] = 2,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5697] = 3,
    ACTIONS(1116), 1,
      sym_str_lit,
    ACTIONS(1118), 1,
      sym_integer,
    ACTIONS(1120), 1,
      anon_sym_LPAREN,
  [5707] = 2,
    STATE(314), 1,
      sym_range_specification,
    ACTIONS(1122), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5715] = 2,
    STATE(310), 1,
      sym_cardinality_specification,
    ACTIONS(1124), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5723] = 3,
    ACTIONS(1126), 1,
      sym_number,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_number_list_repeat1,
  [5733] = 3,
    ACTIONS(1131), 1,
      sym_integer,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_integer_list_repeat1,
  [5743] = 2,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    STATE(234), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5751] = 3,
    ACTIONS(1136), 1,
      sym_str_lit,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_string_list_repeat1,
  [5761] = 3,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1141), 1,
      sym_integer,
    STATE(8), 1,
      sym_range_spec,
  [5771] = 3,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      sym_allowed_type,
    STATE(306), 1,
      aux_sym_type_specification_repeat1,
  [5781] = 2,
    ACTIONS(1148), 1,
      sym_symbol,
    ACTIONS(1150), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [5789] = 3,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 1,
      sym_allowed_type,
    STATE(306), 1,
      aux_sym_type_specification_repeat1,
  [5799] = 1,
    ACTIONS(1156), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [5805] = 2,
    STATE(368), 1,
      sym_cardinality_specification,
    ACTIONS(1124), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5813] = 3,
    ACTIONS(661), 1,
      sym_symbol,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
  [5823] = 1,
    ACTIONS(1160), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5829] = 3,
    ACTIONS(1162), 1,
      sym_str_lit,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_string_list_repeat1,
  [5839] = 2,
    STATE(367), 1,
      sym_range_specification,
    ACTIONS(1122), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5847] = 1,
    ACTIONS(1166), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5853] = 3,
    ACTIONS(1168), 1,
      sym_integer,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_integer_list_repeat1,
  [5863] = 3,
    ACTIONS(661), 1,
      sym_symbol,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
  [5873] = 3,
    ACTIONS(661), 1,
      sym_symbol,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_symbol_list_repeat1,
  [5883] = 3,
    ACTIONS(1176), 1,
      sym_number,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_number_list_repeat1,
  [5893] = 1,
    ACTIONS(1180), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5898] = 2,
    ACTIONS(1182), 1,
      sym_single_field_variable,
    ACTIONS(1184), 1,
      sym_multifield_variable,
  [5905] = 2,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_function_call,
  [5912] = 2,
    ACTIONS(1186), 1,
      sym_str_lit,
    ACTIONS(1188), 1,
      anon_sym_LPAREN,
  [5919] = 2,
    ACTIONS(1190), 1,
      sym_str_lit,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
  [5926] = 1,
    ACTIONS(1194), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5931] = 1,
    ACTIONS(1196), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5936] = 2,
    ACTIONS(1198), 1,
      anon_sym_salience,
    ACTIONS(1200), 1,
      anon_sym_auto_DASHfocus,
  [5943] = 2,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_function_call,
  [5950] = 1,
    ACTIONS(1204), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5955] = 1,
    ACTIONS(1206), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5960] = 1,
    ACTIONS(1208), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5965] = 1,
    ACTIONS(1210), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5970] = 1,
    ACTIONS(1212), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5975] = 1,
    ACTIONS(1214), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5980] = 1,
    ACTIONS(1216), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5985] = 2,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_function_call,
  [5992] = 1,
    ACTIONS(1218), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5997] = 1,
    ACTIONS(1220), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6002] = 1,
    ACTIONS(1222), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6007] = 2,
    ACTIONS(1224), 1,
      sym_str_lit,
    ACTIONS(1226), 1,
      anon_sym_LPAREN,
  [6014] = 1,
    ACTIONS(1228), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6019] = 1,
    ACTIONS(1230), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6024] = 1,
    ACTIONS(1232), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6029] = 2,
    ACTIONS(1234), 1,
      anon_sym_slot,
    ACTIONS(1236), 1,
      anon_sym_multislot,
  [6036] = 1,
    ACTIONS(1238), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6041] = 1,
    ACTIONS(1240), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6046] = 1,
    ACTIONS(1242), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6051] = 2,
    ACTIONS(561), 1,
      sym_symbol,
    ACTIONS(579), 1,
      anon_sym_object,
  [6058] = 1,
    ACTIONS(1244), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6063] = 1,
    ACTIONS(1246), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6068] = 1,
    ACTIONS(1248), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6073] = 1,
    ACTIONS(1250), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6078] = 1,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [6082] = 1,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [6086] = 1,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
  [6090] = 1,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
  [6094] = 1,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
  [6098] = 1,
    ACTIONS(1258), 1,
      sym_symbol,
  [6102] = 1,
    ACTIONS(1260), 1,
      sym_symbol,
  [6106] = 1,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
  [6110] = 1,
    ACTIONS(1262), 1,
      anon_sym_LT_DASH,
  [6114] = 1,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
  [6118] = 1,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
  [6122] = 1,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [6126] = 1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [6130] = 1,
    ACTIONS(1268), 1,
      sym_symbol,
  [6134] = 1,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [6138] = 1,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
  [6142] = 1,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
  [6146] = 1,
    ACTIONS(1276), 1,
      sym_symbol,
  [6150] = 1,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
  [6154] = 1,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
  [6158] = 1,
    ACTIONS(424), 1,
      sym_boolean_symbol,
  [6162] = 1,
    ACTIONS(1280), 1,
      anon_sym_LPAREN,
  [6166] = 1,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
  [6170] = 1,
    ACTIONS(1284), 1,
      sym_symbol,
  [6174] = 1,
    ACTIONS(1182), 1,
      sym_single_field_variable,
  [6178] = 1,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [6182] = 1,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
  [6186] = 1,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [6190] = 1,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [6194] = 1,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [6198] = 1,
    ACTIONS(1294), 1,
      sym_symbol,
  [6202] = 1,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [6206] = 1,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [6210] = 1,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [6214] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [6218] = 1,
    ACTIONS(1302), 1,
      anon_sym_LPAREN,
  [6222] = 1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [6226] = 1,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [6230] = 1,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [6234] = 1,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [6238] = 1,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [6242] = 1,
    ACTIONS(509), 1,
      anon_sym_then,
  [6246] = 1,
    ACTIONS(519), 1,
      anon_sym_then,
  [6250] = 1,
    ACTIONS(1310), 1,
      sym_symbol,
  [6254] = 1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [6258] = 1,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [6262] = 1,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
  [6266] = 1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [6270] = 1,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [6274] = 1,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [6278] = 1,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [6282] = 1,
    ACTIONS(1318), 1,
      anon_sym_EQ,
  [6286] = 1,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [6290] = 1,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [6294] = 1,
    ACTIONS(1324), 1,
      anon_sym_LPAREN,
  [6298] = 1,
    ACTIONS(1326), 1,
      sym_symbol,
  [6302] = 1,
    ACTIONS(1328), 1,
      sym_symbol,
  [6306] = 1,
    ACTIONS(1330), 1,
      sym_symbol,
  [6310] = 1,
    ACTIONS(1332), 1,
      anon_sym_then,
  [6314] = 1,
    ACTIONS(1334), 1,
      sym_symbol,
  [6318] = 1,
    ACTIONS(1336), 1,
      sym_symbol,
  [6322] = 1,
    ACTIONS(1338), 1,
      sym_symbol,
  [6326] = 1,
    ACTIONS(1340), 1,
      ts_builtin_sym_end,
  [6330] = 1,
    ACTIONS(1342), 1,
      sym_single_field_variable,
  [6334] = 1,
    ACTIONS(1344), 1,
      sym_symbol,
  [6338] = 1,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [6342] = 1,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
  [6346] = 1,
    ACTIONS(1350), 1,
      anon_sym_then,
  [6350] = 1,
    ACTIONS(1352), 1,
      sym_symbol,
  [6354] = 1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [6358] = 1,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 607,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 669,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 726,
  [SMALL_STATE(24)] = 752,
  [SMALL_STATE(25)] = 780,
  [SMALL_STATE(26)] = 806,
  [SMALL_STATE(27)] = 834,
  [SMALL_STATE(28)] = 862,
  [SMALL_STATE(29)] = 890,
  [SMALL_STATE(30)] = 918,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 974,
  [SMALL_STATE(33)] = 1002,
  [SMALL_STATE(34)] = 1030,
  [SMALL_STATE(35)] = 1058,
  [SMALL_STATE(36)] = 1086,
  [SMALL_STATE(37)] = 1114,
  [SMALL_STATE(38)] = 1140,
  [SMALL_STATE(39)] = 1166,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1220,
  [SMALL_STATE(42)] = 1246,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1302,
  [SMALL_STATE(45)] = 1330,
  [SMALL_STATE(46)] = 1358,
  [SMALL_STATE(47)] = 1386,
  [SMALL_STATE(48)] = 1414,
  [SMALL_STATE(49)] = 1442,
  [SMALL_STATE(50)] = 1470,
  [SMALL_STATE(51)] = 1498,
  [SMALL_STATE(52)] = 1526,
  [SMALL_STATE(53)] = 1554,
  [SMALL_STATE(54)] = 1580,
  [SMALL_STATE(55)] = 1608,
  [SMALL_STATE(56)] = 1636,
  [SMALL_STATE(57)] = 1664,
  [SMALL_STATE(58)] = 1692,
  [SMALL_STATE(59)] = 1720,
  [SMALL_STATE(60)] = 1748,
  [SMALL_STATE(61)] = 1776,
  [SMALL_STATE(62)] = 1804,
  [SMALL_STATE(63)] = 1830,
  [SMALL_STATE(64)] = 1858,
  [SMALL_STATE(65)] = 1886,
  [SMALL_STATE(66)] = 1914,
  [SMALL_STATE(67)] = 1942,
  [SMALL_STATE(68)] = 1970,
  [SMALL_STATE(69)] = 1998,
  [SMALL_STATE(70)] = 2026,
  [SMALL_STATE(71)] = 2054,
  [SMALL_STATE(72)] = 2082,
  [SMALL_STATE(73)] = 2110,
  [SMALL_STATE(74)] = 2138,
  [SMALL_STATE(75)] = 2164,
  [SMALL_STATE(76)] = 2192,
  [SMALL_STATE(77)] = 2220,
  [SMALL_STATE(78)] = 2248,
  [SMALL_STATE(79)] = 2276,
  [SMALL_STATE(80)] = 2304,
  [SMALL_STATE(81)] = 2332,
  [SMALL_STATE(82)] = 2360,
  [SMALL_STATE(83)] = 2388,
  [SMALL_STATE(84)] = 2416,
  [SMALL_STATE(85)] = 2444,
  [SMALL_STATE(86)] = 2472,
  [SMALL_STATE(87)] = 2500,
  [SMALL_STATE(88)] = 2528,
  [SMALL_STATE(89)] = 2556,
  [SMALL_STATE(90)] = 2584,
  [SMALL_STATE(91)] = 2610,
  [SMALL_STATE(92)] = 2638,
  [SMALL_STATE(93)] = 2666,
  [SMALL_STATE(94)] = 2694,
  [SMALL_STATE(95)] = 2722,
  [SMALL_STATE(96)] = 2750,
  [SMALL_STATE(97)] = 2778,
  [SMALL_STATE(98)] = 2804,
  [SMALL_STATE(99)] = 2832,
  [SMALL_STATE(100)] = 2860,
  [SMALL_STATE(101)] = 2888,
  [SMALL_STATE(102)] = 2916,
  [SMALL_STATE(103)] = 2939,
  [SMALL_STATE(104)] = 2962,
  [SMALL_STATE(105)] = 2985,
  [SMALL_STATE(106)] = 3022,
  [SMALL_STATE(107)] = 3049,
  [SMALL_STATE(108)] = 3072,
  [SMALL_STATE(109)] = 3095,
  [SMALL_STATE(110)] = 3117,
  [SMALL_STATE(111)] = 3141,
  [SMALL_STATE(112)] = 3165,
  [SMALL_STATE(113)] = 3189,
  [SMALL_STATE(114)] = 3211,
  [SMALL_STATE(115)] = 3236,
  [SMALL_STATE(116)] = 3255,
  [SMALL_STATE(117)] = 3276,
  [SMALL_STATE(118)] = 3295,
  [SMALL_STATE(119)] = 3314,
  [SMALL_STATE(120)] = 3339,
  [SMALL_STATE(121)] = 3364,
  [SMALL_STATE(122)] = 3383,
  [SMALL_STATE(123)] = 3426,
  [SMALL_STATE(124)] = 3451,
  [SMALL_STATE(125)] = 3470,
  [SMALL_STATE(126)] = 3497,
  [SMALL_STATE(127)] = 3516,
  [SMALL_STATE(128)] = 3541,
  [SMALL_STATE(129)] = 3571,
  [SMALL_STATE(130)] = 3601,
  [SMALL_STATE(131)] = 3618,
  [SMALL_STATE(132)] = 3635,
  [SMALL_STATE(133)] = 3651,
  [SMALL_STATE(134)] = 3667,
  [SMALL_STATE(135)] = 3684,
  [SMALL_STATE(136)] = 3701,
  [SMALL_STATE(137)] = 3718,
  [SMALL_STATE(138)] = 3733,
  [SMALL_STATE(139)] = 3754,
  [SMALL_STATE(140)] = 3769,
  [SMALL_STATE(141)] = 3790,
  [SMALL_STATE(142)] = 3807,
  [SMALL_STATE(143)] = 3838,
  [SMALL_STATE(144)] = 3853,
  [SMALL_STATE(145)] = 3868,
  [SMALL_STATE(146)] = 3883,
  [SMALL_STATE(147)] = 3898,
  [SMALL_STATE(148)] = 3913,
  [SMALL_STATE(149)] = 3928,
  [SMALL_STATE(150)] = 3943,
  [SMALL_STATE(151)] = 3958,
  [SMALL_STATE(152)] = 3973,
  [SMALL_STATE(153)] = 3988,
  [SMALL_STATE(154)] = 4005,
  [SMALL_STATE(155)] = 4033,
  [SMALL_STATE(156)] = 4047,
  [SMALL_STATE(157)] = 4061,
  [SMALL_STATE(158)] = 4075,
  [SMALL_STATE(159)] = 4089,
  [SMALL_STATE(160)] = 4103,
  [SMALL_STATE(161)] = 4117,
  [SMALL_STATE(162)] = 4131,
  [SMALL_STATE(163)] = 4147,
  [SMALL_STATE(164)] = 4161,
  [SMALL_STATE(165)] = 4175,
  [SMALL_STATE(166)] = 4191,
  [SMALL_STATE(167)] = 4208,
  [SMALL_STATE(168)] = 4228,
  [SMALL_STATE(169)] = 4250,
  [SMALL_STATE(170)] = 4270,
  [SMALL_STATE(171)] = 4290,
  [SMALL_STATE(172)] = 4312,
  [SMALL_STATE(173)] = 4334,
  [SMALL_STATE(174)] = 4348,
  [SMALL_STATE(175)] = 4368,
  [SMALL_STATE(176)] = 4388,
  [SMALL_STATE(177)] = 4404,
  [SMALL_STATE(178)] = 4426,
  [SMALL_STATE(179)] = 4448,
  [SMALL_STATE(180)] = 4468,
  [SMALL_STATE(181)] = 4488,
  [SMALL_STATE(182)] = 4504,
  [SMALL_STATE(183)] = 4518,
  [SMALL_STATE(184)] = 4538,
  [SMALL_STATE(185)] = 4551,
  [SMALL_STATE(186)] = 4566,
  [SMALL_STATE(187)] = 4579,
  [SMALL_STATE(188)] = 4592,
  [SMALL_STATE(189)] = 4605,
  [SMALL_STATE(190)] = 4618,
  [SMALL_STATE(191)] = 4631,
  [SMALL_STATE(192)] = 4644,
  [SMALL_STATE(193)] = 4657,
  [SMALL_STATE(194)] = 4670,
  [SMALL_STATE(195)] = 4683,
  [SMALL_STATE(196)] = 4696,
  [SMALL_STATE(197)] = 4711,
  [SMALL_STATE(198)] = 4724,
  [SMALL_STATE(199)] = 4737,
  [SMALL_STATE(200)] = 4750,
  [SMALL_STATE(201)] = 4760,
  [SMALL_STATE(202)] = 4770,
  [SMALL_STATE(203)] = 4782,
  [SMALL_STATE(204)] = 4794,
  [SMALL_STATE(205)] = 4804,
  [SMALL_STATE(206)] = 4818,
  [SMALL_STATE(207)] = 4830,
  [SMALL_STATE(208)] = 4846,
  [SMALL_STATE(209)] = 4862,
  [SMALL_STATE(210)] = 4871,
  [SMALL_STATE(211)] = 4878,
  [SMALL_STATE(212)] = 4885,
  [SMALL_STATE(213)] = 4892,
  [SMALL_STATE(214)] = 4901,
  [SMALL_STATE(215)] = 4910,
  [SMALL_STATE(216)] = 4917,
  [SMALL_STATE(217)] = 4928,
  [SMALL_STATE(218)] = 4935,
  [SMALL_STATE(219)] = 4948,
  [SMALL_STATE(220)] = 4955,
  [SMALL_STATE(221)] = 4966,
  [SMALL_STATE(222)] = 4977,
  [SMALL_STATE(223)] = 4986,
  [SMALL_STATE(224)] = 4995,
  [SMALL_STATE(225)] = 5006,
  [SMALL_STATE(226)] = 5015,
  [SMALL_STATE(227)] = 5024,
  [SMALL_STATE(228)] = 5033,
  [SMALL_STATE(229)] = 5046,
  [SMALL_STATE(230)] = 5055,
  [SMALL_STATE(231)] = 5066,
  [SMALL_STATE(232)] = 5075,
  [SMALL_STATE(233)] = 5086,
  [SMALL_STATE(234)] = 5095,
  [SMALL_STATE(235)] = 5106,
  [SMALL_STATE(236)] = 5115,
  [SMALL_STATE(237)] = 5124,
  [SMALL_STATE(238)] = 5131,
  [SMALL_STATE(239)] = 5140,
  [SMALL_STATE(240)] = 5149,
  [SMALL_STATE(241)] = 5156,
  [SMALL_STATE(242)] = 5165,
  [SMALL_STATE(243)] = 5174,
  [SMALL_STATE(244)] = 5183,
  [SMALL_STATE(245)] = 5192,
  [SMALL_STATE(246)] = 5205,
  [SMALL_STATE(247)] = 5216,
  [SMALL_STATE(248)] = 5225,
  [SMALL_STATE(249)] = 5238,
  [SMALL_STATE(250)] = 5251,
  [SMALL_STATE(251)] = 5264,
  [SMALL_STATE(252)] = 5277,
  [SMALL_STATE(253)] = 5290,
  [SMALL_STATE(254)] = 5303,
  [SMALL_STATE(255)] = 5316,
  [SMALL_STATE(256)] = 5329,
  [SMALL_STATE(257)] = 5338,
  [SMALL_STATE(258)] = 5347,
  [SMALL_STATE(259)] = 5356,
  [SMALL_STATE(260)] = 5363,
  [SMALL_STATE(261)] = 5372,
  [SMALL_STATE(262)] = 5381,
  [SMALL_STATE(263)] = 5388,
  [SMALL_STATE(264)] = 5397,
  [SMALL_STATE(265)] = 5404,
  [SMALL_STATE(266)] = 5413,
  [SMALL_STATE(267)] = 5422,
  [SMALL_STATE(268)] = 5431,
  [SMALL_STATE(269)] = 5440,
  [SMALL_STATE(270)] = 5451,
  [SMALL_STATE(271)] = 5460,
  [SMALL_STATE(272)] = 5467,
  [SMALL_STATE(273)] = 5476,
  [SMALL_STATE(274)] = 5483,
  [SMALL_STATE(275)] = 5490,
  [SMALL_STATE(276)] = 5499,
  [SMALL_STATE(277)] = 5508,
  [SMALL_STATE(278)] = 5517,
  [SMALL_STATE(279)] = 5526,
  [SMALL_STATE(280)] = 5535,
  [SMALL_STATE(281)] = 5546,
  [SMALL_STATE(282)] = 5555,
  [SMALL_STATE(283)] = 5564,
  [SMALL_STATE(284)] = 5575,
  [SMALL_STATE(285)] = 5584,
  [SMALL_STATE(286)] = 5593,
  [SMALL_STATE(287)] = 5602,
  [SMALL_STATE(288)] = 5613,
  [SMALL_STATE(289)] = 5620,
  [SMALL_STATE(290)] = 5627,
  [SMALL_STATE(291)] = 5634,
  [SMALL_STATE(292)] = 5643,
  [SMALL_STATE(293)] = 5650,
  [SMALL_STATE(294)] = 5659,
  [SMALL_STATE(295)] = 5669,
  [SMALL_STATE(296)] = 5679,
  [SMALL_STATE(297)] = 5689,
  [SMALL_STATE(298)] = 5697,
  [SMALL_STATE(299)] = 5707,
  [SMALL_STATE(300)] = 5715,
  [SMALL_STATE(301)] = 5723,
  [SMALL_STATE(302)] = 5733,
  [SMALL_STATE(303)] = 5743,
  [SMALL_STATE(304)] = 5751,
  [SMALL_STATE(305)] = 5761,
  [SMALL_STATE(306)] = 5771,
  [SMALL_STATE(307)] = 5781,
  [SMALL_STATE(308)] = 5789,
  [SMALL_STATE(309)] = 5799,
  [SMALL_STATE(310)] = 5805,
  [SMALL_STATE(311)] = 5813,
  [SMALL_STATE(312)] = 5823,
  [SMALL_STATE(313)] = 5829,
  [SMALL_STATE(314)] = 5839,
  [SMALL_STATE(315)] = 5847,
  [SMALL_STATE(316)] = 5853,
  [SMALL_STATE(317)] = 5863,
  [SMALL_STATE(318)] = 5873,
  [SMALL_STATE(319)] = 5883,
  [SMALL_STATE(320)] = 5893,
  [SMALL_STATE(321)] = 5898,
  [SMALL_STATE(322)] = 5905,
  [SMALL_STATE(323)] = 5912,
  [SMALL_STATE(324)] = 5919,
  [SMALL_STATE(325)] = 5926,
  [SMALL_STATE(326)] = 5931,
  [SMALL_STATE(327)] = 5936,
  [SMALL_STATE(328)] = 5943,
  [SMALL_STATE(329)] = 5950,
  [SMALL_STATE(330)] = 5955,
  [SMALL_STATE(331)] = 5960,
  [SMALL_STATE(332)] = 5965,
  [SMALL_STATE(333)] = 5970,
  [SMALL_STATE(334)] = 5975,
  [SMALL_STATE(335)] = 5980,
  [SMALL_STATE(336)] = 5985,
  [SMALL_STATE(337)] = 5992,
  [SMALL_STATE(338)] = 5997,
  [SMALL_STATE(339)] = 6002,
  [SMALL_STATE(340)] = 6007,
  [SMALL_STATE(341)] = 6014,
  [SMALL_STATE(342)] = 6019,
  [SMALL_STATE(343)] = 6024,
  [SMALL_STATE(344)] = 6029,
  [SMALL_STATE(345)] = 6036,
  [SMALL_STATE(346)] = 6041,
  [SMALL_STATE(347)] = 6046,
  [SMALL_STATE(348)] = 6051,
  [SMALL_STATE(349)] = 6058,
  [SMALL_STATE(350)] = 6063,
  [SMALL_STATE(351)] = 6068,
  [SMALL_STATE(352)] = 6073,
  [SMALL_STATE(353)] = 6078,
  [SMALL_STATE(354)] = 6082,
  [SMALL_STATE(355)] = 6086,
  [SMALL_STATE(356)] = 6090,
  [SMALL_STATE(357)] = 6094,
  [SMALL_STATE(358)] = 6098,
  [SMALL_STATE(359)] = 6102,
  [SMALL_STATE(360)] = 6106,
  [SMALL_STATE(361)] = 6110,
  [SMALL_STATE(362)] = 6114,
  [SMALL_STATE(363)] = 6118,
  [SMALL_STATE(364)] = 6122,
  [SMALL_STATE(365)] = 6126,
  [SMALL_STATE(366)] = 6130,
  [SMALL_STATE(367)] = 6134,
  [SMALL_STATE(368)] = 6138,
  [SMALL_STATE(369)] = 6142,
  [SMALL_STATE(370)] = 6146,
  [SMALL_STATE(371)] = 6150,
  [SMALL_STATE(372)] = 6154,
  [SMALL_STATE(373)] = 6158,
  [SMALL_STATE(374)] = 6162,
  [SMALL_STATE(375)] = 6166,
  [SMALL_STATE(376)] = 6170,
  [SMALL_STATE(377)] = 6174,
  [SMALL_STATE(378)] = 6178,
  [SMALL_STATE(379)] = 6182,
  [SMALL_STATE(380)] = 6186,
  [SMALL_STATE(381)] = 6190,
  [SMALL_STATE(382)] = 6194,
  [SMALL_STATE(383)] = 6198,
  [SMALL_STATE(384)] = 6202,
  [SMALL_STATE(385)] = 6206,
  [SMALL_STATE(386)] = 6210,
  [SMALL_STATE(387)] = 6214,
  [SMALL_STATE(388)] = 6218,
  [SMALL_STATE(389)] = 6222,
  [SMALL_STATE(390)] = 6226,
  [SMALL_STATE(391)] = 6230,
  [SMALL_STATE(392)] = 6234,
  [SMALL_STATE(393)] = 6238,
  [SMALL_STATE(394)] = 6242,
  [SMALL_STATE(395)] = 6246,
  [SMALL_STATE(396)] = 6250,
  [SMALL_STATE(397)] = 6254,
  [SMALL_STATE(398)] = 6258,
  [SMALL_STATE(399)] = 6262,
  [SMALL_STATE(400)] = 6266,
  [SMALL_STATE(401)] = 6270,
  [SMALL_STATE(402)] = 6274,
  [SMALL_STATE(403)] = 6278,
  [SMALL_STATE(404)] = 6282,
  [SMALL_STATE(405)] = 6286,
  [SMALL_STATE(406)] = 6290,
  [SMALL_STATE(407)] = 6294,
  [SMALL_STATE(408)] = 6298,
  [SMALL_STATE(409)] = 6302,
  [SMALL_STATE(410)] = 6306,
  [SMALL_STATE(411)] = 6310,
  [SMALL_STATE(412)] = 6314,
  [SMALL_STATE(413)] = 6318,
  [SMALL_STATE(414)] = 6322,
  [SMALL_STATE(415)] = 6326,
  [SMALL_STATE(416)] = 6330,
  [SMALL_STATE(417)] = 6334,
  [SMALL_STATE(418)] = 6338,
  [SMALL_STATE(419)] = 6342,
  [SMALL_STATE(420)] = 6346,
  [SMALL_STATE(421)] = 6350,
  [SMALL_STATE(422)] = 6354,
  [SMALL_STATE(423)] = 6358,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(121),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(121),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(130),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(138),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(328),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(361),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(154),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(20),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(20),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(218),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(93),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(93),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(245),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(120),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(120),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(396),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(168),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(122),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 5),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6), REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(349),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(173),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(383),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(376),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(344),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(219),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(377),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(202),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(206),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4, .production_id = 6),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(307),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(232),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 9),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3), REDUCE(sym_template_pattern_CE, 3, .production_id = 6),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 12),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(370),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(327),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(404),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 9),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 12),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(295),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(301),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(302),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(304),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(306),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3, .production_id = 5),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 10),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 10),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4, .production_id = 5),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 7),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 7),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4, .production_id = 10),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 7),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 10),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4, .production_id = 10),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 7),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 10),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 12),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 9),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 12),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 9),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
