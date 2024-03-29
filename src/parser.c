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
#define STATE_COUNT 380
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  anon_sym_deffacts = 15,
  anon_sym_deftemplate = 16,
  anon_sym_slot = 17,
  anon_sym_multislot = 18,
  anon_sym_default = 19,
  anon_sym_QMARKDERIVE = 20,
  anon_sym_QMARKNONE = 21,
  anon_sym_default_DASHdynamic = 22,
  anon_sym_type = 23,
  anon_sym_QMARKVARIABLE = 24,
  sym_allowed_type = 25,
  sym_boolean_symbol = 26,
  anon_sym_allowed_DASHsymbols = 27,
  anon_sym_allowed_DASHstrings = 28,
  anon_sym_allowed_DASHlexemes = 29,
  anon_sym_allowed_DASHintegers = 30,
  anon_sym_allowed_DASHfloats = 31,
  anon_sym_allowed_DASHnumbers = 32,
  anon_sym_allowed_DASHinstance_DASHnames = 33,
  anon_sym_allowed_DASHclasses = 34,
  anon_sym_allowed_DASHvalues = 35,
  anon_sym_range = 36,
  anon_sym_cardinality = 37,
  anon_sym_defrule = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_declare = 40,
  anon_sym_salience = 41,
  anon_sym_auto_DASHfocus = 42,
  anon_sym_LT_DASH = 43,
  anon_sym_not = 44,
  anon_sym_and = 45,
  anon_sym_or = 46,
  anon_sym_logical = 47,
  anon_sym_test = 48,
  anon_sym_exists = 49,
  anon_sym_forall = 50,
  anon_sym_object = 51,
  anon_sym_is_DASHa = 52,
  anon_sym_name = 53,
  anon_sym_QMARK = 54,
  anon_sym_DOLLAR_QMARK = 55,
  anon_sym_AMP = 56,
  anon_sym_PIPE = 57,
  anon_sym_TILDE = 58,
  anon_sym_COLON = 59,
  anon_sym_EQ = 60,
  anon_sym_defglobal = 61,
  anon_sym_deffunction = 62,
  aux_sym_parameter_list_token1 = 63,
  anon_sym_defgeneric = 64,
  anon_sym_defmethod = 65,
  sym_program = 66,
  sym__construct = 67,
  sym__gap = 68,
  sym__expression = 69,
  sym__lexeme = 70,
  sym__constant = 71,
  sym__variable = 72,
  sym_function_call = 73,
  sym_deffacts_construct = 74,
  sym__rhs_pattern = 75,
  sym_ordered_rhs_pattern = 76,
  sym_template_rhs_pattern = 77,
  sym__rhs_slot = 78,
  sym_single_field_rhs_slot = 79,
  sym_multifield_rhs_slot = 80,
  sym__rhs_field = 81,
  sym_deftemplate_construct = 82,
  sym__slot_definition = 83,
  sym_single_slot_definition = 84,
  sym_multislot_definition = 85,
  sym__template_attribute = 86,
  sym_default_attribute = 87,
  sym__constraint_attribute = 88,
  sym_type_attribute = 89,
  sym_type_specification = 90,
  sym_allowed_constant_attribute = 91,
  sym_symbol_list = 92,
  sym_string_list = 93,
  sym_lexeme_list = 94,
  sym_integer_list = 95,
  sym_float_list = 96,
  sym_number_list = 97,
  sym_class_name_list = 98,
  sym_instance_list = 99,
  sym_value_list = 100,
  sym_range_attribute = 101,
  sym_range_specification = 102,
  sym_cardinality_attribute = 103,
  sym_cardinality_specification = 104,
  sym_defrule_construct = 105,
  sym_declaration = 106,
  sym_rule_property = 107,
  sym__conditional_element = 108,
  sym__pattern_CE = 109,
  sym_assigned_pattern_CE = 110,
  sym_not_CE = 111,
  sym_and_CE = 112,
  sym_or_CE = 113,
  sym_logical_CE = 114,
  sym_test_CE = 115,
  sym_exists_CE = 116,
  sym_forall_CE = 117,
  sym_ordered_pattern_CE = 118,
  sym_template_pattern_CE = 119,
  sym_object_pattern_CE = 120,
  sym_attribute_constraint = 121,
  sym_lhs_slot = 122,
  sym_constraint = 123,
  sym_connected_constraint = 124,
  sym_single_constraint = 125,
  sym_term = 126,
  sym_defglobal_construct = 127,
  sym__global_assignment = 128,
  sym_deffunction_construct = 129,
  sym_parameter_list = 130,
  sym_defgeneric_construct = 131,
  sym_defmethod_construct = 132,
  sym_parameter_restriction = 133,
  sym_wildcard_parameter_restriction = 134,
  sym_query = 135,
  aux_sym_program_repeat1 = 136,
  aux_sym_function_call_repeat1 = 137,
  aux_sym_deffacts_construct_repeat1 = 138,
  aux_sym_ordered_rhs_pattern_repeat1 = 139,
  aux_sym_template_rhs_pattern_repeat1 = 140,
  aux_sym_deftemplate_construct_repeat1 = 141,
  aux_sym_single_slot_definition_repeat1 = 142,
  aux_sym_type_specification_repeat1 = 143,
  aux_sym_symbol_list_repeat1 = 144,
  aux_sym_string_list_repeat1 = 145,
  aux_sym_lexeme_list_repeat1 = 146,
  aux_sym_integer_list_repeat1 = 147,
  aux_sym_float_list_repeat1 = 148,
  aux_sym_number_list_repeat1 = 149,
  aux_sym_class_name_list_repeat1 = 150,
  aux_sym_value_list_repeat1 = 151,
  aux_sym_defrule_construct_repeat1 = 152,
  aux_sym_declaration_repeat1 = 153,
  aux_sym_ordered_pattern_CE_repeat1 = 154,
  aux_sym_template_pattern_CE_repeat1 = 155,
  aux_sym_object_pattern_CE_repeat1 = 156,
  aux_sym_defglobal_construct_repeat1 = 157,
  aux_sym_parameter_list_repeat1 = 158,
  aux_sym_defmethod_construct_repeat1 = 159,
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
  [59] = 59,
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
  [72] = 45,
  [73] = 73,
  [74] = 45,
  [75] = 75,
  [76] = 55,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 55,
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
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
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
  [114] = 113,
  [115] = 115,
  [116] = 116,
  [117] = 79,
  [118] = 80,
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
  [164] = 79,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 80,
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
  [250] = 87,
  [251] = 251,
  [252] = 252,
  [253] = 41,
  [254] = 82,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 89,
  [260] = 260,
  [261] = 44,
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
  [276] = 154,
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
  [298] = 280,
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
  [360] = 103,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 106,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 353,
  [379] = 353,
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
      if (eof) ADVANCE(302);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '&') ADVANCE(477);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(480);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(482);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == '[') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '|') ADVANCE(478);
      if (lookahead == '~') ADVANCE(479);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(477);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '|') ADVANCE(478);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '&') ADVANCE(477);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '|') ADVANCE(478);
      if (lookahead == '~') ADVANCE(479);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ';') ADVANCE(396);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '?') ADVANCE(297);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '~') ADVANCE(479);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(396);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(10)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '?') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(16)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(486);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(416);
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
      if (lookahead == '*') ADVANCE(300);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == 'D') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(452);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(213);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(447);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(475);
      END_STATE();
    case 31:
      if (lookahead == '?') ADVANCE(298);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(32)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(434);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(432);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(433);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(430);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(432);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(432);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(432);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(432);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(432);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == 'Y') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'V') ADVANCE(42);
      END_STATE();
    case 95:
      if (lookahead == 'X') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'X') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(102)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(103)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 165:
      if (lookahead == 'f') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 'j') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(221)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 284:
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(445);
      END_STATE();
    case 286:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 287:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 288:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 297:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 298:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 299:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 300:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 301:
      if (eof) ADVANCE(302);
      if (lookahead == 11) SKIP(301)
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 305:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(396);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(396);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '?') ADVANCE(395);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(396);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(396);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead == 'D') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(355);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(327);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(396);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'B') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 388:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 396:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_symbol);
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
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'm') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_variable_symbol);
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
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 403:
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
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 414:
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
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 415:
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
          lookahead != '~') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(416);
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
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 424:
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
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 425:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 426:
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
          lookahead != '~') ADVANCE(414);
      END_STATE();
    case 427:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 431:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 449:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 454:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 456:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 458:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 460:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 462:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 464:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 466:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 468:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 470:
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
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 472:
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
          lookahead != '~') ADVANCE(403);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 481:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 483:
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
          lookahead != '~') ADVANCE(396);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 301},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 301},
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
  [64] = {.lex_state = 301},
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
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 102},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 301},
  [156] = {.lex_state = 301},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 301},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 301},
  [170] = {.lex_state = 301},
  [171] = {.lex_state = 301},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 301},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 301},
  [177] = {.lex_state = 301},
  [178] = {.lex_state = 301},
  [179] = {.lex_state = 301},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 301},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 301},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 301},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 301},
  [201] = {.lex_state = 301},
  [202] = {.lex_state = 301},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 301},
  [205] = {.lex_state = 301},
  [206] = {.lex_state = 301},
  [207] = {.lex_state = 301},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 301},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 301},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 301},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 301},
  [218] = {.lex_state = 301},
  [219] = {.lex_state = 301},
  [220] = {.lex_state = 301},
  [221] = {.lex_state = 301},
  [222] = {.lex_state = 301},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 301},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 301},
  [230] = {.lex_state = 301},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 301},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 14},
  [239] = {.lex_state = 32},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 221},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 17},
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
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 2},
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
  [371] = {.lex_state = 16},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 16},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_instance_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_single_field_variable] = ACTIONS(1),
    [sym_multifield_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_program] = STATE(334),
    [sym__construct] = STATE(46),
    [sym__gap] = STATE(46),
    [sym_deffacts_construct] = STATE(46),
    [sym_deftemplate_construct] = STATE(46),
    [sym_defrule_construct] = STATE(46),
    [sym_defglobal_construct] = STATE(46),
    [sym_deffunction_construct] = STATE(46),
    [sym_defgeneric_construct] = STATE(46),
    [sym_defmethod_construct] = STATE(46),
    [aux_sym_program_repeat1] = STATE(46),
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
    STATE(13), 1,
      sym_declaration,
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
  [32] = 10,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [71] = 10,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [110] = 5,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_EQ_GT,
    STATE(17), 1,
      sym_declaration,
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
  [139] = 10,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(8), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [178] = 10,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
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
  [217] = 10,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [256] = 11,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    STATE(105), 1,
      sym_constraint,
    ACTIONS(23), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [297] = 10,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_TILDE,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(103), 1,
      sym_connected_constraint,
    ACTIONS(46), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(52), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(10), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(41), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [336] = 4,
    ACTIONS(55), 1,
      sym_single_field_variable,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(11), 14,
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
  [363] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_EQ_GT,
    STATE(11), 14,
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
    ACTIONS(65), 1,
      anon_sym_EQ_GT,
    STATE(22), 14,
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
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(11), 14,
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
  [441] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(11), 14,
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
  [467] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(11), 14,
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
  [493] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_EQ_GT,
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
  [519] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_EQ_GT,
    STATE(11), 14,
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
  [545] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(11), 14,
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
  [571] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(11), 14,
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
  [597] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_EQ_GT,
    STATE(11), 14,
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
  [623] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_EQ_GT,
    STATE(11), 14,
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
  [649] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
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
  [672] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(19), 14,
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
  [695] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(15), 14,
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
  [718] = 5,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    STATE(75), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(83), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [745] = 3,
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
  [768] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
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
  [791] = 9,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    STATE(250), 1,
      sym_term,
    STATE(253), 1,
      sym__constant,
    STATE(259), 1,
      sym_single_constraint,
    STATE(360), 1,
      sym_connected_constraint,
    STATE(373), 1,
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
  [826] = 3,
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
  [848] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(28), 13,
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
  [870] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [893] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [916] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [939] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(56), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(107), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [962] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [985] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(97), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(111), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1008] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(42), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(115), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1031] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1054] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(94), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(119), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1077] = 1,
    ACTIONS(123), 14,
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
  [1094] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1117] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1140] = 1,
    ACTIONS(127), 14,
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
  [1157] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1180] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__ws,
    ACTIONS(135), 1,
      sym_comment,
    STATE(64), 10,
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
  [1205] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(63), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(137), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1228] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(84), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(141), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1251] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1274] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1297] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(33), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(147), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1320] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(70), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(151), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1343] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(86), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(155), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1366] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(75), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(83), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1389] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(45), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1412] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1435] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(92), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(165), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1458] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(71), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(169), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1481] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(34), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(171), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1504] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1527] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(66), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(175), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1550] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(36), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(179), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1573] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1596] = 5,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      sym__ws,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(64), 10,
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
  [1621] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(39), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(194), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1644] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1667] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1690] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(92), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(165), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1713] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(43), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(202), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1736] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1759] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1782] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1805] = 4,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(210), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1828] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1851] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1874] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(74), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(222), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1897] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(67), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(226), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1920] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(50), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(230), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [1943] = 1,
    ACTIONS(234), 14,
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
  [1960] = 1,
    ACTIONS(236), 14,
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
  [1977] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(72), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(238), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2000] = 1,
    ACTIONS(242), 14,
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
  [2017] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(49), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(244), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2040] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2063] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(96), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(248), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2086] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2109] = 1,
    ACTIONS(254), 14,
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
  [2126] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(32), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(256), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2149] = 2,
    ACTIONS(260), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(258), 12,
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
  [2168] = 14,
    ACTIONS(262), 1,
      anon_sym_default,
    ACTIONS(264), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(266), 1,
      anon_sym_type,
    ACTIONS(268), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(270), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(272), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(274), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(276), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(278), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(280), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(282), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(284), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(286), 1,
      anon_sym_range,
    ACTIONS(288), 1,
      anon_sym_cardinality,
  [2211] = 5,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(116), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
    ACTIONS(290), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2236] = 4,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(92), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(294), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2259] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(98), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(302), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2282] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2305] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(60), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(308), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2328] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2351] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2374] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(73), 5,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      aux_sym_function_call_repeat1,
    ACTIONS(99), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2397] = 7,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    STATE(250), 1,
      sym_term,
    STATE(253), 1,
      sym__constant,
    STATE(259), 1,
      sym_single_constraint,
    STATE(368), 1,
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
  [2425] = 7,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    STATE(41), 1,
      sym__constant,
    STATE(87), 1,
      sym_term,
    STATE(89), 1,
      sym_single_constraint,
    STATE(106), 1,
      sym_connected_constraint,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2453] = 3,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    STATE(68), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(312), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2473] = 3,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(296), 4,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(314), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2492] = 1,
    ACTIONS(318), 12,
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
  [2507] = 3,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(367), 4,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(320), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [2526] = 2,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 11,
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
  [2543] = 1,
    ACTIONS(327), 12,
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
  [2558] = 11,
    ACTIONS(329), 1,
      sym_symbol,
    ACTIONS(331), 1,
      sym_variable_symbol,
    ACTIONS(333), 1,
      anon_sym_declare,
    ACTIONS(335), 1,
      anon_sym_not,
    ACTIONS(337), 1,
      anon_sym_and,
    ACTIONS(339), 1,
      anon_sym_or,
    ACTIONS(341), 1,
      anon_sym_logical,
    ACTIONS(343), 1,
      anon_sym_test,
    ACTIONS(345), 1,
      anon_sym_exists,
    ACTIONS(347), 1,
      anon_sym_forall,
    ACTIONS(349), 1,
      anon_sym_object,
  [2592] = 3,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(111), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2609] = 3,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(108), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2626] = 3,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2643] = 3,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(111), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2660] = 10,
    ACTIONS(329), 1,
      sym_symbol,
    ACTIONS(331), 1,
      sym_variable_symbol,
    ACTIONS(335), 1,
      anon_sym_not,
    ACTIONS(337), 1,
      anon_sym_and,
    ACTIONS(339), 1,
      anon_sym_or,
    ACTIONS(341), 1,
      anon_sym_logical,
    ACTIONS(343), 1,
      anon_sym_test,
    ACTIONS(345), 1,
      anon_sym_exists,
    ACTIONS(347), 1,
      anon_sym_forall,
    ACTIONS(349), 1,
      anon_sym_object,
  [2691] = 4,
    STATE(253), 1,
      sym__constant,
    STATE(254), 1,
      sym_term,
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
  [2710] = 4,
    STATE(41), 1,
      sym__constant,
    STATE(82), 1,
      sym_term,
    ACTIONS(27), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2729] = 3,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(111), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [2746] = 2,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [2760] = 1,
    ACTIONS(234), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2772] = 1,
    ACTIONS(236), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2784] = 4,
    ACTIONS(373), 1,
      anon_sym_QMARKVARIABLE,
    STATE(342), 1,
      sym_value_list,
    STATE(136), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(371), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [2801] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym_wildcard_parameter_restriction,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2821] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_wildcard_parameter_restriction,
    STATE(124), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2841] = 4,
    ACTIONS(385), 1,
      sym_str_lit,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(141), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [2857] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_wildcard_parameter_restriction,
    STATE(120), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2877] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_wildcard_parameter_restriction,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2897] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym_wildcard_parameter_restriction,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2917] = 7,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym_symbol,
    ACTIONS(399), 1,
      sym_global_variable,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_symbol_list_repeat1,
    STATE(320), 1,
      sym_function_call,
    STATE(329), 1,
      sym_query,
  [2939] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_wildcard_parameter_restriction,
    STATE(133), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [2959] = 7,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_global_variable,
    ACTIONS(405), 1,
      sym_symbol,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_symbol_list_repeat1,
    STATE(318), 1,
      sym_query,
    STATE(320), 1,
      sym_function_call,
  [2981] = 3,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(129), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(409), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [2995] = 7,
    ACTIONS(414), 1,
      anon_sym_deffacts,
    ACTIONS(416), 1,
      anon_sym_deftemplate,
    ACTIONS(418), 1,
      anon_sym_defrule,
    ACTIONS(420), 1,
      anon_sym_defglobal,
    ACTIONS(422), 1,
      anon_sym_deffunction,
    ACTIONS(424), 1,
      anon_sym_defgeneric,
    ACTIONS(426), 1,
      anon_sym_defmethod,
  [3017] = 4,
    ACTIONS(428), 1,
      sym_str_lit,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(148), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3033] = 7,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_global_variable,
    ACTIONS(434), 1,
      sym_symbol,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_symbol_list_repeat1,
    STATE(320), 1,
      sym_function_call,
    STATE(359), 1,
      sym_query,
  [3055] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      sym_wildcard_parameter_restriction,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3075] = 7,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_global_variable,
    ACTIONS(434), 1,
      sym_symbol,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_symbol_list_repeat1,
    STATE(320), 1,
      sym_function_call,
    STATE(369), 1,
      sym_query,
  [3097] = 6,
    ACTIONS(375), 1,
      sym_single_field_variable,
    ACTIONS(377), 1,
      sym_multifield_variable,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      sym_wildcard_parameter_restriction,
    STATE(125), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3117] = 3,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(129), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(444), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3131] = 3,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(139), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3144] = 3,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(144), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3157] = 3,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(139), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3170] = 4,
    ACTIONS(461), 1,
      anon_sym_QMARKVARIABLE,
    STATE(342), 1,
      sym_lexeme_list,
    ACTIONS(459), 2,
      sym_str_lit,
      sym_symbol,
    STATE(150), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3185] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(142), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3198] = 3,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(142), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3211] = 3,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(143), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3224] = 3,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(143), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [3237] = 4,
    ACTIONS(477), 1,
      sym_single_field_variable,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(145), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [3252] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(147), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3265] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(142), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [3278] = 3,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(139), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3291] = 3,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(137), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [3304] = 3,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 2,
      sym_str_lit,
      sym_symbol,
    STATE(153), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3316] = 4,
    ACTIONS(497), 1,
      sym_variable_symbol,
    ACTIONS(499), 1,
      sym_global_variable,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3330] = 2,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(228), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [3340] = 3,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 2,
      sym_str_lit,
      sym_symbol,
    STATE(153), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [3352] = 3,
    ACTIONS(510), 1,
      sym_symbol,
    STATE(154), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(513), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3364] = 2,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(517), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3373] = 2,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(521), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3382] = 3,
    ACTIONS(499), 1,
      sym_global_variable,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(237), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3393] = 2,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(527), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3402] = 1,
    ACTIONS(529), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3409] = 3,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [3420] = 2,
    ACTIONS(535), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(537), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3429] = 1,
    ACTIONS(539), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3436] = 1,
    ACTIONS(541), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3443] = 1,
    ACTIONS(543), 4,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3450] = 2,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(547), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3459] = 2,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(551), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3468] = 2,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(555), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3477] = 2,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(559), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3486] = 2,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(563), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3495] = 2,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(567), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3504] = 2,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(571), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3513] = 3,
    ACTIONS(499), 1,
      sym_global_variable,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [3524] = 2,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(577), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3533] = 1,
    ACTIONS(579), 4,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3540] = 2,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(583), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3549] = 2,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(587), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3558] = 2,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(591), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3567] = 2,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(595), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3576] = 2,
    ACTIONS(597), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(599), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3585] = 2,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(603), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3594] = 3,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(160), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [3605] = 2,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(609), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3614] = 1,
    ACTIONS(611), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3621] = 2,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(615), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3630] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(213), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [3641] = 1,
    ACTIONS(621), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3648] = 3,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(187), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [3659] = 2,
    ACTIONS(628), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(630), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3668] = 2,
    ACTIONS(632), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(634), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3677] = 3,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(190), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [3688] = 1,
    ACTIONS(641), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3695] = 1,
    ACTIONS(643), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3702] = 1,
    ACTIONS(645), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3709] = 1,
    ACTIONS(647), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3716] = 1,
    ACTIONS(649), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3723] = 1,
    ACTIONS(651), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3730] = 2,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(655), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3739] = 1,
    ACTIONS(657), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3746] = 3,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [3757] = 2,
    ACTIONS(664), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(666), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3766] = 2,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(670), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3775] = 2,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(674), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3784] = 1,
    ACTIONS(676), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3791] = 2,
    ACTIONS(678), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(680), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3800] = 2,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(684), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3809] = 2,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(688), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3818] = 2,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(692), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3827] = 1,
    ACTIONS(694), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3834] = 2,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(698), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3843] = 3,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(190), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [3854] = 2,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(706), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3863] = 1,
    ACTIONS(708), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3870] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(187), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [3881] = 1,
    ACTIONS(712), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [3888] = 2,
    ACTIONS(714), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(716), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3897] = 2,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(720), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3906] = 2,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(724), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3915] = 2,
    ACTIONS(726), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(728), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3924] = 2,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(732), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3933] = 2,
    ACTIONS(734), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(736), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3942] = 2,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(740), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3951] = 2,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(744), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3960] = 1,
    ACTIONS(746), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3967] = 2,
    ACTIONS(748), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(750), 2,
      sym_comment,
      anon_sym_LPAREN,
  [3976] = 4,
    ACTIONS(752), 1,
      sym_variable_symbol,
    ACTIONS(754), 1,
      anon_sym_QMARKVARIABLE,
    STATE(255), 1,
      aux_sym_class_name_list_repeat1,
    STATE(342), 1,
      sym_class_name_list,
  [3989] = 4,
    ACTIONS(756), 1,
      sym_variable_symbol,
    ACTIONS(758), 1,
      anon_sym_QMARKVARIABLE,
    STATE(252), 1,
      aux_sym_class_name_list_repeat1,
    STATE(342), 1,
      sym_instance_list,
  [4002] = 1,
    ACTIONS(760), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4009] = 1,
    ACTIONS(762), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4016] = 2,
    ACTIONS(764), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(766), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4025] = 2,
    ACTIONS(768), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(770), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4034] = 4,
    ACTIONS(772), 1,
      sym_number,
    ACTIONS(774), 1,
      anon_sym_QMARKVARIABLE,
    STATE(251), 1,
      aux_sym_number_list_repeat1,
    STATE(342), 1,
      sym_number_list,
  [4047] = 4,
    ACTIONS(776), 1,
      sym_float,
    ACTIONS(778), 1,
      anon_sym_QMARKVARIABLE,
    STATE(247), 1,
      aux_sym_float_list_repeat1,
    STATE(342), 1,
      sym_float_list,
  [4060] = 4,
    ACTIONS(780), 1,
      sym_integer,
    ACTIONS(782), 1,
      anon_sym_QMARKVARIABLE,
    STATE(245), 1,
      aux_sym_integer_list_repeat1,
    STATE(342), 1,
      sym_integer_list,
  [4073] = 4,
    ACTIONS(784), 1,
      sym_str_lit,
    ACTIONS(786), 1,
      anon_sym_QMARKVARIABLE,
    STATE(243), 1,
      aux_sym_string_list_repeat1,
    STATE(342), 1,
      sym_string_list,
  [4086] = 3,
    ACTIONS(788), 1,
      sym_global_variable,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4097] = 2,
    ACTIONS(793), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(795), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4106] = 3,
    ACTIONS(499), 1,
      sym_global_variable,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4117] = 4,
    ACTIONS(799), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(801), 1,
      sym_allowed_type,
    STATE(273), 1,
      aux_sym_type_specification_repeat1,
    STATE(352), 1,
      sym_type_specification,
  [4130] = 4,
    ACTIONS(803), 1,
      sym_symbol,
    ACTIONS(805), 1,
      anon_sym_QMARKVARIABLE,
    STATE(242), 1,
      aux_sym_symbol_list_repeat1,
    STATE(342), 1,
      sym_symbol_list,
  [4143] = 3,
    ACTIONS(807), 1,
      sym_single_field_variable,
    ACTIONS(809), 1,
      sym_multifield_variable,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [4153] = 1,
    ACTIONS(813), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [4159] = 3,
    ACTIONS(815), 1,
      sym_symbol,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_symbol_list_repeat1,
  [4169] = 3,
    ACTIONS(819), 1,
      sym_str_lit,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_string_list_repeat1,
  [4179] = 3,
    ACTIONS(823), 1,
      sym_single_field_variable,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_parameter_list,
  [4189] = 3,
    ACTIONS(827), 1,
      sym_integer,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
  [4199] = 3,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      sym_allowed_type,
    STATE(246), 1,
      aux_sym_type_specification_repeat1,
  [4209] = 3,
    ACTIONS(836), 1,
      sym_float,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_float_list_repeat1,
  [4219] = 2,
    STATE(249), 1,
      sym_range_specification,
    ACTIONS(840), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [4227] = 2,
    STATE(350), 1,
      sym_range_specification,
    ACTIONS(840), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [4235] = 1,
    ACTIONS(842), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4241] = 3,
    ACTIONS(844), 1,
      sym_number,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_number_list_repeat1,
  [4251] = 3,
    ACTIONS(848), 1,
      sym_variable_symbol,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_class_name_list_repeat1,
  [4261] = 1,
    ACTIONS(852), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4267] = 1,
    ACTIONS(854), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4273] = 3,
    ACTIONS(848), 1,
      sym_variable_symbol,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_class_name_list_repeat1,
  [4283] = 3,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      aux_sym_parameter_list_token1,
    STATE(256), 1,
      aux_sym_parameter_list_repeat1,
  [4293] = 3,
    ACTIONS(863), 1,
      sym_str_lit,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_string_list_repeat1,
  [4303] = 3,
    ACTIONS(329), 1,
      sym_symbol,
    ACTIONS(331), 1,
      sym_variable_symbol,
    ACTIONS(349), 1,
      anon_sym_object,
  [4313] = 2,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4321] = 2,
    STATE(266), 1,
      sym_cardinality_specification,
    ACTIONS(872), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [4329] = 1,
    ACTIONS(874), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4335] = 1,
    ACTIONS(876), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [4341] = 1,
    ACTIONS(878), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [4347] = 2,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(210), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [4355] = 3,
    ACTIONS(880), 1,
      sym_str_lit,
    ACTIONS(882), 1,
      sym_integer,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
  [4365] = 2,
    STATE(351), 1,
      sym_cardinality_specification,
    ACTIONS(872), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [4373] = 3,
    ACTIONS(823), 1,
      sym_single_field_variable,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_parameter_list,
  [4383] = 3,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      aux_sym_parameter_list_token1,
    STATE(271), 1,
      aux_sym_parameter_list_repeat1,
  [4393] = 3,
    ACTIONS(892), 1,
      sym_variable_symbol,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_class_name_list_repeat1,
  [4403] = 3,
    ACTIONS(897), 1,
      sym_number,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_number_list_repeat1,
  [4413] = 3,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      aux_sym_parameter_list_token1,
    STATE(256), 1,
      aux_sym_parameter_list_repeat1,
  [4423] = 3,
    ACTIONS(807), 1,
      sym_single_field_variable,
    ACTIONS(906), 1,
      sym_multifield_variable,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [4433] = 3,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      sym_allowed_type,
    STATE(246), 1,
      aux_sym_type_specification_repeat1,
  [4443] = 3,
    ACTIONS(914), 1,
      sym_integer,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
  [4453] = 2,
    ACTIONS(919), 1,
      sym_variable_symbol,
    ACTIONS(921), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [4461] = 3,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(923), 1,
      sym_symbol,
    STATE(276), 1,
      aux_sym_symbol_list_repeat1,
  [4471] = 3,
    ACTIONS(926), 1,
      sym_float,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_float_list_repeat1,
  [4481] = 2,
    ACTIONS(931), 1,
      sym_single_field_variable,
    ACTIONS(933), 1,
      sym_multifield_variable,
  [4488] = 1,
    ACTIONS(935), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4493] = 2,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_function_call,
  [4500] = 1,
    ACTIONS(939), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4505] = 2,
    ACTIONS(941), 1,
      sym_str_lit,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
  [4512] = 1,
    ACTIONS(945), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4517] = 2,
    ACTIONS(947), 1,
      sym_str_lit,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [4524] = 2,
    ACTIONS(951), 1,
      sym_symbol,
    ACTIONS(953), 1,
      sym_variable_symbol,
  [4531] = 2,
    ACTIONS(955), 1,
      anon_sym_slot,
    ACTIONS(957), 1,
      anon_sym_multislot,
  [4538] = 2,
    ACTIONS(959), 1,
      sym_str_lit,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
  [4545] = 1,
    ACTIONS(963), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4550] = 1,
    ACTIONS(965), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4555] = 1,
    ACTIONS(967), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4560] = 1,
    ACTIONS(969), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4565] = 1,
    ACTIONS(971), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4570] = 1,
    ACTIONS(973), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4575] = 1,
    ACTIONS(975), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4580] = 2,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_function_call,
  [4587] = 1,
    ACTIONS(977), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [4592] = 1,
    ACTIONS(979), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4597] = 2,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_function_call,
  [4604] = 1,
    ACTIONS(983), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4609] = 1,
    ACTIONS(985), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4614] = 1,
    ACTIONS(987), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4619] = 2,
    ACTIONS(989), 1,
      anon_sym_salience,
    ACTIONS(991), 1,
      anon_sym_auto_DASHfocus,
  [4626] = 1,
    ACTIONS(993), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4631] = 2,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(997), 1,
      aux_sym_parameter_list_token1,
  [4638] = 1,
    ACTIONS(999), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4643] = 1,
    ACTIONS(1001), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4648] = 1,
    ACTIONS(1003), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4653] = 1,
    ACTIONS(1005), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4658] = 1,
    ACTIONS(1007), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4663] = 1,
    ACTIONS(1009), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4668] = 1,
    ACTIONS(1011), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4673] = 2,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(1015), 1,
      aux_sym_parameter_list_token1,
  [4680] = 2,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(1017), 1,
      aux_sym_parameter_list_token1,
  [4687] = 1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [4691] = 1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [4695] = 1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [4699] = 1,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [4703] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [4707] = 1,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
  [4711] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [4715] = 1,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [4719] = 1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [4723] = 1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [4727] = 1,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [4731] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [4735] = 1,
    ACTIONS(1035), 1,
      sym_boolean_symbol,
  [4739] = 1,
    ACTIONS(807), 1,
      sym_single_field_variable,
  [4743] = 1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [4747] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [4751] = 1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [4755] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [4759] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [4763] = 1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [4767] = 1,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
  [4771] = 1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [4775] = 1,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
  [4779] = 1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [4783] = 1,
    ACTIONS(931), 1,
      sym_single_field_variable,
  [4787] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [4791] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [4795] = 1,
    ACTIONS(1053), 1,
      sym_variable_symbol,
  [4799] = 1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [4803] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [4807] = 1,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
  [4811] = 1,
    ACTIONS(1061), 1,
      sym_variable_symbol,
  [4815] = 1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [4819] = 1,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [4823] = 1,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
  [4827] = 1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [4831] = 1,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [4835] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [4839] = 1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
  [4843] = 1,
    ACTIONS(1073), 1,
      sym_symbol,
  [4847] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [4851] = 1,
    ACTIONS(1075), 1,
      sym_variable_symbol,
  [4855] = 1,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [4859] = 1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [4863] = 1,
    ACTIONS(1081), 1,
      sym_variable_symbol,
  [4867] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [4871] = 1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [4875] = 1,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
  [4879] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [4883] = 1,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
  [4887] = 1,
    ACTIONS(1093), 1,
      anon_sym_LT_DASH,
  [4891] = 1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
  [4895] = 1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
  [4899] = 1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [4903] = 1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [4907] = 1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [4911] = 1,
    ACTIONS(1105), 1,
      anon_sym_EQ,
  [4915] = 1,
    ACTIONS(1107), 1,
      sym_symbol,
  [4919] = 1,
    ACTIONS(1109), 1,
      sym_symbol,
  [4923] = 1,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [4927] = 1,
    ACTIONS(1113), 1,
      sym_symbol,
  [4931] = 1,
    ACTIONS(1115), 1,
      sym_symbol,
  [4935] = 1,
    ACTIONS(1117), 1,
      sym_variable_symbol,
  [4939] = 1,
    ACTIONS(1119), 1,
      sym_variable_symbol,
  [4943] = 1,
    ACTIONS(1121), 1,
      sym_symbol,
  [4947] = 1,
    ACTIONS(1123), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 217,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 297,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 415,
  [SMALL_STATE(15)] = 441,
  [SMALL_STATE(16)] = 467,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 545,
  [SMALL_STATE(20)] = 571,
  [SMALL_STATE(21)] = 597,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 672,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 768,
  [SMALL_STATE(29)] = 791,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 848,
  [SMALL_STATE(32)] = 870,
  [SMALL_STATE(33)] = 893,
  [SMALL_STATE(34)] = 916,
  [SMALL_STATE(35)] = 939,
  [SMALL_STATE(36)] = 962,
  [SMALL_STATE(37)] = 985,
  [SMALL_STATE(38)] = 1008,
  [SMALL_STATE(39)] = 1031,
  [SMALL_STATE(40)] = 1054,
  [SMALL_STATE(41)] = 1077,
  [SMALL_STATE(42)] = 1094,
  [SMALL_STATE(43)] = 1117,
  [SMALL_STATE(44)] = 1140,
  [SMALL_STATE(45)] = 1157,
  [SMALL_STATE(46)] = 1180,
  [SMALL_STATE(47)] = 1205,
  [SMALL_STATE(48)] = 1228,
  [SMALL_STATE(49)] = 1251,
  [SMALL_STATE(50)] = 1274,
  [SMALL_STATE(51)] = 1297,
  [SMALL_STATE(52)] = 1320,
  [SMALL_STATE(53)] = 1343,
  [SMALL_STATE(54)] = 1366,
  [SMALL_STATE(55)] = 1389,
  [SMALL_STATE(56)] = 1412,
  [SMALL_STATE(57)] = 1435,
  [SMALL_STATE(58)] = 1458,
  [SMALL_STATE(59)] = 1481,
  [SMALL_STATE(60)] = 1504,
  [SMALL_STATE(61)] = 1527,
  [SMALL_STATE(62)] = 1550,
  [SMALL_STATE(63)] = 1573,
  [SMALL_STATE(64)] = 1596,
  [SMALL_STATE(65)] = 1621,
  [SMALL_STATE(66)] = 1644,
  [SMALL_STATE(67)] = 1667,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1713,
  [SMALL_STATE(70)] = 1736,
  [SMALL_STATE(71)] = 1759,
  [SMALL_STATE(72)] = 1782,
  [SMALL_STATE(73)] = 1805,
  [SMALL_STATE(74)] = 1828,
  [SMALL_STATE(75)] = 1851,
  [SMALL_STATE(76)] = 1874,
  [SMALL_STATE(77)] = 1897,
  [SMALL_STATE(78)] = 1920,
  [SMALL_STATE(79)] = 1943,
  [SMALL_STATE(80)] = 1960,
  [SMALL_STATE(81)] = 1977,
  [SMALL_STATE(82)] = 2000,
  [SMALL_STATE(83)] = 2017,
  [SMALL_STATE(84)] = 2040,
  [SMALL_STATE(85)] = 2063,
  [SMALL_STATE(86)] = 2086,
  [SMALL_STATE(87)] = 2109,
  [SMALL_STATE(88)] = 2126,
  [SMALL_STATE(89)] = 2149,
  [SMALL_STATE(90)] = 2168,
  [SMALL_STATE(91)] = 2211,
  [SMALL_STATE(92)] = 2236,
  [SMALL_STATE(93)] = 2259,
  [SMALL_STATE(94)] = 2282,
  [SMALL_STATE(95)] = 2305,
  [SMALL_STATE(96)] = 2328,
  [SMALL_STATE(97)] = 2351,
  [SMALL_STATE(98)] = 2374,
  [SMALL_STATE(99)] = 2397,
  [SMALL_STATE(100)] = 2425,
  [SMALL_STATE(101)] = 2453,
  [SMALL_STATE(102)] = 2473,
  [SMALL_STATE(103)] = 2492,
  [SMALL_STATE(104)] = 2507,
  [SMALL_STATE(105)] = 2526,
  [SMALL_STATE(106)] = 2543,
  [SMALL_STATE(107)] = 2558,
  [SMALL_STATE(108)] = 2592,
  [SMALL_STATE(109)] = 2609,
  [SMALL_STATE(110)] = 2626,
  [SMALL_STATE(111)] = 2643,
  [SMALL_STATE(112)] = 2660,
  [SMALL_STATE(113)] = 2691,
  [SMALL_STATE(114)] = 2710,
  [SMALL_STATE(115)] = 2729,
  [SMALL_STATE(116)] = 2746,
  [SMALL_STATE(117)] = 2760,
  [SMALL_STATE(118)] = 2772,
  [SMALL_STATE(119)] = 2784,
  [SMALL_STATE(120)] = 2801,
  [SMALL_STATE(121)] = 2821,
  [SMALL_STATE(122)] = 2841,
  [SMALL_STATE(123)] = 2857,
  [SMALL_STATE(124)] = 2877,
  [SMALL_STATE(125)] = 2897,
  [SMALL_STATE(126)] = 2917,
  [SMALL_STATE(127)] = 2939,
  [SMALL_STATE(128)] = 2959,
  [SMALL_STATE(129)] = 2981,
  [SMALL_STATE(130)] = 2995,
  [SMALL_STATE(131)] = 3017,
  [SMALL_STATE(132)] = 3033,
  [SMALL_STATE(133)] = 3055,
  [SMALL_STATE(134)] = 3075,
  [SMALL_STATE(135)] = 3097,
  [SMALL_STATE(136)] = 3117,
  [SMALL_STATE(137)] = 3131,
  [SMALL_STATE(138)] = 3144,
  [SMALL_STATE(139)] = 3157,
  [SMALL_STATE(140)] = 3170,
  [SMALL_STATE(141)] = 3185,
  [SMALL_STATE(142)] = 3198,
  [SMALL_STATE(143)] = 3211,
  [SMALL_STATE(144)] = 3224,
  [SMALL_STATE(145)] = 3237,
  [SMALL_STATE(146)] = 3252,
  [SMALL_STATE(147)] = 3265,
  [SMALL_STATE(148)] = 3278,
  [SMALL_STATE(149)] = 3291,
  [SMALL_STATE(150)] = 3304,
  [SMALL_STATE(151)] = 3316,
  [SMALL_STATE(152)] = 3330,
  [SMALL_STATE(153)] = 3340,
  [SMALL_STATE(154)] = 3352,
  [SMALL_STATE(155)] = 3364,
  [SMALL_STATE(156)] = 3373,
  [SMALL_STATE(157)] = 3382,
  [SMALL_STATE(158)] = 3393,
  [SMALL_STATE(159)] = 3402,
  [SMALL_STATE(160)] = 3409,
  [SMALL_STATE(161)] = 3420,
  [SMALL_STATE(162)] = 3429,
  [SMALL_STATE(163)] = 3436,
  [SMALL_STATE(164)] = 3443,
  [SMALL_STATE(165)] = 3450,
  [SMALL_STATE(166)] = 3459,
  [SMALL_STATE(167)] = 3468,
  [SMALL_STATE(168)] = 3477,
  [SMALL_STATE(169)] = 3486,
  [SMALL_STATE(170)] = 3495,
  [SMALL_STATE(171)] = 3504,
  [SMALL_STATE(172)] = 3513,
  [SMALL_STATE(173)] = 3524,
  [SMALL_STATE(174)] = 3533,
  [SMALL_STATE(175)] = 3540,
  [SMALL_STATE(176)] = 3549,
  [SMALL_STATE(177)] = 3558,
  [SMALL_STATE(178)] = 3567,
  [SMALL_STATE(179)] = 3576,
  [SMALL_STATE(180)] = 3585,
  [SMALL_STATE(181)] = 3594,
  [SMALL_STATE(182)] = 3605,
  [SMALL_STATE(183)] = 3614,
  [SMALL_STATE(184)] = 3621,
  [SMALL_STATE(185)] = 3630,
  [SMALL_STATE(186)] = 3641,
  [SMALL_STATE(187)] = 3648,
  [SMALL_STATE(188)] = 3659,
  [SMALL_STATE(189)] = 3668,
  [SMALL_STATE(190)] = 3677,
  [SMALL_STATE(191)] = 3688,
  [SMALL_STATE(192)] = 3695,
  [SMALL_STATE(193)] = 3702,
  [SMALL_STATE(194)] = 3709,
  [SMALL_STATE(195)] = 3716,
  [SMALL_STATE(196)] = 3723,
  [SMALL_STATE(197)] = 3730,
  [SMALL_STATE(198)] = 3739,
  [SMALL_STATE(199)] = 3746,
  [SMALL_STATE(200)] = 3757,
  [SMALL_STATE(201)] = 3766,
  [SMALL_STATE(202)] = 3775,
  [SMALL_STATE(203)] = 3784,
  [SMALL_STATE(204)] = 3791,
  [SMALL_STATE(205)] = 3800,
  [SMALL_STATE(206)] = 3809,
  [SMALL_STATE(207)] = 3818,
  [SMALL_STATE(208)] = 3827,
  [SMALL_STATE(209)] = 3834,
  [SMALL_STATE(210)] = 3843,
  [SMALL_STATE(211)] = 3854,
  [SMALL_STATE(212)] = 3863,
  [SMALL_STATE(213)] = 3870,
  [SMALL_STATE(214)] = 3881,
  [SMALL_STATE(215)] = 3888,
  [SMALL_STATE(216)] = 3897,
  [SMALL_STATE(217)] = 3906,
  [SMALL_STATE(218)] = 3915,
  [SMALL_STATE(219)] = 3924,
  [SMALL_STATE(220)] = 3933,
  [SMALL_STATE(221)] = 3942,
  [SMALL_STATE(222)] = 3951,
  [SMALL_STATE(223)] = 3960,
  [SMALL_STATE(224)] = 3967,
  [SMALL_STATE(225)] = 3976,
  [SMALL_STATE(226)] = 3989,
  [SMALL_STATE(227)] = 4002,
  [SMALL_STATE(228)] = 4009,
  [SMALL_STATE(229)] = 4016,
  [SMALL_STATE(230)] = 4025,
  [SMALL_STATE(231)] = 4034,
  [SMALL_STATE(232)] = 4047,
  [SMALL_STATE(233)] = 4060,
  [SMALL_STATE(234)] = 4073,
  [SMALL_STATE(235)] = 4086,
  [SMALL_STATE(236)] = 4097,
  [SMALL_STATE(237)] = 4106,
  [SMALL_STATE(238)] = 4117,
  [SMALL_STATE(239)] = 4130,
  [SMALL_STATE(240)] = 4143,
  [SMALL_STATE(241)] = 4153,
  [SMALL_STATE(242)] = 4159,
  [SMALL_STATE(243)] = 4169,
  [SMALL_STATE(244)] = 4179,
  [SMALL_STATE(245)] = 4189,
  [SMALL_STATE(246)] = 4199,
  [SMALL_STATE(247)] = 4209,
  [SMALL_STATE(248)] = 4219,
  [SMALL_STATE(249)] = 4227,
  [SMALL_STATE(250)] = 4235,
  [SMALL_STATE(251)] = 4241,
  [SMALL_STATE(252)] = 4251,
  [SMALL_STATE(253)] = 4261,
  [SMALL_STATE(254)] = 4267,
  [SMALL_STATE(255)] = 4273,
  [SMALL_STATE(256)] = 4283,
  [SMALL_STATE(257)] = 4293,
  [SMALL_STATE(258)] = 4303,
  [SMALL_STATE(259)] = 4313,
  [SMALL_STATE(260)] = 4321,
  [SMALL_STATE(261)] = 4329,
  [SMALL_STATE(262)] = 4335,
  [SMALL_STATE(263)] = 4341,
  [SMALL_STATE(264)] = 4347,
  [SMALL_STATE(265)] = 4355,
  [SMALL_STATE(266)] = 4365,
  [SMALL_STATE(267)] = 4373,
  [SMALL_STATE(268)] = 4383,
  [SMALL_STATE(269)] = 4393,
  [SMALL_STATE(270)] = 4403,
  [SMALL_STATE(271)] = 4413,
  [SMALL_STATE(272)] = 4423,
  [SMALL_STATE(273)] = 4433,
  [SMALL_STATE(274)] = 4443,
  [SMALL_STATE(275)] = 4453,
  [SMALL_STATE(276)] = 4461,
  [SMALL_STATE(277)] = 4471,
  [SMALL_STATE(278)] = 4481,
  [SMALL_STATE(279)] = 4488,
  [SMALL_STATE(280)] = 4493,
  [SMALL_STATE(281)] = 4500,
  [SMALL_STATE(282)] = 4505,
  [SMALL_STATE(283)] = 4512,
  [SMALL_STATE(284)] = 4517,
  [SMALL_STATE(285)] = 4524,
  [SMALL_STATE(286)] = 4531,
  [SMALL_STATE(287)] = 4538,
  [SMALL_STATE(288)] = 4545,
  [SMALL_STATE(289)] = 4550,
  [SMALL_STATE(290)] = 4555,
  [SMALL_STATE(291)] = 4560,
  [SMALL_STATE(292)] = 4565,
  [SMALL_STATE(293)] = 4570,
  [SMALL_STATE(294)] = 4575,
  [SMALL_STATE(295)] = 4580,
  [SMALL_STATE(296)] = 4587,
  [SMALL_STATE(297)] = 4592,
  [SMALL_STATE(298)] = 4597,
  [SMALL_STATE(299)] = 4604,
  [SMALL_STATE(300)] = 4609,
  [SMALL_STATE(301)] = 4614,
  [SMALL_STATE(302)] = 4619,
  [SMALL_STATE(303)] = 4626,
  [SMALL_STATE(304)] = 4631,
  [SMALL_STATE(305)] = 4638,
  [SMALL_STATE(306)] = 4643,
  [SMALL_STATE(307)] = 4648,
  [SMALL_STATE(308)] = 4653,
  [SMALL_STATE(309)] = 4658,
  [SMALL_STATE(310)] = 4663,
  [SMALL_STATE(311)] = 4668,
  [SMALL_STATE(312)] = 4673,
  [SMALL_STATE(313)] = 4680,
  [SMALL_STATE(314)] = 4687,
  [SMALL_STATE(315)] = 4691,
  [SMALL_STATE(316)] = 4695,
  [SMALL_STATE(317)] = 4699,
  [SMALL_STATE(318)] = 4703,
  [SMALL_STATE(319)] = 4707,
  [SMALL_STATE(320)] = 4711,
  [SMALL_STATE(321)] = 4715,
  [SMALL_STATE(322)] = 4719,
  [SMALL_STATE(323)] = 4723,
  [SMALL_STATE(324)] = 4727,
  [SMALL_STATE(325)] = 4731,
  [SMALL_STATE(326)] = 4735,
  [SMALL_STATE(327)] = 4739,
  [SMALL_STATE(328)] = 4743,
  [SMALL_STATE(329)] = 4747,
  [SMALL_STATE(330)] = 4751,
  [SMALL_STATE(331)] = 4755,
  [SMALL_STATE(332)] = 4759,
  [SMALL_STATE(333)] = 4763,
  [SMALL_STATE(334)] = 4767,
  [SMALL_STATE(335)] = 4771,
  [SMALL_STATE(336)] = 4775,
  [SMALL_STATE(337)] = 4779,
  [SMALL_STATE(338)] = 4783,
  [SMALL_STATE(339)] = 4787,
  [SMALL_STATE(340)] = 4791,
  [SMALL_STATE(341)] = 4795,
  [SMALL_STATE(342)] = 4799,
  [SMALL_STATE(343)] = 4803,
  [SMALL_STATE(344)] = 4807,
  [SMALL_STATE(345)] = 4811,
  [SMALL_STATE(346)] = 4815,
  [SMALL_STATE(347)] = 4819,
  [SMALL_STATE(348)] = 4823,
  [SMALL_STATE(349)] = 4827,
  [SMALL_STATE(350)] = 4831,
  [SMALL_STATE(351)] = 4835,
  [SMALL_STATE(352)] = 4839,
  [SMALL_STATE(353)] = 4843,
  [SMALL_STATE(354)] = 4847,
  [SMALL_STATE(355)] = 4851,
  [SMALL_STATE(356)] = 4855,
  [SMALL_STATE(357)] = 4859,
  [SMALL_STATE(358)] = 4863,
  [SMALL_STATE(359)] = 4867,
  [SMALL_STATE(360)] = 4871,
  [SMALL_STATE(361)] = 4875,
  [SMALL_STATE(362)] = 4879,
  [SMALL_STATE(363)] = 4883,
  [SMALL_STATE(364)] = 4887,
  [SMALL_STATE(365)] = 4891,
  [SMALL_STATE(366)] = 4895,
  [SMALL_STATE(367)] = 4899,
  [SMALL_STATE(368)] = 4903,
  [SMALL_STATE(369)] = 4907,
  [SMALL_STATE(370)] = 4911,
  [SMALL_STATE(371)] = 4915,
  [SMALL_STATE(372)] = 4919,
  [SMALL_STATE(373)] = 4923,
  [SMALL_STATE(374)] = 4927,
  [SMALL_STATE(375)] = 4931,
  [SMALL_STATE(376)] = 4935,
  [SMALL_STATE(377)] = 4939,
  [SMALL_STATE(378)] = 4943,
  [SMALL_STATE(379)] = 4947,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(41),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(114),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(298),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(364),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(112),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(73),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(353),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(92),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(353),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1), SHIFT(309),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(90),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(291),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(129),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2), SHIFT_REPEAT(285),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(286),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(345),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(203),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(338),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexeme_list, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(153),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(154),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 11),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(341),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(302),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(275),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 8),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(370),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_list, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(246),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(327),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(257),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2), SHIFT_REPEAT(269),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(270),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(274),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(276),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(277),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 5),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 9),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 9),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 5),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 5),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 9),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 9),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 8),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 11),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 11),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 8),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
