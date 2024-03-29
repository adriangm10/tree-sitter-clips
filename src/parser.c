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
#define STATE_COUNT 397
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  anon_sym_deffacts = 16,
  anon_sym_deftemplate = 17,
  anon_sym_slot = 18,
  anon_sym_multislot = 19,
  anon_sym_default = 20,
  anon_sym_QMARKDERIVE = 21,
  anon_sym_QMARKNONE = 22,
  anon_sym_default_DASHdynamic = 23,
  anon_sym_type = 24,
  anon_sym_QMARKVARIABLE = 25,
  sym_allowed_type = 26,
  sym_boolean_symbol = 27,
  anon_sym_allowed_DASHsymbols = 28,
  anon_sym_allowed_DASHstrings = 29,
  anon_sym_allowed_DASHlexemes = 30,
  anon_sym_allowed_DASHintegers = 31,
  anon_sym_allowed_DASHfloats = 32,
  anon_sym_allowed_DASHnumbers = 33,
  anon_sym_allowed_DASHinstance_DASHnames = 34,
  anon_sym_allowed_DASHclasses = 35,
  anon_sym_allowed_DASHvalues = 36,
  anon_sym_range = 37,
  anon_sym_cardinality = 38,
  anon_sym_defrule = 39,
  anon_sym_EQ_GT = 40,
  anon_sym_declare = 41,
  anon_sym_salience = 42,
  anon_sym_auto_DASHfocus = 43,
  anon_sym_LT_DASH = 44,
  anon_sym_not = 45,
  anon_sym_and = 46,
  anon_sym_or = 47,
  anon_sym_logical = 48,
  anon_sym_test = 49,
  anon_sym_exists = 50,
  anon_sym_forall = 51,
  anon_sym_object = 52,
  anon_sym_is_DASHa = 53,
  anon_sym_name = 54,
  anon_sym_QMARK = 55,
  anon_sym_DOLLAR_QMARK = 56,
  anon_sym_AMP = 57,
  anon_sym_PIPE = 58,
  anon_sym_TILDE = 59,
  anon_sym_COLON = 60,
  anon_sym_EQ = 61,
  anon_sym_defglobal = 62,
  anon_sym_deffunction = 63,
  aux_sym_parameter_list_token1 = 64,
  anon_sym_defgeneric = 65,
  anon_sym_defmethod = 66,
  sym_program = 67,
  sym__construct = 68,
  sym__gap = 69,
  sym__expression = 70,
  sym__lexeme = 71,
  sym__constant = 72,
  sym__variable = 73,
  sym_function_call = 74,
  sym_loop_for_count = 75,
  sym_loop_control = 76,
  sym_deffacts_construct = 77,
  sym__rhs_pattern = 78,
  sym_ordered_rhs_pattern = 79,
  sym_template_rhs_pattern = 80,
  sym__rhs_slot = 81,
  sym_single_field_rhs_slot = 82,
  sym_multifield_rhs_slot = 83,
  sym__rhs_field = 84,
  sym_deftemplate_construct = 85,
  sym__slot_definition = 86,
  sym_single_slot_definition = 87,
  sym_multislot_definition = 88,
  sym__template_attribute = 89,
  sym_default_attribute = 90,
  sym__constraint_attribute = 91,
  sym_type_attribute = 92,
  sym_type_specification = 93,
  sym_allowed_constant_attribute = 94,
  sym_symbol_list = 95,
  sym_string_list = 96,
  sym_lexeme_list = 97,
  sym_integer_list = 98,
  sym_float_list = 99,
  sym_number_list = 100,
  sym_class_name_list = 101,
  sym_instance_list = 102,
  sym_value_list = 103,
  sym_range_attribute = 104,
  sym_range_specification = 105,
  sym_cardinality_attribute = 106,
  sym_cardinality_specification = 107,
  sym_defrule_construct = 108,
  sym_declaration = 109,
  sym_rule_property = 110,
  sym__conditional_element = 111,
  sym__pattern_CE = 112,
  sym_assigned_pattern_CE = 113,
  sym_not_CE = 114,
  sym_and_CE = 115,
  sym_or_CE = 116,
  sym_logical_CE = 117,
  sym_test_CE = 118,
  sym_exists_CE = 119,
  sym_forall_CE = 120,
  sym_ordered_pattern_CE = 121,
  sym_template_pattern_CE = 122,
  sym_object_pattern_CE = 123,
  sym_attribute_constraint = 124,
  sym_lhs_slot = 125,
  sym_constraint = 126,
  sym_connected_constraint = 127,
  sym_single_constraint = 128,
  sym_term = 129,
  sym_defglobal_construct = 130,
  sym__global_assignment = 131,
  sym_deffunction_construct = 132,
  sym_parameter_list = 133,
  sym_defgeneric_construct = 134,
  sym_defmethod_construct = 135,
  sym_parameter_restriction = 136,
  sym_wildcard_parameter_restriction = 137,
  sym_query = 138,
  aux_sym_program_repeat1 = 139,
  aux_sym_function_call_repeat1 = 140,
  aux_sym_deffacts_construct_repeat1 = 141,
  aux_sym_ordered_rhs_pattern_repeat1 = 142,
  aux_sym_template_rhs_pattern_repeat1 = 143,
  aux_sym_deftemplate_construct_repeat1 = 144,
  aux_sym_single_slot_definition_repeat1 = 145,
  aux_sym_type_specification_repeat1 = 146,
  aux_sym_symbol_list_repeat1 = 147,
  aux_sym_string_list_repeat1 = 148,
  aux_sym_lexeme_list_repeat1 = 149,
  aux_sym_integer_list_repeat1 = 150,
  aux_sym_float_list_repeat1 = 151,
  aux_sym_number_list_repeat1 = 152,
  aux_sym_class_name_list_repeat1 = 153,
  aux_sym_value_list_repeat1 = 154,
  aux_sym_defrule_construct_repeat1 = 155,
  aux_sym_declaration_repeat1 = 156,
  aux_sym_ordered_pattern_CE_repeat1 = 157,
  aux_sym_template_pattern_CE_repeat1 = 158,
  aux_sym_object_pattern_CE_repeat1 = 159,
  aux_sym_defglobal_construct_repeat1 = 160,
  aux_sym_parameter_list_repeat1 = 161,
  aux_sym_defmethod_construct_repeat1 = 162,
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
  [sym_loop_control] = "loop_control",
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
  [aux_sym_deffacts_construct_repeat1] = "deffacts_construct_repeat1",
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
  [sym_loop_control] = sym_loop_control,
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
  [aux_sym_deffacts_construct_repeat1] = aux_sym_deffacts_construct_repeat1,
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
  [sym_loop_control] = {
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
  [aux_sym_deffacts_construct_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 33,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
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
  [79] = 52,
  [80] = 33,
  [81] = 81,
  [82] = 82,
  [83] = 52,
  [84] = 62,
  [85] = 85,
  [86] = 86,
  [87] = 34,
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
  [108] = 105,
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
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 101,
  [124] = 124,
  [125] = 91,
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
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
  [167] = 91,
  [168] = 101,
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
  [250] = 95,
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
  [263] = 161,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 98,
  [272] = 94,
  [273] = 273,
  [274] = 96,
  [275] = 99,
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
  [287] = 269,
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
  [309] = 124,
  [310] = 310,
  [311] = 122,
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
  [323] = 320,
  [324] = 316,
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
  [371] = 111,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 112,
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
  [394] = 367,
  [395] = 395,
  [396] = 367,
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
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(503);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '~') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(503);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(503);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '~') ADVANCE(505);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ';') ADVANCE(420);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '~') ADVANCE(505);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(420);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(10)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '?') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(16)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(442);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(440);
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
      if (lookahead == '*') ADVANCE(311);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == 'D') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(473);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(501);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(309);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(460);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(459);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(458);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(458);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(458);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'Y') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'V') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 'X') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'X') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(104)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(105)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(237);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 171:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 185:
      if (lookahead == 'j') ADVANCE(153);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(194)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(227)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 294:
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 295:
      if (lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 296:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(471);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 299:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 300:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 308:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 309:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 310:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 311:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      if (lookahead == 11) SKIP(312)
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 316:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(420);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(420);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(420);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(420);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'N') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == '-') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == '-') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(368);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(337);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(420);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == '?') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'A') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'A') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'B') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'I') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'N') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'O') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'R') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'V') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'V') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == ']') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'j') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 's') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 't') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 't') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 't') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'x') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
          lookahead != '\n' &&
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
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 427:
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
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(99);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 438:
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
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 439:
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
          lookahead != '~') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(440);
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
    case 441:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 444:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 450:
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
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 451:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 452:
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
          lookahead != '~') ADVANCE(438);
      END_STATE();
    case 453:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 457:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 475:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 480:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 482:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 484:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 486:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 488:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 490:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 492:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 494:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 496:
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
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 498:
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
          lookahead != '~') ADVANCE(427);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 507:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 509:
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
          lookahead != '~') ADVANCE(420);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 312},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
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
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 312},
  [93] = {.lex_state = 312},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 104},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 105},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 312},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 312},
  [170] = {.lex_state = 312},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 312},
  [173] = {.lex_state = 312},
  [174] = {.lex_state = 312},
  [175] = {.lex_state = 312},
  [176] = {.lex_state = 312},
  [177] = {.lex_state = 312},
  [178] = {.lex_state = 312},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 312},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 312},
  [187] = {.lex_state = 312},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 312},
  [196] = {.lex_state = 312},
  [197] = {.lex_state = 312},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 312},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 312},
  [205] = {.lex_state = 312},
  [206] = {.lex_state = 312},
  [207] = {.lex_state = 312},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 312},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 312},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 312},
  [216] = {.lex_state = 312},
  [217] = {.lex_state = 312},
  [218] = {.lex_state = 312},
  [219] = {.lex_state = 312},
  [220] = {.lex_state = 312},
  [221] = {.lex_state = 312},
  [222] = {.lex_state = 312},
  [223] = {.lex_state = 312},
  [224] = {.lex_state = 312},
  [225] = {.lex_state = 312},
  [226] = {.lex_state = 312},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 312},
  [229] = {.lex_state = 312},
  [230] = {.lex_state = 312},
  [231] = {.lex_state = 312},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 312},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 312},
  [237] = {.lex_state = 312},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 312},
  [240] = {.lex_state = 312},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 14},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 14},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 17},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 15},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 227},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 194},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 194},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 2},
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
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 16},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 16},
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
    [sym_program] = STATE(382),
    [sym__construct] = STATE(93),
    [sym__gap] = STATE(93),
    [sym_deffacts_construct] = STATE(93),
    [sym_deftemplate_construct] = STATE(93),
    [sym_defrule_construct] = STATE(93),
    [sym_defglobal_construct] = STATE(93),
    [sym_deffunction_construct] = STATE(93),
    [sym_defgeneric_construct] = STATE(93),
    [sym_defmethod_construct] = STATE(93),
    [aux_sym_program_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_str_lit,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_EQ_GT,
    STATE(22), 1,
      sym_declaration,
    STATE(23), 14,
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
  [32] = 10,
    ACTIONS(22), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(24), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(30), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(3), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [71] = 11,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    STATE(7), 1,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(110), 1,
      sym_constraint,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [112] = 10,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(3), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [151] = 5,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_EQ_GT,
    STATE(19), 1,
      sym_declaration,
    STATE(20), 14,
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
  [180] = 10,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(3), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [219] = 4,
    ACTIONS(49), 1,
      sym_single_field_variable,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(8), 14,
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
  [246] = 10,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(3), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [285] = 10,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(9), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [324] = 10,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(111), 1,
      sym_connected_constraint,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(5), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [363] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_EQ_GT,
    STATE(8), 14,
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
  [389] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(8), 14,
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
  [415] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(8), 14,
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
  [441] = 5,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    STATE(45), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(71), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [469] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_EQ_GT,
    STATE(8), 14,
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
  [495] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(8), 14,
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
  [521] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(8), 14,
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
  [547] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_EQ_GT,
    STATE(12), 14,
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
  [573] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_EQ_GT,
    STATE(8), 14,
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
  [599] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(8), 14,
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
  [625] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
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
  [651] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_EQ_GT,
    STATE(8), 14,
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
  [677] = 9,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    STATE(250), 1,
      sym_term,
    STATE(274), 1,
      sym_single_constraint,
    STATE(275), 1,
      sym__constant,
    STATE(371), 1,
      sym_connected_constraint,
    STATE(381), 1,
      sym_constraint,
    ACTIONS(93), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(97), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(91), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [712] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(18), 14,
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
  [735] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(21), 14,
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
  [758] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(17), 14,
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
  [781] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(13), 14,
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
  [804] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(14), 14,
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
  [827] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [851] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [875] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(73), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(105), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [899] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [923] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(62), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(111), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [947] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [971] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [995] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(76), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(117), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1019] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1043] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1067] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(77), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(125), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1091] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1115] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(31), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(129), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1139] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1163] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(41), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(133), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1187] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1211] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1235] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1259] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(63), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(141), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1283] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1307] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(35), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(145), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1331] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1355] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(59), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(149), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1379] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(36), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(153), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1403] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(57), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(157), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1427] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(51), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1451] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(86), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(163), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1475] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1499] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1523] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1547] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(61), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(169), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1571] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1595] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1619] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1643] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(47), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(179), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1667] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(46), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(183), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1691] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(43), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(187), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1715] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1739] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(336), 13,
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
  [1761] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(39), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(191), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1785] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(38), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(195), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1809] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1833] = 4,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(199), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1857] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1881] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(25), 13,
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
  [1903] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(49), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(209), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1927] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1951] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1975] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(71), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(215), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1999] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(33), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(217), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2023] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2047] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(45), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(71), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2071] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(67), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(223), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2095] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(80), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(227), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2119] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2143] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(30), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(233), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2167] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(72), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2191] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(84), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(237), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2215] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(58), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      aux_sym_function_call_repeat1,
    ACTIONS(241), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2239] = 5,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(127), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
    ACTIONS(245), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2264] = 14,
    ACTIONS(251), 1,
      anon_sym_default,
    ACTIONS(253), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(255), 1,
      anon_sym_type,
    ACTIONS(257), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(259), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(261), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(263), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(265), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(267), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(269), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(271), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(273), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(275), 1,
      anon_sym_range,
    ACTIONS(277), 1,
      anon_sym_cardinality,
  [2307] = 1,
    ACTIONS(279), 14,
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
  [2324] = 5,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      sym__ws,
    ACTIONS(286), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(92), 10,
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
  [2349] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__ws,
    ACTIONS(296), 1,
      sym_comment,
    STATE(92), 10,
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
  [2374] = 1,
    ACTIONS(298), 14,
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
  [2391] = 1,
    ACTIONS(300), 14,
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
  [2408] = 2,
    ACTIONS(304), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(302), 12,
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
  [2427] = 4,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(102), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(306), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2450] = 1,
    ACTIONS(310), 14,
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
  [2467] = 1,
    ACTIONS(312), 14,
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
  [2484] = 4,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(102), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(306), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2507] = 1,
    ACTIONS(316), 14,
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
  [2524] = 4,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(102), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(318), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2547] = 3,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(100), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(326), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2567] = 3,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(383), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
    ACTIONS(328), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2587] = 7,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    STATE(95), 1,
      sym_term,
    STATE(96), 1,
      sym_single_constraint,
    STATE(99), 1,
      sym__constant,
    STATE(112), 1,
      sym_connected_constraint,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2615] = 3,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(109), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
    ACTIONS(332), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2635] = 3,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(326), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
    ACTIONS(334), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2655] = 7,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    STATE(250), 1,
      sym_term,
    STATE(274), 1,
      sym_single_constraint,
    STATE(275), 1,
      sym__constant,
    STATE(379), 1,
      sym_connected_constraint,
    ACTIONS(97), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(91), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2683] = 3,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(361), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
    ACTIONS(336), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2703] = 2,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 11,
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
  [2720] = 1,
    ACTIONS(343), 12,
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
  [2735] = 1,
    ACTIONS(345), 12,
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
  [2750] = 11,
    ACTIONS(347), 1,
      sym_symbol,
    ACTIONS(349), 1,
      sym_variable_symbol,
    ACTIONS(351), 1,
      anon_sym_declare,
    ACTIONS(353), 1,
      anon_sym_not,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(359), 1,
      anon_sym_logical,
    ACTIONS(361), 1,
      anon_sym_test,
    ACTIONS(363), 1,
      anon_sym_exists,
    ACTIONS(365), 1,
      anon_sym_forall,
    ACTIONS(367), 1,
      anon_sym_object,
  [2784] = 3,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(116), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2801] = 3,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(117), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2818] = 3,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2835] = 3,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2852] = 4,
    STATE(94), 1,
      sym_term,
    STATE(99), 1,
      sym__constant,
    ACTIONS(41), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(33), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2871] = 4,
    STATE(272), 1,
      sym_term,
    STATE(275), 1,
      sym__constant,
    ACTIONS(97), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(91), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2890] = 10,
    ACTIONS(347), 1,
      sym_symbol,
    ACTIONS(349), 1,
      sym_variable_symbol,
    ACTIONS(353), 1,
      anon_sym_not,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(359), 1,
      anon_sym_logical,
    ACTIONS(361), 1,
      anon_sym_test,
    ACTIONS(363), 1,
      anon_sym_exists,
    ACTIONS(365), 1,
      anon_sym_forall,
    ACTIONS(367), 1,
      anon_sym_object,
  [2921] = 3,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2938] = 1,
    ACTIONS(384), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2950] = 1,
    ACTIONS(316), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2962] = 1,
    ACTIONS(386), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2974] = 1,
    ACTIONS(279), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2986] = 1,
    ACTIONS(388), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2998] = 2,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [3012] = 4,
    ACTIONS(397), 1,
      anon_sym_QMARKVARIABLE,
    STATE(347), 1,
      sym_value_list,
    STATE(133), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(395), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3029] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_wildcard_parameter_restriction,
    STATE(144), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3049] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym_wildcard_parameter_restriction,
    STATE(132), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3069] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      sym_wildcard_parameter_restriction,
    STATE(152), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3089] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      sym_wildcard_parameter_restriction,
    STATE(152), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3109] = 3,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(413), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3123] = 7,
    ACTIONS(417), 1,
      sym_symbol,
    ACTIONS(419), 1,
      sym_global_variable,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_symbol_list_repeat1,
    STATE(357), 1,
      sym_query,
    STATE(369), 1,
      sym_function_call,
  [3145] = 7,
    ACTIONS(417), 1,
      sym_symbol,
    ACTIONS(419), 1,
      sym_global_variable,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_symbol_list_repeat1,
    STATE(353), 1,
      sym_query,
    STATE(369), 1,
      sym_function_call,
  [3167] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      sym_wildcard_parameter_restriction,
    STATE(131), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3187] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym_wildcard_parameter_restriction,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3207] = 4,
    ACTIONS(431), 1,
      sym_str_lit,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(157), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3223] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(437), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3237] = 7,
    ACTIONS(419), 1,
      sym_global_variable,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      sym_symbol,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_symbol_list_repeat1,
    STATE(369), 1,
      sym_function_call,
    STATE(378), 1,
      sym_query,
  [3259] = 7,
    ACTIONS(419), 1,
      sym_global_variable,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      sym_symbol,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_symbol_list_repeat1,
    STATE(369), 1,
      sym_function_call,
    STATE(375), 1,
      sym_query,
  [3281] = 7,
    ACTIONS(450), 1,
      anon_sym_deffacts,
    ACTIONS(452), 1,
      anon_sym_deftemplate,
    ACTIONS(454), 1,
      anon_sym_defrule,
    ACTIONS(456), 1,
      anon_sym_defglobal,
    ACTIONS(458), 1,
      anon_sym_deffunction,
    ACTIONS(460), 1,
      anon_sym_defgeneric,
    ACTIONS(462), 1,
      anon_sym_defmethod,
  [3303] = 4,
    ACTIONS(464), 1,
      sym_str_lit,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(148), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3319] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_wildcard_parameter_restriction,
    STATE(152), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3339] = 6,
    ACTIONS(399), 1,
      sym_single_field_variable,
    ACTIONS(401), 1,
      sym_multifield_variable,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_wildcard_parameter_restriction,
    STATE(152), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3359] = 4,
    ACTIONS(476), 1,
      anon_sym_QMARKVARIABLE,
    STATE(347), 1,
      sym_lexeme_list,
    ACTIONS(474), 2,
      sym_str_lit,
      sym_symbol,
    STATE(162), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3374] = 3,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(147), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3387] = 3,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(151), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3400] = 3,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(154), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3413] = 3,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(147), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3426] = 3,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(151), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3439] = 4,
    ACTIONS(494), 1,
      sym_single_field_variable,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3454] = 3,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(156), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3467] = 3,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(151), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3480] = 3,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(155), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3493] = 3,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(155), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3506] = 3,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(147), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3519] = 3,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(150), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3532] = 2,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(214), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [3542] = 3,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 2,
      sym_str_lit,
      sym_symbol,
    STATE(160), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3554] = 3,
    ACTIONS(526), 1,
      sym_symbol,
    STATE(161), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(529), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3566] = 3,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(531), 2,
      sym_str_lit,
      sym_symbol,
    STATE(160), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3578] = 4,
    ACTIONS(535), 1,
      sym_variable_symbol,
    ACTIONS(537), 1,
      sym_global_variable,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(171), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3592] = 1,
    ACTIONS(541), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3599] = 2,
    ACTIONS(543), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(545), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3608] = 3,
    ACTIONS(537), 1,
      sym_global_variable,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(203), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3619] = 1,
    ACTIONS(549), 4,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3626] = 1,
    ACTIONS(551), 4,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3633] = 2,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(555), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3642] = 2,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(559), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3651] = 3,
    ACTIONS(537), 1,
      sym_global_variable,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(209), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3662] = 2,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(565), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3671] = 2,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(569), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3680] = 2,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(573), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3689] = 2,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(577), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3698] = 2,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(581), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3707] = 2,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(585), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3716] = 2,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(589), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3725] = 1,
    ACTIONS(591), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3732] = 1,
    ACTIONS(593), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3739] = 2,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(597), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3748] = 3,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [3759] = 1,
    ACTIONS(603), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3766] = 3,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [3777] = 1,
    ACTIONS(610), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3784] = 2,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(614), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3793] = 2,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(618), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3802] = 3,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(188), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [3813] = 1,
    ACTIONS(625), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3820] = 1,
    ACTIONS(627), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3827] = 1,
    ACTIONS(629), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3834] = 1,
    ACTIONS(631), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3841] = 1,
    ACTIONS(633), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3848] = 1,
    ACTIONS(635), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3855] = 2,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(639), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3864] = 2,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(643), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3873] = 2,
    ACTIONS(645), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(647), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3882] = 3,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(188), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [3893] = 3,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [3904] = 2,
    ACTIONS(658), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(660), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3913] = 3,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [3924] = 1,
    ACTIONS(666), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3931] = 3,
    ACTIONS(537), 1,
      sym_global_variable,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(209), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3942] = 2,
    ACTIONS(670), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(672), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3951] = 2,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(676), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3960] = 2,
    ACTIONS(678), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(680), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3969] = 2,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(684), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3978] = 1,
    ACTIONS(686), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3985] = 3,
    ACTIONS(688), 1,
      sym_global_variable,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(209), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3996] = 2,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(695), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4005] = 1,
    ACTIONS(697), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4012] = 1,
    ACTIONS(699), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4019] = 2,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(703), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4028] = 1,
    ACTIONS(705), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4035] = 2,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(709), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4044] = 2,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(713), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4053] = 2,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(717), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4062] = 2,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(721), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4071] = 2,
    ACTIONS(723), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(725), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4080] = 2,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(729), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4089] = 2,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(733), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4098] = 2,
    ACTIONS(735), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(737), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4107] = 2,
    ACTIONS(739), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(741), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4116] = 2,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(745), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4125] = 2,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(749), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4134] = 2,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(753), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4143] = 1,
    ACTIONS(755), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4150] = 2,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(759), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4159] = 2,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(763), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4168] = 2,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(767), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4177] = 2,
    ACTIONS(769), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(771), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4186] = 3,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(201), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4197] = 2,
    ACTIONS(775), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(777), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4206] = 1,
    ACTIONS(779), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4213] = 3,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(182), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4224] = 2,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(785), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4233] = 2,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(789), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4242] = 1,
    ACTIONS(791), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4249] = 2,
    ACTIONS(793), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(795), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4258] = 2,
    ACTIONS(797), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(799), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4267] = 4,
    ACTIONS(801), 1,
      sym_variable_symbol,
    ACTIONS(803), 1,
      anon_sym_QMARKVARIABLE,
    STATE(258), 1,
      aux_sym_class_name_list_repeat1,
    STATE(347), 1,
      sym_class_name_list,
  [4280] = 4,
    ACTIONS(805), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(807), 1,
      sym_allowed_type,
    STATE(276), 1,
      aux_sym_type_specification_repeat1,
    STATE(349), 1,
      sym_type_specification,
  [4293] = 4,
    ACTIONS(809), 1,
      sym_symbol,
    ACTIONS(811), 1,
      anon_sym_QMARKVARIABLE,
    STATE(270), 1,
      aux_sym_symbol_list_repeat1,
    STATE(347), 1,
      sym_symbol_list,
  [4306] = 4,
    ACTIONS(813), 1,
      sym_str_lit,
    ACTIONS(815), 1,
      anon_sym_QMARKVARIABLE,
    STATE(267), 1,
      aux_sym_string_list_repeat1,
    STATE(347), 1,
      sym_string_list,
  [4319] = 4,
    ACTIONS(817), 1,
      sym_variable_symbol,
    ACTIONS(819), 1,
      anon_sym_QMARKVARIABLE,
    STATE(259), 1,
      aux_sym_class_name_list_repeat1,
    STATE(347), 1,
      sym_instance_list,
  [4332] = 4,
    ACTIONS(821), 1,
      sym_integer,
    ACTIONS(823), 1,
      anon_sym_QMARKVARIABLE,
    STATE(262), 1,
      aux_sym_integer_list_repeat1,
    STATE(347), 1,
      sym_integer_list,
  [4345] = 4,
    ACTIONS(825), 1,
      sym_float,
    ACTIONS(827), 1,
      anon_sym_QMARKVARIABLE,
    STATE(261), 1,
      aux_sym_float_list_repeat1,
    STATE(347), 1,
      sym_float_list,
  [4358] = 4,
    ACTIONS(829), 1,
      sym_number,
    ACTIONS(831), 1,
      anon_sym_QMARKVARIABLE,
    STATE(260), 1,
      aux_sym_number_list_repeat1,
    STATE(347), 1,
      sym_number_list,
  [4371] = 3,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(835), 1,
      aux_sym_parameter_list_token1,
    STATE(249), 1,
      aux_sym_parameter_list_repeat1,
  [4381] = 1,
    ACTIONS(838), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4387] = 3,
    ACTIONS(840), 1,
      sym_single_field_variable,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      sym_parameter_list,
  [4397] = 2,
    STATE(256), 1,
      sym_range_specification,
    ACTIONS(844), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [4405] = 2,
    STATE(254), 1,
      sym_cardinality_specification,
    ACTIONS(846), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [4413] = 2,
    STATE(360), 1,
      sym_cardinality_specification,
    ACTIONS(846), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [4421] = 1,
    ACTIONS(848), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [4427] = 2,
    STATE(359), 1,
      sym_range_specification,
    ACTIONS(844), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [4435] = 1,
    ACTIONS(850), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [4441] = 3,
    ACTIONS(852), 1,
      sym_variable_symbol,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_class_name_list_repeat1,
  [4451] = 3,
    ACTIONS(852), 1,
      sym_variable_symbol,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_class_name_list_repeat1,
  [4461] = 3,
    ACTIONS(858), 1,
      sym_number,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_number_list_repeat1,
  [4471] = 3,
    ACTIONS(862), 1,
      sym_float,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_float_list_repeat1,
  [4481] = 3,
    ACTIONS(866), 1,
      sym_integer,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_integer_list_repeat1,
  [4491] = 3,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 1,
      sym_symbol,
    STATE(263), 1,
      aux_sym_symbol_list_repeat1,
  [4501] = 2,
    ACTIONS(873), 1,
      sym_variable_symbol,
    ACTIONS(875), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [4509] = 3,
    ACTIONS(877), 1,
      sym_variable_symbol,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_class_name_list_repeat1,
  [4519] = 1,
    ACTIONS(882), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [4525] = 3,
    ACTIONS(884), 1,
      sym_str_lit,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_string_list_repeat1,
  [4535] = 2,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    STATE(198), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [4543] = 3,
    ACTIONS(888), 1,
      sym_integer,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_loop_control,
  [4553] = 3,
    ACTIONS(892), 1,
      sym_symbol,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_symbol_list_repeat1,
  [4563] = 1,
    ACTIONS(896), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4569] = 1,
    ACTIONS(898), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4575] = 3,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      aux_sym_parameter_list_token1,
    STATE(249), 1,
      aux_sym_parameter_list_repeat1,
  [4585] = 2,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4593] = 1,
    ACTIONS(908), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4599] = 3,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      sym_allowed_type,
    STATE(277), 1,
      aux_sym_type_specification_repeat1,
  [4609] = 3,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 1,
      sym_allowed_type,
    STATE(277), 1,
      aux_sym_type_specification_repeat1,
  [4619] = 3,
    ACTIONS(840), 1,
      sym_single_field_variable,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_parameter_list,
  [4629] = 3,
    ACTIONS(921), 1,
      sym_str_lit,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_string_list_repeat1,
  [4639] = 3,
    ACTIONS(926), 1,
      sym_integer,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_integer_list_repeat1,
  [4649] = 3,
    ACTIONS(931), 1,
      sym_float,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_float_list_repeat1,
  [4659] = 3,
    ACTIONS(936), 1,
      sym_number,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_number_list_repeat1,
  [4669] = 3,
    ACTIONS(941), 1,
      sym_single_field_variable,
    ACTIONS(943), 1,
      sym_multifield_variable,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [4679] = 3,
    ACTIONS(347), 1,
      sym_symbol,
    ACTIONS(349), 1,
      sym_variable_symbol,
    ACTIONS(367), 1,
      anon_sym_object,
  [4689] = 3,
    ACTIONS(947), 1,
      sym_str_lit,
    ACTIONS(949), 1,
      sym_integer,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
  [4699] = 3,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      aux_sym_parameter_list_token1,
    STATE(273), 1,
      aux_sym_parameter_list_repeat1,
  [4709] = 3,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_integer,
    STATE(87), 1,
      sym_loop_control,
  [4719] = 3,
    ACTIONS(941), 1,
      sym_single_field_variable,
    ACTIONS(959), 1,
      sym_multifield_variable,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [4729] = 2,
    ACTIONS(963), 1,
      anon_sym_slot,
    ACTIONS(965), 1,
      anon_sym_multislot,
  [4736] = 1,
    ACTIONS(967), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4741] = 1,
    ACTIONS(969), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4746] = 2,
    ACTIONS(971), 1,
      sym_str_lit,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [4753] = 1,
    ACTIONS(975), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4758] = 2,
    ACTIONS(977), 1,
      sym_symbol,
    ACTIONS(979), 1,
      sym_variable_symbol,
  [4765] = 1,
    ACTIONS(981), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4770] = 2,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      aux_sym_parameter_list_token1,
  [4777] = 2,
    ACTIONS(987), 1,
      sym_str_lit,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
  [4784] = 1,
    ACTIONS(991), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4789] = 1,
    ACTIONS(993), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4794] = 1,
    ACTIONS(995), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4799] = 1,
    ACTIONS(997), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4804] = 1,
    ACTIONS(999), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4809] = 1,
    ACTIONS(1001), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4814] = 1,
    ACTIONS(1003), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4819] = 2,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      aux_sym_parameter_list_token1,
  [4826] = 1,
    ACTIONS(1009), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4831] = 2,
    ACTIONS(1011), 1,
      sym_str_lit,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
  [4838] = 1,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4843] = 1,
    ACTIONS(1017), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [4848] = 1,
    ACTIONS(1019), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4853] = 1,
    ACTIONS(1021), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [4858] = 2,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(1023), 1,
      aux_sym_parameter_list_token1,
  [4865] = 2,
    ACTIONS(1025), 1,
      sym_single_field_variable,
    ACTIONS(1027), 1,
      sym_multifield_variable,
  [4872] = 1,
    ACTIONS(1029), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4877] = 2,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    STATE(344), 1,
      sym_function_call,
  [4884] = 2,
    ACTIONS(1033), 1,
      sym_symbol,
    ACTIONS(1035), 1,
      anon_sym_loop_DASHfor_DASHcount,
  [4891] = 2,
    ACTIONS(1037), 1,
      anon_sym_salience,
    ACTIONS(1039), 1,
      anon_sym_auto_DASHfocus,
  [4898] = 1,
    ACTIONS(1041), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4903] = 1,
    ACTIONS(1043), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4908] = 2,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_function_call,
  [4915] = 1,
    ACTIONS(1045), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4920] = 1,
    ACTIONS(1047), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4925] = 2,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_function_call,
  [4932] = 2,
    ACTIONS(1051), 1,
      sym_symbol,
    ACTIONS(1053), 1,
      anon_sym_loop_DASHfor_DASHcount,
  [4939] = 1,
    ACTIONS(1055), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4944] = 1,
    ACTIONS(1057), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [4949] = 1,
    ACTIONS(1059), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4954] = 1,
    ACTIONS(1061), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4959] = 1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [4963] = 1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [4967] = 1,
    ACTIONS(1067), 1,
      sym_variable_symbol,
  [4971] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [4975] = 1,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
  [4979] = 1,
    ACTIONS(1071), 1,
      sym_single_field_variable,
  [4983] = 1,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [4987] = 1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [4991] = 1,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [4995] = 1,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [4999] = 1,
    ACTIONS(1077), 1,
      anon_sym_LT_DASH,
  [5003] = 1,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [5007] = 1,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [5011] = 1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [5015] = 1,
    ACTIONS(1081), 1,
      sym_boolean_symbol,
  [5019] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [5023] = 1,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [5027] = 1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [5031] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [5035] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [5039] = 1,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
  [5043] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [5047] = 1,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
  [5051] = 1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
  [5055] = 1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
  [5059] = 1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [5063] = 1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [5067] = 1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [5071] = 1,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [5075] = 1,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
  [5079] = 1,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
  [5083] = 1,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [5087] = 1,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
  [5091] = 1,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [5095] = 1,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [5099] = 1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [5107] = 1,
    ACTIONS(1119), 1,
      sym_variable_symbol,
  [5111] = 1,
    ACTIONS(1121), 1,
      sym_symbol,
  [5115] = 1,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
  [5119] = 1,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
  [5123] = 1,
    ACTIONS(941), 1,
      sym_single_field_variable,
  [5127] = 1,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
  [5131] = 1,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
  [5135] = 1,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
  [5139] = 1,
    ACTIONS(1133), 1,
      sym_variable_symbol,
  [5143] = 1,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
  [5147] = 1,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
  [5151] = 1,
    ACTIONS(1139), 1,
      sym_variable_symbol,
  [5155] = 1,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
  [5159] = 1,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
  [5163] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [5167] = 1,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
  [5171] = 1,
    ACTIONS(1147), 1,
      ts_builtin_sym_end,
  [5175] = 1,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
  [5179] = 1,
    ACTIONS(1151), 1,
      anon_sym_EQ,
  [5183] = 1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [5187] = 1,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
  [5191] = 1,
    ACTIONS(1155), 1,
      sym_symbol,
  [5195] = 1,
    ACTIONS(1157), 1,
      sym_symbol,
  [5199] = 1,
    ACTIONS(1159), 1,
      sym_symbol,
  [5203] = 1,
    ACTIONS(1161), 1,
      sym_symbol,
  [5207] = 1,
    ACTIONS(1163), 1,
      sym_variable_symbol,
  [5211] = 1,
    ACTIONS(1165), 1,
      sym_variable_symbol,
  [5215] = 1,
    ACTIONS(1025), 1,
      sym_single_field_variable,
  [5219] = 1,
    ACTIONS(1167), 1,
      sym_symbol,
  [5223] = 1,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
  [5227] = 1,
    ACTIONS(1171), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 415,
  [SMALL_STATE(15)] = 441,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 521,
  [SMALL_STATE(19)] = 547,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 625,
  [SMALL_STATE(23)] = 651,
  [SMALL_STATE(24)] = 677,
  [SMALL_STATE(25)] = 712,
  [SMALL_STATE(26)] = 735,
  [SMALL_STATE(27)] = 758,
  [SMALL_STATE(28)] = 781,
  [SMALL_STATE(29)] = 804,
  [SMALL_STATE(30)] = 827,
  [SMALL_STATE(31)] = 851,
  [SMALL_STATE(32)] = 875,
  [SMALL_STATE(33)] = 899,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 947,
  [SMALL_STATE(36)] = 971,
  [SMALL_STATE(37)] = 995,
  [SMALL_STATE(38)] = 1019,
  [SMALL_STATE(39)] = 1043,
  [SMALL_STATE(40)] = 1067,
  [SMALL_STATE(41)] = 1091,
  [SMALL_STATE(42)] = 1115,
  [SMALL_STATE(43)] = 1139,
  [SMALL_STATE(44)] = 1163,
  [SMALL_STATE(45)] = 1187,
  [SMALL_STATE(46)] = 1211,
  [SMALL_STATE(47)] = 1235,
  [SMALL_STATE(48)] = 1259,
  [SMALL_STATE(49)] = 1283,
  [SMALL_STATE(50)] = 1307,
  [SMALL_STATE(51)] = 1331,
  [SMALL_STATE(52)] = 1355,
  [SMALL_STATE(53)] = 1379,
  [SMALL_STATE(54)] = 1403,
  [SMALL_STATE(55)] = 1427,
  [SMALL_STATE(56)] = 1451,
  [SMALL_STATE(57)] = 1475,
  [SMALL_STATE(58)] = 1499,
  [SMALL_STATE(59)] = 1523,
  [SMALL_STATE(60)] = 1547,
  [SMALL_STATE(61)] = 1571,
  [SMALL_STATE(62)] = 1595,
  [SMALL_STATE(63)] = 1619,
  [SMALL_STATE(64)] = 1643,
  [SMALL_STATE(65)] = 1667,
  [SMALL_STATE(66)] = 1691,
  [SMALL_STATE(67)] = 1715,
  [SMALL_STATE(68)] = 1739,
  [SMALL_STATE(69)] = 1761,
  [SMALL_STATE(70)] = 1785,
  [SMALL_STATE(71)] = 1809,
  [SMALL_STATE(72)] = 1833,
  [SMALL_STATE(73)] = 1857,
  [SMALL_STATE(74)] = 1881,
  [SMALL_STATE(75)] = 1903,
  [SMALL_STATE(76)] = 1927,
  [SMALL_STATE(77)] = 1951,
  [SMALL_STATE(78)] = 1975,
  [SMALL_STATE(79)] = 1999,
  [SMALL_STATE(80)] = 2023,
  [SMALL_STATE(81)] = 2047,
  [SMALL_STATE(82)] = 2071,
  [SMALL_STATE(83)] = 2095,
  [SMALL_STATE(84)] = 2119,
  [SMALL_STATE(85)] = 2143,
  [SMALL_STATE(86)] = 2167,
  [SMALL_STATE(87)] = 2191,
  [SMALL_STATE(88)] = 2215,
  [SMALL_STATE(89)] = 2239,
  [SMALL_STATE(90)] = 2264,
  [SMALL_STATE(91)] = 2307,
  [SMALL_STATE(92)] = 2324,
  [SMALL_STATE(93)] = 2349,
  [SMALL_STATE(94)] = 2374,
  [SMALL_STATE(95)] = 2391,
  [SMALL_STATE(96)] = 2408,
  [SMALL_STATE(97)] = 2427,
  [SMALL_STATE(98)] = 2450,
  [SMALL_STATE(99)] = 2467,
  [SMALL_STATE(100)] = 2484,
  [SMALL_STATE(101)] = 2507,
  [SMALL_STATE(102)] = 2524,
  [SMALL_STATE(103)] = 2547,
  [SMALL_STATE(104)] = 2567,
  [SMALL_STATE(105)] = 2587,
  [SMALL_STATE(106)] = 2615,
  [SMALL_STATE(107)] = 2635,
  [SMALL_STATE(108)] = 2655,
  [SMALL_STATE(109)] = 2683,
  [SMALL_STATE(110)] = 2703,
  [SMALL_STATE(111)] = 2720,
  [SMALL_STATE(112)] = 2735,
  [SMALL_STATE(113)] = 2750,
  [SMALL_STATE(114)] = 2784,
  [SMALL_STATE(115)] = 2801,
  [SMALL_STATE(116)] = 2818,
  [SMALL_STATE(117)] = 2835,
  [SMALL_STATE(118)] = 2852,
  [SMALL_STATE(119)] = 2871,
  [SMALL_STATE(120)] = 2890,
  [SMALL_STATE(121)] = 2921,
  [SMALL_STATE(122)] = 2938,
  [SMALL_STATE(123)] = 2950,
  [SMALL_STATE(124)] = 2962,
  [SMALL_STATE(125)] = 2974,
  [SMALL_STATE(126)] = 2986,
  [SMALL_STATE(127)] = 2998,
  [SMALL_STATE(128)] = 3012,
  [SMALL_STATE(129)] = 3029,
  [SMALL_STATE(130)] = 3049,
  [SMALL_STATE(131)] = 3069,
  [SMALL_STATE(132)] = 3089,
  [SMALL_STATE(133)] = 3109,
  [SMALL_STATE(134)] = 3123,
  [SMALL_STATE(135)] = 3145,
  [SMALL_STATE(136)] = 3167,
  [SMALL_STATE(137)] = 3187,
  [SMALL_STATE(138)] = 3207,
  [SMALL_STATE(139)] = 3223,
  [SMALL_STATE(140)] = 3237,
  [SMALL_STATE(141)] = 3259,
  [SMALL_STATE(142)] = 3281,
  [SMALL_STATE(143)] = 3303,
  [SMALL_STATE(144)] = 3319,
  [SMALL_STATE(145)] = 3339,
  [SMALL_STATE(146)] = 3359,
  [SMALL_STATE(147)] = 3374,
  [SMALL_STATE(148)] = 3387,
  [SMALL_STATE(149)] = 3400,
  [SMALL_STATE(150)] = 3413,
  [SMALL_STATE(151)] = 3426,
  [SMALL_STATE(152)] = 3439,
  [SMALL_STATE(153)] = 3454,
  [SMALL_STATE(154)] = 3467,
  [SMALL_STATE(155)] = 3480,
  [SMALL_STATE(156)] = 3493,
  [SMALL_STATE(157)] = 3506,
  [SMALL_STATE(158)] = 3519,
  [SMALL_STATE(159)] = 3532,
  [SMALL_STATE(160)] = 3542,
  [SMALL_STATE(161)] = 3554,
  [SMALL_STATE(162)] = 3566,
  [SMALL_STATE(163)] = 3578,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3599,
  [SMALL_STATE(166)] = 3608,
  [SMALL_STATE(167)] = 3619,
  [SMALL_STATE(168)] = 3626,
  [SMALL_STATE(169)] = 3633,
  [SMALL_STATE(170)] = 3642,
  [SMALL_STATE(171)] = 3651,
  [SMALL_STATE(172)] = 3662,
  [SMALL_STATE(173)] = 3671,
  [SMALL_STATE(174)] = 3680,
  [SMALL_STATE(175)] = 3689,
  [SMALL_STATE(176)] = 3698,
  [SMALL_STATE(177)] = 3707,
  [SMALL_STATE(178)] = 3716,
  [SMALL_STATE(179)] = 3725,
  [SMALL_STATE(180)] = 3732,
  [SMALL_STATE(181)] = 3739,
  [SMALL_STATE(182)] = 3748,
  [SMALL_STATE(183)] = 3759,
  [SMALL_STATE(184)] = 3766,
  [SMALL_STATE(185)] = 3777,
  [SMALL_STATE(186)] = 3784,
  [SMALL_STATE(187)] = 3793,
  [SMALL_STATE(188)] = 3802,
  [SMALL_STATE(189)] = 3813,
  [SMALL_STATE(190)] = 3820,
  [SMALL_STATE(191)] = 3827,
  [SMALL_STATE(192)] = 3834,
  [SMALL_STATE(193)] = 3841,
  [SMALL_STATE(194)] = 3848,
  [SMALL_STATE(195)] = 3855,
  [SMALL_STATE(196)] = 3864,
  [SMALL_STATE(197)] = 3873,
  [SMALL_STATE(198)] = 3882,
  [SMALL_STATE(199)] = 3893,
  [SMALL_STATE(200)] = 3904,
  [SMALL_STATE(201)] = 3913,
  [SMALL_STATE(202)] = 3924,
  [SMALL_STATE(203)] = 3931,
  [SMALL_STATE(204)] = 3942,
  [SMALL_STATE(205)] = 3951,
  [SMALL_STATE(206)] = 3960,
  [SMALL_STATE(207)] = 3969,
  [SMALL_STATE(208)] = 3978,
  [SMALL_STATE(209)] = 3985,
  [SMALL_STATE(210)] = 3996,
  [SMALL_STATE(211)] = 4005,
  [SMALL_STATE(212)] = 4012,
  [SMALL_STATE(213)] = 4019,
  [SMALL_STATE(214)] = 4028,
  [SMALL_STATE(215)] = 4035,
  [SMALL_STATE(216)] = 4044,
  [SMALL_STATE(217)] = 4053,
  [SMALL_STATE(218)] = 4062,
  [SMALL_STATE(219)] = 4071,
  [SMALL_STATE(220)] = 4080,
  [SMALL_STATE(221)] = 4089,
  [SMALL_STATE(222)] = 4098,
  [SMALL_STATE(223)] = 4107,
  [SMALL_STATE(224)] = 4116,
  [SMALL_STATE(225)] = 4125,
  [SMALL_STATE(226)] = 4134,
  [SMALL_STATE(227)] = 4143,
  [SMALL_STATE(228)] = 4150,
  [SMALL_STATE(229)] = 4159,
  [SMALL_STATE(230)] = 4168,
  [SMALL_STATE(231)] = 4177,
  [SMALL_STATE(232)] = 4186,
  [SMALL_STATE(233)] = 4197,
  [SMALL_STATE(234)] = 4206,
  [SMALL_STATE(235)] = 4213,
  [SMALL_STATE(236)] = 4224,
  [SMALL_STATE(237)] = 4233,
  [SMALL_STATE(238)] = 4242,
  [SMALL_STATE(239)] = 4249,
  [SMALL_STATE(240)] = 4258,
  [SMALL_STATE(241)] = 4267,
  [SMALL_STATE(242)] = 4280,
  [SMALL_STATE(243)] = 4293,
  [SMALL_STATE(244)] = 4306,
  [SMALL_STATE(245)] = 4319,
  [SMALL_STATE(246)] = 4332,
  [SMALL_STATE(247)] = 4345,
  [SMALL_STATE(248)] = 4358,
  [SMALL_STATE(249)] = 4371,
  [SMALL_STATE(250)] = 4381,
  [SMALL_STATE(251)] = 4387,
  [SMALL_STATE(252)] = 4397,
  [SMALL_STATE(253)] = 4405,
  [SMALL_STATE(254)] = 4413,
  [SMALL_STATE(255)] = 4421,
  [SMALL_STATE(256)] = 4427,
  [SMALL_STATE(257)] = 4435,
  [SMALL_STATE(258)] = 4441,
  [SMALL_STATE(259)] = 4451,
  [SMALL_STATE(260)] = 4461,
  [SMALL_STATE(261)] = 4471,
  [SMALL_STATE(262)] = 4481,
  [SMALL_STATE(263)] = 4491,
  [SMALL_STATE(264)] = 4501,
  [SMALL_STATE(265)] = 4509,
  [SMALL_STATE(266)] = 4519,
  [SMALL_STATE(267)] = 4525,
  [SMALL_STATE(268)] = 4535,
  [SMALL_STATE(269)] = 4543,
  [SMALL_STATE(270)] = 4553,
  [SMALL_STATE(271)] = 4563,
  [SMALL_STATE(272)] = 4569,
  [SMALL_STATE(273)] = 4575,
  [SMALL_STATE(274)] = 4585,
  [SMALL_STATE(275)] = 4593,
  [SMALL_STATE(276)] = 4599,
  [SMALL_STATE(277)] = 4609,
  [SMALL_STATE(278)] = 4619,
  [SMALL_STATE(279)] = 4629,
  [SMALL_STATE(280)] = 4639,
  [SMALL_STATE(281)] = 4649,
  [SMALL_STATE(282)] = 4659,
  [SMALL_STATE(283)] = 4669,
  [SMALL_STATE(284)] = 4679,
  [SMALL_STATE(285)] = 4689,
  [SMALL_STATE(286)] = 4699,
  [SMALL_STATE(287)] = 4709,
  [SMALL_STATE(288)] = 4719,
  [SMALL_STATE(289)] = 4729,
  [SMALL_STATE(290)] = 4736,
  [SMALL_STATE(291)] = 4741,
  [SMALL_STATE(292)] = 4746,
  [SMALL_STATE(293)] = 4753,
  [SMALL_STATE(294)] = 4758,
  [SMALL_STATE(295)] = 4765,
  [SMALL_STATE(296)] = 4770,
  [SMALL_STATE(297)] = 4777,
  [SMALL_STATE(298)] = 4784,
  [SMALL_STATE(299)] = 4789,
  [SMALL_STATE(300)] = 4794,
  [SMALL_STATE(301)] = 4799,
  [SMALL_STATE(302)] = 4804,
  [SMALL_STATE(303)] = 4809,
  [SMALL_STATE(304)] = 4814,
  [SMALL_STATE(305)] = 4819,
  [SMALL_STATE(306)] = 4826,
  [SMALL_STATE(307)] = 4831,
  [SMALL_STATE(308)] = 4838,
  [SMALL_STATE(309)] = 4843,
  [SMALL_STATE(310)] = 4848,
  [SMALL_STATE(311)] = 4853,
  [SMALL_STATE(312)] = 4858,
  [SMALL_STATE(313)] = 4865,
  [SMALL_STATE(314)] = 4872,
  [SMALL_STATE(315)] = 4877,
  [SMALL_STATE(316)] = 4884,
  [SMALL_STATE(317)] = 4891,
  [SMALL_STATE(318)] = 4898,
  [SMALL_STATE(319)] = 4903,
  [SMALL_STATE(320)] = 4908,
  [SMALL_STATE(321)] = 4915,
  [SMALL_STATE(322)] = 4920,
  [SMALL_STATE(323)] = 4925,
  [SMALL_STATE(324)] = 4932,
  [SMALL_STATE(325)] = 4939,
  [SMALL_STATE(326)] = 4944,
  [SMALL_STATE(327)] = 4949,
  [SMALL_STATE(328)] = 4954,
  [SMALL_STATE(329)] = 4959,
  [SMALL_STATE(330)] = 4963,
  [SMALL_STATE(331)] = 4967,
  [SMALL_STATE(332)] = 4971,
  [SMALL_STATE(333)] = 4975,
  [SMALL_STATE(334)] = 4979,
  [SMALL_STATE(335)] = 4983,
  [SMALL_STATE(336)] = 4987,
  [SMALL_STATE(337)] = 4991,
  [SMALL_STATE(338)] = 4995,
  [SMALL_STATE(339)] = 4999,
  [SMALL_STATE(340)] = 5003,
  [SMALL_STATE(341)] = 5007,
  [SMALL_STATE(342)] = 5011,
  [SMALL_STATE(343)] = 5015,
  [SMALL_STATE(344)] = 5019,
  [SMALL_STATE(345)] = 5023,
  [SMALL_STATE(346)] = 5027,
  [SMALL_STATE(347)] = 5031,
  [SMALL_STATE(348)] = 5035,
  [SMALL_STATE(349)] = 5039,
  [SMALL_STATE(350)] = 5043,
  [SMALL_STATE(351)] = 5047,
  [SMALL_STATE(352)] = 5051,
  [SMALL_STATE(353)] = 5055,
  [SMALL_STATE(354)] = 5059,
  [SMALL_STATE(355)] = 5063,
  [SMALL_STATE(356)] = 5067,
  [SMALL_STATE(357)] = 5071,
  [SMALL_STATE(358)] = 5075,
  [SMALL_STATE(359)] = 5079,
  [SMALL_STATE(360)] = 5083,
  [SMALL_STATE(361)] = 5087,
  [SMALL_STATE(362)] = 5091,
  [SMALL_STATE(363)] = 5095,
  [SMALL_STATE(364)] = 5099,
  [SMALL_STATE(365)] = 5103,
  [SMALL_STATE(366)] = 5107,
  [SMALL_STATE(367)] = 5111,
  [SMALL_STATE(368)] = 5115,
  [SMALL_STATE(369)] = 5119,
  [SMALL_STATE(370)] = 5123,
  [SMALL_STATE(371)] = 5127,
  [SMALL_STATE(372)] = 5131,
  [SMALL_STATE(373)] = 5135,
  [SMALL_STATE(374)] = 5139,
  [SMALL_STATE(375)] = 5143,
  [SMALL_STATE(376)] = 5147,
  [SMALL_STATE(377)] = 5151,
  [SMALL_STATE(378)] = 5155,
  [SMALL_STATE(379)] = 5159,
  [SMALL_STATE(380)] = 5163,
  [SMALL_STATE(381)] = 5167,
  [SMALL_STATE(382)] = 5171,
  [SMALL_STATE(383)] = 5175,
  [SMALL_STATE(384)] = 5179,
  [SMALL_STATE(385)] = 5183,
  [SMALL_STATE(386)] = 5187,
  [SMALL_STATE(387)] = 5191,
  [SMALL_STATE(388)] = 5195,
  [SMALL_STATE(389)] = 5199,
  [SMALL_STATE(390)] = 5203,
  [SMALL_STATE(391)] = 5207,
  [SMALL_STATE(392)] = 5211,
  [SMALL_STATE(393)] = 5215,
  [SMALL_STATE(394)] = 5219,
  [SMALL_STATE(395)] = 5223,
  [SMALL_STATE(396)] = 5227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(99),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(111),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(118),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(323),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(339),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(72),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(316),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(102),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(367),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1), SHIFT(328),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(90),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_control, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(298),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(139),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(289),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2), SHIFT_REPEAT(294),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(238),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(393),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(366),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(160),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(161),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexeme_list, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 11),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(331),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(317),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(264),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(384),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 11),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 8),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 8),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(370),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(263),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2), SHIFT_REPEAT(265),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_list, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(277),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(279),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(280),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(281),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(282),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 5),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 9),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 5),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 9),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 9),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 9),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 11),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 11),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 8),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 8),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
