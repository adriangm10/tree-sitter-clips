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
#define STATE_COUNT 418
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
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 16,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 29,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 30,
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
  [67] = 29,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 54,
  [72] = 28,
  [73] = 27,
  [74] = 25,
  [75] = 55,
  [76] = 30,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 49,
  [82] = 26,
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
  [125] = 124,
  [126] = 126,
  [127] = 127,
  [128] = 116,
  [129] = 115,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 116,
  [134] = 115,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 130,
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
  [150] = 146,
  [151] = 136,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 140,
  [156] = 156,
  [157] = 157,
  [158] = 145,
  [159] = 141,
  [160] = 138,
  [161] = 137,
  [162] = 162,
  [163] = 135,
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
  [191] = 183,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 188,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
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
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 216,
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
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 112,
  [301] = 301,
  [302] = 291,
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
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 330,
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
  [388] = 115,
  [389] = 116,
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
  [410] = 410,
  [411] = 390,
  [412] = 412,
  [413] = 413,
  [414] = 412,
  [415] = 390,
  [416] = 416,
  [417] = 417,
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
      if (eof) ADVANCE(317);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(481);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(486);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == '[') ADVANCE(314);
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
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '~') ADVANCE(483);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(416);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(481);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == '=') ADVANCE(487);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '~') ADVANCE(483);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(401);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '&') ADVANCE(481);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '?') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '?') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(414);
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
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'D') ADVANCE(404);
      if (lookahead == 'N') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(453);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(480);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(313);
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
      if (lookahead == 'E') ADVANCE(440);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(438);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(437);
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
      if (lookahead == 'G') ADVANCE(438);
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
      if (lookahead == 'L') ADVANCE(438);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(23);
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
      if (lookahead == 'R') ADVANCE(438);
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
      if (lookahead == 'S') ADVANCE(438);
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
      if (lookahead == 'T') ADVANCE(438);
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
      if (lookahead == 'T') ADVANCE(23);
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
      if (lookahead == ']') ADVANCE(402);
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
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == 't') ADVANCE(352);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == 't') ADVANCE(352);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(376);
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
          lookahead != '~') ADVANCE(401);
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
      if (lookahead == 'r') ADVANCE(463);
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
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(435);
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
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(429);
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
      if (lookahead == 'e') ADVANCE(26);
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
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 's') ADVANCE(24);
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
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(336);
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
          lookahead != '~') ADVANCE(401);
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
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(488);
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
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(489);
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
      if (lookahead == 'o') ADVANCE(342);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(20);
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
      if (lookahead == 'p') ADVANCE(22);
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
      if (lookahead == 'r') ADVANCE(25);
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
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(447);
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
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(417);
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
      if (lookahead == 'y') ADVANCE(451);
      END_STATE();
    case 303:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 304:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 305:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 313:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 314:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 315:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 316:
      if (eof) ADVANCE(317);
      if (lookahead == 11) SKIP(316)
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 320:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(320);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(335);
      END_STATE();
    case 336:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 344:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 353:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 370:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 374:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 375:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 379:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(400);
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 400:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 401:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(402);
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
    case 403:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 405:
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
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 412:
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
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 413:
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
          lookahead != '~') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(414);
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
    case 415:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 418:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 420:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 422:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 425:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 427:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 433:
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
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 434:
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
          lookahead != '~') ADVANCE(412);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 455:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 460:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 462:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 464:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 466:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 468:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 470:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 472:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 474:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 476:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 478:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 485:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 487:
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
          lookahead != '~') ADVANCE(401);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 316},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 8},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 2},
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
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 316},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 316},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 100},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 101},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
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
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 316},
  [208] = {.lex_state = 316},
  [209] = {.lex_state = 316},
  [210] = {.lex_state = 316},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 316},
  [215] = {.lex_state = 316},
  [216] = {.lex_state = 104},
  [217] = {.lex_state = 316},
  [218] = {.lex_state = 316},
  [219] = {.lex_state = 316},
  [220] = {.lex_state = 316},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 316},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 316},
  [227] = {.lex_state = 316},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 316},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 316},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 316},
  [235] = {.lex_state = 316},
  [236] = {.lex_state = 316},
  [237] = {.lex_state = 316},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 316},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 316},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 104},
  [255] = {.lex_state = 316},
  [256] = {.lex_state = 316},
  [257] = {.lex_state = 316},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 316},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 316},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 316},
  [266] = {.lex_state = 316},
  [267] = {.lex_state = 316},
  [268] = {.lex_state = 316},
  [269] = {.lex_state = 316},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 316},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 316},
  [274] = {.lex_state = 316},
  [275] = {.lex_state = 316},
  [276] = {.lex_state = 316},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 316},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 316},
  [281] = {.lex_state = 316},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 316},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 316},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 316},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 12},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 180},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 12},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 13},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 7},
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
  [332] = {.lex_state = 230},
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
  [358] = {.lex_state = 12},
  [359] = {.lex_state = 12},
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
  [382] = {.lex_state = 12},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 12},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 12},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 12},
  [404] = {.lex_state = 12},
  [405] = {.lex_state = 12},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 12},
  [408] = {.lex_state = 12},
  [409] = {.lex_state = 12},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 12},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 12},
  [416] = {.lex_state = 12},
  [417] = {.lex_state = 0},
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
    [sym_program] = STATE(378),
    [sym__construct] = STATE(114),
    [sym__gap] = STATE(114),
    [sym_deffacts_construct] = STATE(114),
    [sym_deftemplate_construct] = STATE(114),
    [sym_defrule_construct] = STATE(114),
    [sym_defglobal_construct] = STATE(114),
    [sym_deffunction_construct] = STATE(114),
    [sym_defgeneric_construct] = STATE(114),
    [sym_defmethod_construct] = STATE(114),
    [aux_sym_program_repeat1] = STATE(114),
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
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
    STATE(9), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(258), 2,
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
    STATE(87), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [80] = 6,
    ACTIONS(35), 1,
      sym_str_lit,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_EQ_GT,
    STATE(39), 1,
      sym_declaration,
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
  [112] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(154), 1,
      sym__rhs_field,
    ACTIONS(45), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(156), 3,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(43), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(31), 5,
      sym__expression,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [148] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [189] = 4,
    ACTIONS(51), 1,
      sym_single_field_variable,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(7), 14,
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
  [216] = 6,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_else,
    ACTIONS(61), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(59), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(16), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [247] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [288] = 11,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      anon_sym_TILDE,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
      sym_connected_constraint,
    ACTIONS(74), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(79), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(85), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(71), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [329] = 6,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_else,
    ACTIONS(61), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(59), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(16), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [360] = 5,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
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
  [389] = 6,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      anon_sym_else,
    ACTIONS(96), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(94), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(8), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [420] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_do,
    ACTIONS(104), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(102), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(73), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [451] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [492] = 6,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(115), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(112), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(16), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [523] = 6,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(125), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(195), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
    STATE(117), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [554] = 6,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      anon_sym_else,
    ACTIONS(135), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(133), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(11), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [585] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
  [626] = 11,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
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
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [667] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_do,
    ACTIONS(147), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(145), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(27), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
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
    STATE(57), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [726] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(159), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(97), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [754] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [782] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
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
    STATE(75), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [810] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [838] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [866] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(179), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(26), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [894] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [922] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(185), 4,
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
  [950] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [978] = 5,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(193), 4,
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
  [1006] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1034] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(7), 14,
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
  [1060] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(208), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(88), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1088] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(212), 4,
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
  [1116] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(7), 14,
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
  [1142] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(220), 4,
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
  [1170] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_EQ_GT,
    STATE(80), 14,
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
  [1196] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_EQ_GT,
    STATE(7), 14,
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
  [1222] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(7), 14,
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
  [1248] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(7), 14,
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
  [1274] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(7), 14,
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
  [1300] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1328] = 5,
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
    STATE(87), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1356] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(236), 4,
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
  [1384] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1412] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(242), 4,
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
  [1440] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1468] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1496] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1524] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(252), 4,
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
  [1552] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1580] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(260), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(49), 8,
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
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1636] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(266), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(33), 8,
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
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1692] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(272), 4,
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
  [1720] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1748] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(280), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(53), 8,
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
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(286), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(70), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [1804] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_EQ_GT,
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
  [1830] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_EQ_GT,
    STATE(7), 14,
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
  [1856] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1884] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1912] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1940] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [1968] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_EQ_GT,
    STATE(7), 14,
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
  [1994] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(302), 4,
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
  [2022] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2050] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(310), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(308), 4,
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
  [2078] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(314), 4,
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
  [2106] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2134] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(320), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(55), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2162] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2190] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(324), 4,
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
  [2218] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2246] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(332), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(47), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2274] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(338), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(24), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2302] = 4,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_EQ_GT,
    STATE(7), 14,
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
  [2328] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2356] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2384] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(348), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(94), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2412] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(354), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(86), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2440] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2468] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2496] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2524] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2552] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2580] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(370), 4,
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
  [2608] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(376), 4,
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
  [2636] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2664] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(382), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(380), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(64), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2692] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2720] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(386), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(66), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2748] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(392), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(65), 8,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      aux_sym_function_call_repeat1,
  [2776] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(165), 4,
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
  [2804] = 10,
    ACTIONS(396), 1,
      anon_sym_TILDE,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(126), 1,
      sym_connected_constraint,
    STATE(300), 1,
      sym_single_constraint,
    STATE(384), 1,
      sym_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(398), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [2841] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(37), 14,
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
  [2864] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
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
  [2887] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
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
  [2910] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(43), 14,
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
  [2933] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(34), 14,
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
  [2956] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(400), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(360), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [2983] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(406), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(321), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3007] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(410), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(104), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3031] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(103), 13,
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
  [3053] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(414), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(386), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
  [3077] = 3,
    ACTIONS(37), 1,
      sym_single_field_variable,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(387), 13,
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
  [3099] = 5,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(418), 4,
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
  [3124] = 14,
    ACTIONS(426), 1,
      anon_sym_default,
    ACTIONS(428), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(430), 1,
      anon_sym_type,
    ACTIONS(432), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(434), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(436), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(438), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(440), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(442), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(444), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(446), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(448), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(450), 1,
      anon_sym_range,
    ACTIONS(452), 1,
      anon_sym_cardinality,
  [3167] = 3,
    ACTIONS(458), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(456), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(454), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3188] = 2,
    ACTIONS(462), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(460), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3207] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 1,
      sym__ws,
    ACTIONS(468), 1,
      sym_comment,
    STATE(123), 10,
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
  [3232] = 2,
    ACTIONS(472), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(470), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3251] = 2,
    ACTIONS(476), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(474), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3270] = 5,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(418), 4,
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
  [3295] = 2,
    ACTIONS(482), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(480), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3314] = 6,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(486), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(484), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(154), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
  [3341] = 5,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(490), 4,
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
  [3366] = 2,
    ACTIONS(503), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(501), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3385] = 2,
    ACTIONS(507), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(505), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3404] = 5,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 1,
      sym__ws,
    ACTIONS(514), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(123), 10,
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
  [3429] = 8,
    ACTIONS(396), 1,
      anon_sym_TILDE,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(127), 1,
      sym_connected_constraint,
    STATE(300), 1,
      sym_single_constraint,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(398), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3459] = 8,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    STATE(112), 1,
      sym_single_constraint,
    STATE(113), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    STATE(127), 1,
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
  [3489] = 2,
    ACTIONS(522), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(520), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3506] = 2,
    ACTIONS(526), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(524), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [3523] = 2,
    ACTIONS(474), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(476), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3539] = 2,
    ACTIONS(470), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(472), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3555] = 5,
    STATE(118), 1,
      sym_term,
    STATE(122), 1,
      sym__constant,
    ACTIONS(13), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(398), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3576] = 2,
    ACTIONS(528), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(530), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3591] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(132), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3608] = 2,
    ACTIONS(474), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(476), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3623] = 2,
    ACTIONS(470), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(472), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3638] = 2,
    ACTIONS(537), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(539), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3653] = 2,
    ACTIONS(541), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(543), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3668] = 2,
    ACTIONS(545), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(547), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3683] = 2,
    ACTIONS(549), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(551), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3698] = 5,
    STATE(118), 1,
      sym_term,
    STATE(122), 1,
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
  [3719] = 2,
    ACTIONS(553), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(555), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3734] = 2,
    ACTIONS(557), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(559), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3749] = 3,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(148), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3766] = 3,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
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
  [3783] = 10,
    ACTIONS(567), 1,
      sym_symbol,
    ACTIONS(569), 1,
      anon_sym_declare,
    ACTIONS(571), 1,
      anon_sym_not,
    ACTIONS(573), 1,
      anon_sym_and,
    ACTIONS(575), 1,
      anon_sym_or,
    ACTIONS(577), 1,
      anon_sym_logical,
    ACTIONS(579), 1,
      anon_sym_test,
    ACTIONS(581), 1,
      anon_sym_exists,
    ACTIONS(583), 1,
      anon_sym_forall,
    ACTIONS(585), 1,
      anon_sym_object,
  [3814] = 2,
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
  [3829] = 2,
    ACTIONS(591), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(593), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3844] = 3,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(132), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3861] = 3,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(132), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3878] = 2,
    ACTIONS(599), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(601), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3893] = 2,
    ACTIONS(591), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(593), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3907] = 2,
    ACTIONS(541), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(543), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3921] = 9,
    ACTIONS(567), 1,
      sym_symbol,
    ACTIONS(571), 1,
      anon_sym_not,
    ACTIONS(573), 1,
      anon_sym_and,
    ACTIONS(575), 1,
      anon_sym_or,
    ACTIONS(577), 1,
      anon_sym_logical,
    ACTIONS(579), 1,
      anon_sym_test,
    ACTIONS(581), 1,
      anon_sym_exists,
    ACTIONS(583), 1,
      anon_sym_forall,
    ACTIONS(585), 1,
      anon_sym_object,
  [3949] = 2,
    ACTIONS(603), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(605), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3963] = 3,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(609), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [3979] = 2,
    ACTIONS(553), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(555), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3993] = 2,
    ACTIONS(614), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(617), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4007] = 3,
    ACTIONS(620), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(472), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(470), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4023] = 2,
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
  [4037] = 2,
    ACTIONS(557), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(559), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4051] = 2,
    ACTIONS(549), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(551), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4065] = 2,
    ACTIONS(545), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(547), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4079] = 2,
    ACTIONS(623), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(625), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4093] = 2,
    ACTIONS(537), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(539), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4107] = 2,
    ACTIONS(627), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(629), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4121] = 4,
    ACTIONS(633), 1,
      anon_sym_QMARKVARIABLE,
    STATE(364), 1,
      sym_value_list,
    STATE(172), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(631), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4138] = 3,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(166), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(635), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4152] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      sym_wildcard_parameter_restriction,
    STATE(175), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4172] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4192] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4212] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_wildcard_parameter_restriction,
    STATE(168), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4232] = 7,
    ACTIONS(654), 1,
      anon_sym_deffacts,
    ACTIONS(656), 1,
      anon_sym_deftemplate,
    ACTIONS(658), 1,
      anon_sym_defrule,
    ACTIONS(660), 1,
      anon_sym_defglobal,
    ACTIONS(662), 1,
      anon_sym_deffunction,
    ACTIONS(664), 1,
      anon_sym_defgeneric,
    ACTIONS(666), 1,
      anon_sym_defmethod,
  [4254] = 3,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(166), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(668), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4268] = 7,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_symbol,
    ACTIONS(674), 1,
      sym_global_variable,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
    STATE(375), 1,
      sym_query,
    STATE(396), 1,
      sym_function_call,
  [4290] = 7,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_symbol,
    ACTIONS(674), 1,
      sym_global_variable,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
    STATE(371), 1,
      sym_query,
    STATE(396), 1,
      sym_function_call,
  [4312] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4332] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_wildcard_parameter_restriction,
    STATE(179), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4352] = 7,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_global_variable,
    ACTIONS(684), 1,
      sym_symbol,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_symbol_list_repeat1,
    STATE(392), 1,
      sym_query,
    STATE(396), 1,
      sym_function_call,
  [4374] = 7,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      sym_global_variable,
    ACTIONS(688), 1,
      sym_symbol,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_symbol_list_repeat1,
    STATE(395), 1,
      sym_query,
    STATE(396), 1,
      sym_function_call,
  [4396] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4416] = 4,
    ACTIONS(694), 1,
      sym_str_lit,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(192), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4432] = 4,
    ACTIONS(700), 1,
      sym_str_lit,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(184), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4448] = 6,
    ACTIONS(640), 1,
      sym_single_field_variable,
    ACTIONS(642), 1,
      sym_multifield_variable,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_wildcard_parameter_restriction,
    STATE(169), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4468] = 3,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(185), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4481] = 3,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(185), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4494] = 3,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(185), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4507] = 3,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4520] = 4,
    ACTIONS(719), 1,
      sym_single_field_variable,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4535] = 3,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    STATE(414), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(727), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4548] = 3,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(186), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4561] = 3,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4574] = 3,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(185), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4587] = 3,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(190), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4600] = 3,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(185), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4613] = 4,
    ACTIONS(746), 1,
      anon_sym_QMARKVARIABLE,
    STATE(364), 1,
      sym_lexeme_list,
    ACTIONS(744), 2,
      sym_str_lit,
      sym_symbol,
    STATE(203), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4628] = 3,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(198), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4641] = 3,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(193), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4654] = 3,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    STATE(412), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(754), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4667] = 3,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(198), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4680] = 3,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(761), 2,
      sym_str_lit,
      sym_symbol,
    STATE(199), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4692] = 4,
    ACTIONS(766), 1,
      sym_symbol,
    ACTIONS(768), 1,
      sym_global_variable,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(224), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4706] = 2,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(183), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4716] = 3,
    ACTIONS(772), 1,
      sym_symbol,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(775), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4728] = 3,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 2,
      sym_str_lit,
      sym_symbol,
    STATE(199), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4740] = 2,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(191), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [4750] = 2,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(206), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4760] = 1,
    ACTIONS(783), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4767] = 2,
    ACTIONS(785), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(787), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4776] = 2,
    ACTIONS(789), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(791), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4785] = 2,
    ACTIONS(793), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(795), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4794] = 2,
    ACTIONS(797), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(799), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4803] = 1,
    ACTIONS(801), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4810] = 3,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(212), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4821] = 3,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(213), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4832] = 2,
    ACTIONS(813), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(815), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4841] = 2,
    ACTIONS(817), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(819), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4850] = 4,
    ACTIONS(821), 1,
      sym_symbol,
    ACTIONS(823), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(825), 1,
      anon_sym_if,
    ACTIONS(827), 1,
      anon_sym_assert,
  [4863] = 2,
    ACTIONS(829), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(831), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4872] = 2,
    ACTIONS(833), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(835), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4881] = 2,
    ACTIONS(837), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(839), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4890] = 2,
    ACTIONS(841), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(843), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4899] = 1,
    ACTIONS(845), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4906] = 3,
    ACTIONS(768), 1,
      sym_global_variable,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(272), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4917] = 2,
    ACTIONS(849), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(851), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4926] = 3,
    ACTIONS(768), 1,
      sym_global_variable,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(279), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4937] = 3,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(225), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [4948] = 2,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(862), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4957] = 2,
    ACTIONS(864), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(866), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4966] = 3,
    ACTIONS(868), 1,
      sym_single_field_variable,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(871), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [4977] = 2,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(875), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4986] = 1,
    ACTIONS(877), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4993] = 1,
    ACTIONS(879), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5000] = 2,
    ACTIONS(881), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(883), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5009] = 1,
    ACTIONS(885), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5016] = 2,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(889), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5025] = 2,
    ACTIONS(891), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(893), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5034] = 2,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(897), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5043] = 2,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(901), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5052] = 3,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    STATE(212), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5063] = 1,
    ACTIONS(907), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5070] = 1,
    ACTIONS(909), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5077] = 1,
    ACTIONS(911), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5084] = 2,
    ACTIONS(913), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(915), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5093] = 4,
    ACTIONS(917), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(919), 1,
      sym_allowed_type,
    STATE(301), 1,
      aux_sym_type_specification_repeat1,
    STATE(369), 1,
      sym_type_specification,
  [5106] = 4,
    ACTIONS(921), 1,
      sym_symbol,
    ACTIONS(923), 1,
      anon_sym_QMARKVARIABLE,
    STATE(303), 1,
      aux_sym_symbol_list_repeat1,
    STATE(364), 1,
      sym_symbol_list,
  [5119] = 4,
    ACTIONS(925), 1,
      sym_str_lit,
    ACTIONS(927), 1,
      anon_sym_QMARKVARIABLE,
    STATE(304), 1,
      aux_sym_string_list_repeat1,
    STATE(364), 1,
      sym_string_list,
  [5132] = 4,
    ACTIONS(929), 1,
      sym_integer,
    ACTIONS(931), 1,
      anon_sym_QMARKVARIABLE,
    STATE(306), 1,
      aux_sym_integer_list_repeat1,
    STATE(364), 1,
      sym_integer_list,
  [5145] = 4,
    ACTIONS(933), 1,
      sym_float,
    ACTIONS(935), 1,
      anon_sym_QMARKVARIABLE,
    STATE(307), 1,
      aux_sym_float_list_repeat1,
    STATE(364), 1,
      sym_float_list,
  [5158] = 4,
    ACTIONS(937), 1,
      sym_number,
    ACTIONS(939), 1,
      anon_sym_QMARKVARIABLE,
    STATE(308), 1,
      aux_sym_number_list_repeat1,
    STATE(364), 1,
      sym_number_list,
  [5171] = 4,
    ACTIONS(941), 1,
      sym_symbol,
    ACTIONS(943), 1,
      anon_sym_QMARKVARIABLE,
    STATE(309), 1,
      aux_sym_symbol_list_repeat1,
    STATE(364), 1,
      sym_instance_list,
  [5184] = 4,
    ACTIONS(945), 1,
      sym_symbol,
    ACTIONS(947), 1,
      anon_sym_QMARKVARIABLE,
    STATE(310), 1,
      aux_sym_symbol_list_repeat1,
    STATE(364), 1,
      sym_class_name_list,
  [5197] = 3,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(225), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5208] = 2,
    ACTIONS(953), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(955), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5217] = 3,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(238), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5228] = 4,
    ACTIONS(959), 1,
      sym_symbol,
    ACTIONS(961), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(963), 1,
      anon_sym_if,
    ACTIONS(965), 1,
      anon_sym_assert,
  [5241] = 2,
    ACTIONS(967), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(969), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5250] = 2,
    ACTIONS(971), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(973), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5259] = 2,
    ACTIONS(975), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(977), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5268] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(213), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5279] = 2,
    ACTIONS(981), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(983), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5288] = 4,
    ACTIONS(985), 1,
      sym_single_field_variable,
    ACTIONS(987), 1,
      sym_multifield_variable,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
  [5301] = 1,
    ACTIONS(991), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5308] = 2,
    ACTIONS(994), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(996), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5317] = 1,
    ACTIONS(998), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5324] = 1,
    ACTIONS(1000), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5331] = 2,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1004), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5340] = 2,
    ACTIONS(1006), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1008), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5349] = 2,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1012), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5358] = 2,
    ACTIONS(1014), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1016), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5367] = 2,
    ACTIONS(1018), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1020), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5376] = 1,
    ACTIONS(1022), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5383] = 2,
    ACTIONS(1024), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1026), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5392] = 3,
    ACTIONS(768), 1,
      sym_global_variable,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(279), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5403] = 2,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1032), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5412] = 2,
    ACTIONS(1034), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1036), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5421] = 2,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1040), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5430] = 2,
    ACTIONS(1042), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1044), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5439] = 1,
    ACTIONS(1046), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5446] = 2,
    ACTIONS(1048), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1050), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5455] = 3,
    ACTIONS(1052), 1,
      sym_global_variable,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(279), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5466] = 2,
    ACTIONS(1057), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1059), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5475] = 2,
    ACTIONS(1061), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1063), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5484] = 4,
    ACTIONS(1065), 1,
      sym_single_field_variable,
    ACTIONS(1067), 1,
      sym_multifield_variable,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_parameter_list_repeat1,
  [5497] = 2,
    ACTIONS(1071), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1073), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5506] = 1,
    ACTIONS(1075), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5513] = 1,
    ACTIONS(1077), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5520] = 2,
    ACTIONS(1079), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1081), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5529] = 1,
    ACTIONS(1083), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5536] = 1,
    ACTIONS(1085), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5543] = 2,
    ACTIONS(1087), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(1089), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5552] = 2,
    STATE(315), 1,
      sym_cardinality_specification,
    ACTIONS(1091), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5560] = 3,
    ACTIONS(1093), 1,
      sym_integer,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_range_spec,
  [5570] = 1,
    ACTIONS(1097), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [5576] = 3,
    ACTIONS(1099), 1,
      sym_number,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_number_list_repeat1,
  [5586] = 3,
    ACTIONS(1104), 1,
      sym_float,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_float_list_repeat1,
  [5596] = 3,
    ACTIONS(1109), 1,
      sym_integer,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_integer_list_repeat1,
  [5606] = 3,
    ACTIONS(1114), 1,
      sym_str_lit,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [5616] = 3,
    ACTIONS(1118), 1,
      sym_str_lit,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_string_list_repeat1,
  [5626] = 3,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(1125), 1,
      sym_allowed_type,
    STATE(298), 1,
      aux_sym_type_specification_repeat1,
  [5636] = 3,
    ACTIONS(1128), 1,
      sym_str_lit,
    ACTIONS(1130), 1,
      sym_integer,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
  [5646] = 2,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(1134), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5654] = 3,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym_allowed_type,
    STATE(298), 1,
      aux_sym_type_specification_repeat1,
  [5664] = 3,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
    ACTIONS(1140), 1,
      sym_integer,
    STATE(14), 1,
      sym_range_spec,
  [5674] = 3,
    ACTIONS(672), 1,
      sym_symbol,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
  [5684] = 3,
    ACTIONS(1144), 1,
      sym_str_lit,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_string_list_repeat1,
  [5694] = 2,
    ACTIONS(1148), 1,
      sym_symbol,
    ACTIONS(1150), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [5702] = 3,
    ACTIONS(1152), 1,
      sym_integer,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_integer_list_repeat1,
  [5712] = 3,
    ACTIONS(1156), 1,
      sym_float,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_float_list_repeat1,
  [5722] = 3,
    ACTIONS(1160), 1,
      sym_number,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_number_list_repeat1,
  [5732] = 3,
    ACTIONS(672), 1,
      sym_symbol,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
  [5742] = 3,
    ACTIONS(672), 1,
      sym_symbol,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_symbol_list_repeat1,
  [5752] = 2,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    STATE(251), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5760] = 1,
    ACTIONS(1168), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5766] = 2,
    STATE(356), 1,
      sym_range_specification,
    ACTIONS(1170), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5774] = 1,
    ACTIONS(1172), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5780] = 2,
    STATE(357), 1,
      sym_cardinality_specification,
    ACTIONS(1091), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5788] = 2,
    STATE(313), 1,
      sym_range_specification,
    ACTIONS(1170), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5796] = 1,
    ACTIONS(1174), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5801] = 2,
    ACTIONS(1176), 1,
      sym_str_lit,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
  [5808] = 1,
    ACTIONS(1180), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5813] = 2,
    ACTIONS(1182), 1,
      sym_str_lit,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
  [5820] = 1,
    ACTIONS(1186), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5825] = 1,
    ACTIONS(1188), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5830] = 2,
    ACTIONS(1190), 1,
      anon_sym_salience,
    ACTIONS(1192), 1,
      anon_sym_auto_DASHfocus,
  [5837] = 1,
    ACTIONS(1194), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5842] = 2,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
  [5849] = 1,
    ACTIONS(1196), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5854] = 2,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_function_call,
  [5861] = 2,
    ACTIONS(1198), 1,
      anon_sym_slot,
    ACTIONS(1200), 1,
      anon_sym_multislot,
  [5868] = 1,
    ACTIONS(1202), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5873] = 2,
    ACTIONS(1204), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_function_call,
  [5880] = 1,
    ACTIONS(1206), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5885] = 2,
    ACTIONS(567), 1,
      sym_symbol,
    ACTIONS(585), 1,
      anon_sym_object,
  [5892] = 1,
    ACTIONS(1208), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5897] = 1,
    ACTIONS(1210), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5902] = 1,
    ACTIONS(1212), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5907] = 1,
    ACTIONS(1214), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5912] = 1,
    ACTIONS(1216), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5917] = 1,
    ACTIONS(1218), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5922] = 1,
    ACTIONS(1220), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5927] = 1,
    ACTIONS(1222), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5932] = 1,
    ACTIONS(1224), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5937] = 1,
    ACTIONS(1226), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5942] = 1,
    ACTIONS(1228), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5947] = 1,
    ACTIONS(1230), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5952] = 1,
    ACTIONS(1232), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5957] = 2,
    ACTIONS(1234), 1,
      sym_single_field_variable,
    ACTIONS(1236), 1,
      sym_multifield_variable,
  [5964] = 1,
    ACTIONS(1238), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5969] = 2,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_function_call,
  [5976] = 1,
    ACTIONS(1240), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5981] = 1,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [5985] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [5989] = 1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [5993] = 1,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
  [5997] = 1,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
  [6001] = 1,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [6005] = 1,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
  [6009] = 1,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
  [6013] = 1,
    ACTIONS(1248), 1,
      sym_symbol,
  [6017] = 1,
    ACTIONS(1250), 1,
      sym_symbol,
  [6021] = 1,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [6025] = 1,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [6029] = 1,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [6033] = 1,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
  [6037] = 1,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
  [6041] = 1,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [6045] = 1,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
  [6049] = 1,
    ACTIONS(416), 1,
      sym_boolean_symbol,
  [6053] = 1,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [6057] = 1,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
  [6061] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [6065] = 1,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
  [6069] = 1,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
  [6073] = 1,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
  [6077] = 1,
    ACTIONS(1264), 1,
      anon_sym_LPAREN,
  [6081] = 1,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
  [6085] = 1,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
  [6089] = 1,
    ACTIONS(1270), 1,
      anon_sym_LPAREN,
  [6093] = 1,
    ACTIONS(1272), 1,
      ts_builtin_sym_end,
  [6097] = 1,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
  [6101] = 1,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [6105] = 1,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
  [6109] = 1,
    ACTIONS(1278), 1,
      sym_symbol,
  [6113] = 1,
    ACTIONS(1280), 1,
      anon_sym_LT_DASH,
  [6117] = 1,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
  [6121] = 1,
    ACTIONS(1284), 1,
      sym_symbol,
  [6125] = 1,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
  [6129] = 1,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [6133] = 1,
    ACTIONS(472), 1,
      anon_sym_then,
  [6137] = 1,
    ACTIONS(476), 1,
      anon_sym_then,
  [6141] = 1,
    ACTIONS(1290), 1,
      sym_symbol,
  [6145] = 1,
    ACTIONS(1234), 1,
      sym_single_field_variable,
  [6149] = 1,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [6153] = 1,
    ACTIONS(1294), 1,
      sym_symbol,
  [6157] = 1,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [6161] = 1,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [6165] = 1,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [6169] = 1,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [6173] = 1,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [6177] = 1,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
  [6181] = 1,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [6185] = 1,
    ACTIONS(1306), 1,
      anon_sym_EQ,
  [6189] = 1,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [6193] = 1,
    ACTIONS(1310), 1,
      sym_symbol,
  [6197] = 1,
    ACTIONS(1312), 1,
      sym_symbol,
  [6201] = 1,
    ACTIONS(1314), 1,
      sym_symbol,
  [6205] = 1,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [6209] = 1,
    ACTIONS(1318), 1,
      sym_symbol,
  [6213] = 1,
    ACTIONS(1320), 1,
      sym_symbol,
  [6217] = 1,
    ACTIONS(1322), 1,
      sym_symbol,
  [6221] = 1,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [6225] = 1,
    ACTIONS(1326), 1,
      sym_symbol,
  [6229] = 1,
    ACTIONS(1328), 1,
      anon_sym_then,
  [6233] = 1,
    ACTIONS(1330), 1,
      sym_single_field_variable,
  [6237] = 1,
    ACTIONS(1332), 1,
      anon_sym_then,
  [6241] = 1,
    ACTIONS(1334), 1,
      sym_symbol,
  [6245] = 1,
    ACTIONS(1336), 1,
      sym_symbol,
  [6249] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 451,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 554,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 667,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 726,
  [SMALL_STATE(24)] = 754,
  [SMALL_STATE(25)] = 782,
  [SMALL_STATE(26)] = 810,
  [SMALL_STATE(27)] = 838,
  [SMALL_STATE(28)] = 866,
  [SMALL_STATE(29)] = 894,
  [SMALL_STATE(30)] = 922,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 978,
  [SMALL_STATE(33)] = 1006,
  [SMALL_STATE(34)] = 1034,
  [SMALL_STATE(35)] = 1060,
  [SMALL_STATE(36)] = 1088,
  [SMALL_STATE(37)] = 1116,
  [SMALL_STATE(38)] = 1142,
  [SMALL_STATE(39)] = 1170,
  [SMALL_STATE(40)] = 1196,
  [SMALL_STATE(41)] = 1222,
  [SMALL_STATE(42)] = 1248,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1300,
  [SMALL_STATE(45)] = 1328,
  [SMALL_STATE(46)] = 1356,
  [SMALL_STATE(47)] = 1384,
  [SMALL_STATE(48)] = 1412,
  [SMALL_STATE(49)] = 1440,
  [SMALL_STATE(50)] = 1468,
  [SMALL_STATE(51)] = 1496,
  [SMALL_STATE(52)] = 1524,
  [SMALL_STATE(53)] = 1552,
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
  [SMALL_STATE(64)] = 1856,
  [SMALL_STATE(65)] = 1884,
  [SMALL_STATE(66)] = 1912,
  [SMALL_STATE(67)] = 1940,
  [SMALL_STATE(68)] = 1968,
  [SMALL_STATE(69)] = 1994,
  [SMALL_STATE(70)] = 2022,
  [SMALL_STATE(71)] = 2050,
  [SMALL_STATE(72)] = 2078,
  [SMALL_STATE(73)] = 2106,
  [SMALL_STATE(74)] = 2134,
  [SMALL_STATE(75)] = 2162,
  [SMALL_STATE(76)] = 2190,
  [SMALL_STATE(77)] = 2218,
  [SMALL_STATE(78)] = 2246,
  [SMALL_STATE(79)] = 2274,
  [SMALL_STATE(80)] = 2302,
  [SMALL_STATE(81)] = 2328,
  [SMALL_STATE(82)] = 2356,
  [SMALL_STATE(83)] = 2384,
  [SMALL_STATE(84)] = 2412,
  [SMALL_STATE(85)] = 2440,
  [SMALL_STATE(86)] = 2468,
  [SMALL_STATE(87)] = 2496,
  [SMALL_STATE(88)] = 2524,
  [SMALL_STATE(89)] = 2552,
  [SMALL_STATE(90)] = 2580,
  [SMALL_STATE(91)] = 2608,
  [SMALL_STATE(92)] = 2636,
  [SMALL_STATE(93)] = 2664,
  [SMALL_STATE(94)] = 2692,
  [SMALL_STATE(95)] = 2720,
  [SMALL_STATE(96)] = 2748,
  [SMALL_STATE(97)] = 2776,
  [SMALL_STATE(98)] = 2804,
  [SMALL_STATE(99)] = 2841,
  [SMALL_STATE(100)] = 2864,
  [SMALL_STATE(101)] = 2887,
  [SMALL_STATE(102)] = 2910,
  [SMALL_STATE(103)] = 2933,
  [SMALL_STATE(104)] = 2956,
  [SMALL_STATE(105)] = 2983,
  [SMALL_STATE(106)] = 3007,
  [SMALL_STATE(107)] = 3031,
  [SMALL_STATE(108)] = 3053,
  [SMALL_STATE(109)] = 3077,
  [SMALL_STATE(110)] = 3099,
  [SMALL_STATE(111)] = 3124,
  [SMALL_STATE(112)] = 3167,
  [SMALL_STATE(113)] = 3188,
  [SMALL_STATE(114)] = 3207,
  [SMALL_STATE(115)] = 3232,
  [SMALL_STATE(116)] = 3251,
  [SMALL_STATE(117)] = 3270,
  [SMALL_STATE(118)] = 3295,
  [SMALL_STATE(119)] = 3314,
  [SMALL_STATE(120)] = 3341,
  [SMALL_STATE(121)] = 3366,
  [SMALL_STATE(122)] = 3385,
  [SMALL_STATE(123)] = 3404,
  [SMALL_STATE(124)] = 3429,
  [SMALL_STATE(125)] = 3459,
  [SMALL_STATE(126)] = 3489,
  [SMALL_STATE(127)] = 3506,
  [SMALL_STATE(128)] = 3523,
  [SMALL_STATE(129)] = 3539,
  [SMALL_STATE(130)] = 3555,
  [SMALL_STATE(131)] = 3576,
  [SMALL_STATE(132)] = 3591,
  [SMALL_STATE(133)] = 3608,
  [SMALL_STATE(134)] = 3623,
  [SMALL_STATE(135)] = 3638,
  [SMALL_STATE(136)] = 3653,
  [SMALL_STATE(137)] = 3668,
  [SMALL_STATE(138)] = 3683,
  [SMALL_STATE(139)] = 3698,
  [SMALL_STATE(140)] = 3719,
  [SMALL_STATE(141)] = 3734,
  [SMALL_STATE(142)] = 3749,
  [SMALL_STATE(143)] = 3766,
  [SMALL_STATE(144)] = 3783,
  [SMALL_STATE(145)] = 3814,
  [SMALL_STATE(146)] = 3829,
  [SMALL_STATE(147)] = 3844,
  [SMALL_STATE(148)] = 3861,
  [SMALL_STATE(149)] = 3878,
  [SMALL_STATE(150)] = 3893,
  [SMALL_STATE(151)] = 3907,
  [SMALL_STATE(152)] = 3921,
  [SMALL_STATE(153)] = 3949,
  [SMALL_STATE(154)] = 3963,
  [SMALL_STATE(155)] = 3979,
  [SMALL_STATE(156)] = 3993,
  [SMALL_STATE(157)] = 4007,
  [SMALL_STATE(158)] = 4023,
  [SMALL_STATE(159)] = 4037,
  [SMALL_STATE(160)] = 4051,
  [SMALL_STATE(161)] = 4065,
  [SMALL_STATE(162)] = 4079,
  [SMALL_STATE(163)] = 4093,
  [SMALL_STATE(164)] = 4107,
  [SMALL_STATE(165)] = 4121,
  [SMALL_STATE(166)] = 4138,
  [SMALL_STATE(167)] = 4152,
  [SMALL_STATE(168)] = 4172,
  [SMALL_STATE(169)] = 4192,
  [SMALL_STATE(170)] = 4212,
  [SMALL_STATE(171)] = 4232,
  [SMALL_STATE(172)] = 4254,
  [SMALL_STATE(173)] = 4268,
  [SMALL_STATE(174)] = 4290,
  [SMALL_STATE(175)] = 4312,
  [SMALL_STATE(176)] = 4332,
  [SMALL_STATE(177)] = 4352,
  [SMALL_STATE(178)] = 4374,
  [SMALL_STATE(179)] = 4396,
  [SMALL_STATE(180)] = 4416,
  [SMALL_STATE(181)] = 4432,
  [SMALL_STATE(182)] = 4448,
  [SMALL_STATE(183)] = 4468,
  [SMALL_STATE(184)] = 4481,
  [SMALL_STATE(185)] = 4494,
  [SMALL_STATE(186)] = 4507,
  [SMALL_STATE(187)] = 4520,
  [SMALL_STATE(188)] = 4535,
  [SMALL_STATE(189)] = 4548,
  [SMALL_STATE(190)] = 4561,
  [SMALL_STATE(191)] = 4574,
  [SMALL_STATE(192)] = 4587,
  [SMALL_STATE(193)] = 4600,
  [SMALL_STATE(194)] = 4613,
  [SMALL_STATE(195)] = 4628,
  [SMALL_STATE(196)] = 4641,
  [SMALL_STATE(197)] = 4654,
  [SMALL_STATE(198)] = 4667,
  [SMALL_STATE(199)] = 4680,
  [SMALL_STATE(200)] = 4692,
  [SMALL_STATE(201)] = 4706,
  [SMALL_STATE(202)] = 4716,
  [SMALL_STATE(203)] = 4728,
  [SMALL_STATE(204)] = 4740,
  [SMALL_STATE(205)] = 4750,
  [SMALL_STATE(206)] = 4760,
  [SMALL_STATE(207)] = 4767,
  [SMALL_STATE(208)] = 4776,
  [SMALL_STATE(209)] = 4785,
  [SMALL_STATE(210)] = 4794,
  [SMALL_STATE(211)] = 4803,
  [SMALL_STATE(212)] = 4810,
  [SMALL_STATE(213)] = 4821,
  [SMALL_STATE(214)] = 4832,
  [SMALL_STATE(215)] = 4841,
  [SMALL_STATE(216)] = 4850,
  [SMALL_STATE(217)] = 4863,
  [SMALL_STATE(218)] = 4872,
  [SMALL_STATE(219)] = 4881,
  [SMALL_STATE(220)] = 4890,
  [SMALL_STATE(221)] = 4899,
  [SMALL_STATE(222)] = 4906,
  [SMALL_STATE(223)] = 4917,
  [SMALL_STATE(224)] = 4926,
  [SMALL_STATE(225)] = 4937,
  [SMALL_STATE(226)] = 4948,
  [SMALL_STATE(227)] = 4957,
  [SMALL_STATE(228)] = 4966,
  [SMALL_STATE(229)] = 4977,
  [SMALL_STATE(230)] = 4986,
  [SMALL_STATE(231)] = 4993,
  [SMALL_STATE(232)] = 5000,
  [SMALL_STATE(233)] = 5009,
  [SMALL_STATE(234)] = 5016,
  [SMALL_STATE(235)] = 5025,
  [SMALL_STATE(236)] = 5034,
  [SMALL_STATE(237)] = 5043,
  [SMALL_STATE(238)] = 5052,
  [SMALL_STATE(239)] = 5063,
  [SMALL_STATE(240)] = 5070,
  [SMALL_STATE(241)] = 5077,
  [SMALL_STATE(242)] = 5084,
  [SMALL_STATE(243)] = 5093,
  [SMALL_STATE(244)] = 5106,
  [SMALL_STATE(245)] = 5119,
  [SMALL_STATE(246)] = 5132,
  [SMALL_STATE(247)] = 5145,
  [SMALL_STATE(248)] = 5158,
  [SMALL_STATE(249)] = 5171,
  [SMALL_STATE(250)] = 5184,
  [SMALL_STATE(251)] = 5197,
  [SMALL_STATE(252)] = 5208,
  [SMALL_STATE(253)] = 5217,
  [SMALL_STATE(254)] = 5228,
  [SMALL_STATE(255)] = 5241,
  [SMALL_STATE(256)] = 5250,
  [SMALL_STATE(257)] = 5259,
  [SMALL_STATE(258)] = 5268,
  [SMALL_STATE(259)] = 5279,
  [SMALL_STATE(260)] = 5288,
  [SMALL_STATE(261)] = 5301,
  [SMALL_STATE(262)] = 5308,
  [SMALL_STATE(263)] = 5317,
  [SMALL_STATE(264)] = 5324,
  [SMALL_STATE(265)] = 5331,
  [SMALL_STATE(266)] = 5340,
  [SMALL_STATE(267)] = 5349,
  [SMALL_STATE(268)] = 5358,
  [SMALL_STATE(269)] = 5367,
  [SMALL_STATE(270)] = 5376,
  [SMALL_STATE(271)] = 5383,
  [SMALL_STATE(272)] = 5392,
  [SMALL_STATE(273)] = 5403,
  [SMALL_STATE(274)] = 5412,
  [SMALL_STATE(275)] = 5421,
  [SMALL_STATE(276)] = 5430,
  [SMALL_STATE(277)] = 5439,
  [SMALL_STATE(278)] = 5446,
  [SMALL_STATE(279)] = 5455,
  [SMALL_STATE(280)] = 5466,
  [SMALL_STATE(281)] = 5475,
  [SMALL_STATE(282)] = 5484,
  [SMALL_STATE(283)] = 5497,
  [SMALL_STATE(284)] = 5506,
  [SMALL_STATE(285)] = 5513,
  [SMALL_STATE(286)] = 5520,
  [SMALL_STATE(287)] = 5529,
  [SMALL_STATE(288)] = 5536,
  [SMALL_STATE(289)] = 5543,
  [SMALL_STATE(290)] = 5552,
  [SMALL_STATE(291)] = 5560,
  [SMALL_STATE(292)] = 5570,
  [SMALL_STATE(293)] = 5576,
  [SMALL_STATE(294)] = 5586,
  [SMALL_STATE(295)] = 5596,
  [SMALL_STATE(296)] = 5606,
  [SMALL_STATE(297)] = 5616,
  [SMALL_STATE(298)] = 5626,
  [SMALL_STATE(299)] = 5636,
  [SMALL_STATE(300)] = 5646,
  [SMALL_STATE(301)] = 5654,
  [SMALL_STATE(302)] = 5664,
  [SMALL_STATE(303)] = 5674,
  [SMALL_STATE(304)] = 5684,
  [SMALL_STATE(305)] = 5694,
  [SMALL_STATE(306)] = 5702,
  [SMALL_STATE(307)] = 5712,
  [SMALL_STATE(308)] = 5722,
  [SMALL_STATE(309)] = 5732,
  [SMALL_STATE(310)] = 5742,
  [SMALL_STATE(311)] = 5752,
  [SMALL_STATE(312)] = 5760,
  [SMALL_STATE(313)] = 5766,
  [SMALL_STATE(314)] = 5774,
  [SMALL_STATE(315)] = 5780,
  [SMALL_STATE(316)] = 5788,
  [SMALL_STATE(317)] = 5796,
  [SMALL_STATE(318)] = 5801,
  [SMALL_STATE(319)] = 5808,
  [SMALL_STATE(320)] = 5813,
  [SMALL_STATE(321)] = 5820,
  [SMALL_STATE(322)] = 5825,
  [SMALL_STATE(323)] = 5830,
  [SMALL_STATE(324)] = 5837,
  [SMALL_STATE(325)] = 5842,
  [SMALL_STATE(326)] = 5849,
  [SMALL_STATE(327)] = 5854,
  [SMALL_STATE(328)] = 5861,
  [SMALL_STATE(329)] = 5868,
  [SMALL_STATE(330)] = 5873,
  [SMALL_STATE(331)] = 5880,
  [SMALL_STATE(332)] = 5885,
  [SMALL_STATE(333)] = 5892,
  [SMALL_STATE(334)] = 5897,
  [SMALL_STATE(335)] = 5902,
  [SMALL_STATE(336)] = 5907,
  [SMALL_STATE(337)] = 5912,
  [SMALL_STATE(338)] = 5917,
  [SMALL_STATE(339)] = 5922,
  [SMALL_STATE(340)] = 5927,
  [SMALL_STATE(341)] = 5932,
  [SMALL_STATE(342)] = 5937,
  [SMALL_STATE(343)] = 5942,
  [SMALL_STATE(344)] = 5947,
  [SMALL_STATE(345)] = 5952,
  [SMALL_STATE(346)] = 5957,
  [SMALL_STATE(347)] = 5964,
  [SMALL_STATE(348)] = 5969,
  [SMALL_STATE(349)] = 5976,
  [SMALL_STATE(350)] = 5981,
  [SMALL_STATE(351)] = 5985,
  [SMALL_STATE(352)] = 5989,
  [SMALL_STATE(353)] = 5993,
  [SMALL_STATE(354)] = 5997,
  [SMALL_STATE(355)] = 6001,
  [SMALL_STATE(356)] = 6005,
  [SMALL_STATE(357)] = 6009,
  [SMALL_STATE(358)] = 6013,
  [SMALL_STATE(359)] = 6017,
  [SMALL_STATE(360)] = 6021,
  [SMALL_STATE(361)] = 6025,
  [SMALL_STATE(362)] = 6029,
  [SMALL_STATE(363)] = 6033,
  [SMALL_STATE(364)] = 6037,
  [SMALL_STATE(365)] = 6041,
  [SMALL_STATE(366)] = 6045,
  [SMALL_STATE(367)] = 6049,
  [SMALL_STATE(368)] = 6053,
  [SMALL_STATE(369)] = 6057,
  [SMALL_STATE(370)] = 6061,
  [SMALL_STATE(371)] = 6065,
  [SMALL_STATE(372)] = 6069,
  [SMALL_STATE(373)] = 6073,
  [SMALL_STATE(374)] = 6077,
  [SMALL_STATE(375)] = 6081,
  [SMALL_STATE(376)] = 6085,
  [SMALL_STATE(377)] = 6089,
  [SMALL_STATE(378)] = 6093,
  [SMALL_STATE(379)] = 6097,
  [SMALL_STATE(380)] = 6101,
  [SMALL_STATE(381)] = 6105,
  [SMALL_STATE(382)] = 6109,
  [SMALL_STATE(383)] = 6113,
  [SMALL_STATE(384)] = 6117,
  [SMALL_STATE(385)] = 6121,
  [SMALL_STATE(386)] = 6125,
  [SMALL_STATE(387)] = 6129,
  [SMALL_STATE(388)] = 6133,
  [SMALL_STATE(389)] = 6137,
  [SMALL_STATE(390)] = 6141,
  [SMALL_STATE(391)] = 6145,
  [SMALL_STATE(392)] = 6149,
  [SMALL_STATE(393)] = 6153,
  [SMALL_STATE(394)] = 6157,
  [SMALL_STATE(395)] = 6161,
  [SMALL_STATE(396)] = 6165,
  [SMALL_STATE(397)] = 6169,
  [SMALL_STATE(398)] = 6173,
  [SMALL_STATE(399)] = 6177,
  [SMALL_STATE(400)] = 6181,
  [SMALL_STATE(401)] = 6185,
  [SMALL_STATE(402)] = 6189,
  [SMALL_STATE(403)] = 6193,
  [SMALL_STATE(404)] = 6197,
  [SMALL_STATE(405)] = 6201,
  [SMALL_STATE(406)] = 6205,
  [SMALL_STATE(407)] = 6209,
  [SMALL_STATE(408)] = 6213,
  [SMALL_STATE(409)] = 6217,
  [SMALL_STATE(410)] = 6221,
  [SMALL_STATE(411)] = 6225,
  [SMALL_STATE(412)] = 6229,
  [SMALL_STATE(413)] = 6233,
  [SMALL_STATE(414)] = 6237,
  [SMALL_STATE(415)] = 6241,
  [SMALL_STATE(416)] = 6245,
  [SMALL_STATE(417)] = 6249,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(383),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(152),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(122),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(126),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(139),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(330),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(16),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(16),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(216),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(32),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(32),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(254),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(120),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(120),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(390),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 4),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(111),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 5),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(345),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6), REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(166),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(393),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(241),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(391),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(328),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(416),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(199),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(202),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(305),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(385),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(323),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(228),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 12),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 9),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 3),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3), REDUCE(sym_template_pattern_CE, 3, .production_id = 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4, .production_id = 6),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 5, .production_id = 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 5, .production_id = 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(401),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 9),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 12),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(293),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(294),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(295),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(297),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(298),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 10),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 7),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 7),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 10),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 10),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 10),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 7),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3, .production_id = 5),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4, .production_id = 10),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4, .production_id = 5),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4, .production_id = 10),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 7),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 12),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 12),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 9),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 9),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
