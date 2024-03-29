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
#define STATE_COUNT 454
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
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
  aux_sym_parameter_list_token1 = 68,
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
  aux_sym_deffacts_construct_repeat1 = 146,
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
  aux_sym_class_name_list_repeat1 = 158,
  aux_sym_value_list_repeat1 = 159,
  aux_sym_defrule_construct_repeat1 = 160,
  aux_sym_declaration_repeat1 = 161,
  aux_sym_ordered_pattern_CE_repeat1 = 162,
  aux_sym_template_pattern_CE_repeat1 = 163,
  aux_sym_object_pattern_CE_repeat1 = 164,
  aux_sym_defglobal_construct_repeat1 = 165,
  aux_sym_parameter_list_repeat1 = 166,
  aux_sym_defmethod_construct_repeat1 = 167,
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
  [anon_sym_do] = anon_sym_do,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
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
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 15,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 20,
  [32] = 20,
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
  [59] = 36,
  [60] = 60,
  [61] = 61,
  [62] = 57,
  [63] = 47,
  [64] = 64,
  [65] = 46,
  [66] = 41,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 58,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 39,
  [82] = 37,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 34,
  [87] = 87,
  [88] = 36,
  [89] = 89,
  [90] = 36,
  [91] = 58,
  [92] = 57,
  [93] = 47,
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
  [106] = 29,
  [107] = 34,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 46,
  [112] = 41,
  [113] = 39,
  [114] = 37,
  [115] = 34,
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
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 134,
  [152] = 135,
  [153] = 153,
  [154] = 154,
  [155] = 145,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 148,
  [163] = 149,
  [164] = 164,
  [165] = 156,
  [166] = 134,
  [167] = 135,
  [168] = 146,
  [169] = 144,
  [170] = 147,
  [171] = 143,
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
  [197] = 191,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 191,
  [205] = 205,
  [206] = 135,
  [207] = 134,
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
  [297] = 127,
  [298] = 121,
  [299] = 122,
  [300] = 132,
  [301] = 133,
  [302] = 209,
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
  [327] = 325,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 305,
  [335] = 325,
  [336] = 305,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 146,
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
  [360] = 342,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 143,
  [365] = 156,
  [366] = 148,
  [367] = 147,
  [368] = 149,
  [369] = 369,
  [370] = 370,
  [371] = 144,
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
  [387] = 140,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 141,
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
  [445] = 391,
  [446] = 446,
  [447] = 421,
  [448] = 448,
  [449] = 391,
  [450] = 450,
  [451] = 421,
  [452] = 452,
  [453] = 453,
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
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == ':') ADVANCE(528);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(530);
      if (lookahead == '?') ADVANCE(521);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '[') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '~') ADVANCE(527);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '=') ADVANCE(531);
      if (lookahead == '?') ADVANCE(521);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '~') ADVANCE(527);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ';') ADVANCE(435);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '=') ADVANCE(531);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '~') ADVANCE(527);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(435);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(18)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(534);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(455);
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
      if (lookahead == '*') ADVANCE(319);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == 'D') ADVANCE(445);
      if (lookahead == 'N') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(500);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(175);
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
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(495);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(523);
      END_STATE();
    case 36:
      if (lookahead == '?') ADVANCE(317);
      END_STATE();
    case 37:
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(37)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
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
      if (lookahead == 'E') ADVANCE(482);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(480);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(481);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(478);
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
      if (lookahead == 'G') ADVANCE(480);
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
      if (lookahead == 'L') ADVANCE(480);
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
      if (lookahead == 'R') ADVANCE(480);
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
      if (lookahead == 'S') ADVANCE(480);
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
      if (lookahead == 'T') ADVANCE(480);
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
      if (lookahead == ']') ADVANCE(443);
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
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'd') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(107)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(108)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(535);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(290);
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
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(215);
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
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 173:
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(243);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(183)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(276);
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
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 'j') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(532);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(178);
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
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(285);
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
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(236)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(300);
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
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 303:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 307:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 308:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 316:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 317:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 318:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 319:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == 11) SKIP(320)
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ';') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 324:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
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
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(376);
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '=') ADVANCE(531);
      if (lookahead == '?') ADVANCE(522);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '=') ADVANCE(531);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '[') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(431);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(4);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '?') ADVANCE(376);
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(347);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'd') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(435);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'B') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'V') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 380:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 390:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 408:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 411:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 419:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(433);
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 432:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 433:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 435:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_symbol);
      if (lookahead == 'm') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_symbol);
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
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 442:
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
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_instance_name);
      if (lookahead == ']') ADVANCE(443);
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
    case 444:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_single_field_variable);
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
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'O') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'R') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_single_field_variable);
      if (lookahead == 'V') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 453:
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
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 454:
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
          lookahead != '~') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '*') ADVANCE(455);
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
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_loop_DASHfor_DASHcount);
      END_STATE();
    case 459:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 461:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 463:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 466:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_deffacts);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_deftemplate);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_multislot);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 472:
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
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 473:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 474:
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
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 475:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_default_DASHdynamic);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_QMARKVARIABLE);
      END_STATE();
    case 479:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_allowed_type);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_allowed_type);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_boolean_symbol);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_allowed_DASHsymbols);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_allowed_DASHstrings);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_allowed_DASHlexemes);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_allowed_DASHintegers);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_allowed_DASHfloats);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_allowed_DASHnumbers);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_allowed_DASHinstance_DASHnames);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_allowed_DASHclasses);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_allowed_DASHvalues);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_defrule);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 497:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_salience);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_auto_DASHfocus);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 502:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 504:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 506:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_logical);
      END_STATE();
    case 508:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 510:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 512:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 514:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 516:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_is_DASHa);
      END_STATE();
    case 518:
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
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 520:
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
          lookahead != '~') ADVANCE(442);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 529:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 531:
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
          lookahead != '~') ADVANCE(435);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_deffunction);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_defgeneric);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_defmethod);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 320},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 320},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 320},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 107},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 108},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 320},
  [215] = {.lex_state = 320},
  [216] = {.lex_state = 320},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 320},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 320},
  [221] = {.lex_state = 320},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 320},
  [224] = {.lex_state = 320},
  [225] = {.lex_state = 320},
  [226] = {.lex_state = 320},
  [227] = {.lex_state = 320},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 320},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 320},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 320},
  [239] = {.lex_state = 320},
  [240] = {.lex_state = 320},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 320},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 37},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 320},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 320},
  [257] = {.lex_state = 320},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 320},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 320},
  [262] = {.lex_state = 320},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 320},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 320},
  [268] = {.lex_state = 320},
  [269] = {.lex_state = 320},
  [270] = {.lex_state = 320},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 320},
  [273] = {.lex_state = 320},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 320},
  [277] = {.lex_state = 320},
  [278] = {.lex_state = 320},
  [279] = {.lex_state = 320},
  [280] = {.lex_state = 320},
  [281] = {.lex_state = 320},
  [282] = {.lex_state = 320},
  [283] = {.lex_state = 320},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 320},
  [286] = {.lex_state = 320},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 320},
  [290] = {.lex_state = 320},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 320},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 320},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 17},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 236},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 183},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 183},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 183},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 19},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 18},
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
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 2},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 2},
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
  [382] = {.lex_state = 19},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 3},
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
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 18},
  [436] = {.lex_state = 18},
  [437] = {.lex_state = 18},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 18},
  [440] = {.lex_state = 3},
  [441] = {.lex_state = 3},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 18},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 3},
  [453] = {.lex_state = 0},
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
    [sym_program] = STATE(443),
    [sym__construct] = STATE(123),
    [sym__gap] = STATE(123),
    [sym_deffacts_construct] = STATE(123),
    [sym_deftemplate_construct] = STATE(123),
    [sym_defrule_construct] = STATE(123),
    [sym_defglobal_construct] = STATE(123),
    [sym_deffunction_construct] = STATE(123),
    [sym_defgeneric_construct] = STATE(123),
    [sym_defmethod_construct] = STATE(123),
    [aux_sym_program_repeat1] = STATE(123),
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
    STATE(25), 1,
      sym_declaration,
    STATE(27), 14,
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
  [32] = 4,
    ACTIONS(19), 1,
      sym_single_field_variable,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(3), 14,
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
  [59] = 10,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
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
  [98] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
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
  [137] = 5,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_EQ_GT,
    STATE(22), 1,
      sym_declaration,
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
  [166] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
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
  [205] = 10,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_TILDE,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
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
  [244] = 11,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(139), 1,
      sym_constraint,
    STATE(140), 1,
      sym_connected_constraint,
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
  [285] = 5,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 2,
      anon_sym_QMARKDERIVE,
      anon_sym_QMARKNONE,
    ACTIONS(59), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(48), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [314] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(4), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [353] = 10,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
    STATE(140), 1,
      sym_connected_constraint,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(35), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(5), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(27), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [392] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(3), 14,
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
  [418] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_EQ_GT,
    STATE(3), 14,
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
  [444] = 5,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_do,
    ACTIONS(77), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(92), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [472] = 5,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(83), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(57), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [500] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(3), 14,
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
  [526] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(3), 14,
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
  [552] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_EQ_GT,
    STATE(3), 14,
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
  [578] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_else,
    ACTIONS(95), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(29), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [606] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(3), 14,
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
  [632] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_EQ_GT,
    STATE(33), 14,
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
  [658] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_else,
    ACTIONS(105), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(20), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [686] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_else,
    ACTIONS(111), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(31), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [714] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_EQ_GT,
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
  [740] = 5,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_do,
    ACTIONS(119), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(62), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [768] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_EQ_GT,
    STATE(3), 14,
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
  [794] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(3), 14,
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
  [820] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 2,
      anon_sym_RPAREN,
      anon_sym_else,
    ACTIONS(127), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(29), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [846] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      anon_sym_else,
    ACTIONS(135), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(32), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [874] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(95), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(29), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [902] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_else,
    ACTIONS(95), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(29), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [930] = 4,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_EQ_GT,
    STATE(3), 14,
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
  [956] = 4,
    ACTIONS(61), 1,
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
    STATE(36), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [981] = 4,
    ACTIONS(61), 1,
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
    STATE(53), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1006] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1031] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1056] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1081] = 4,
    ACTIONS(61), 1,
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
    STATE(37), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1106] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(78), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1131] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1156] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1181] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(38), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1206] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1231] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1256] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(41), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1281] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1306] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1331] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1356] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(42), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1381] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1406] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(44), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1431] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1456] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(45), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1481] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1506] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1531] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1556] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(47), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1581] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1606] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1631] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(109), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1656] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1681] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1706] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(48), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1731] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(66), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1756] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1781] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(49), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1806] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1831] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(28), 14,
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
  [1854] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
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
  [1877] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
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
  [1900] = 4,
    ACTIONS(61), 1,
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
    STATE(51), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1925] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
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
  [1948] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1973] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(63), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [1998] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(55), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2023] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2048] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2073] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2098] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(105), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2123] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(82), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2148] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2173] = 4,
    ACTIONS(61), 1,
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
    STATE(56), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2198] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2223] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2248] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(90), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2273] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(102), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2298] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2323] = 9,
    ACTIONS(269), 1,
      anon_sym_TILDE,
    STATE(297), 1,
      sym__constant,
    STATE(298), 1,
      sym_single_constraint,
    STATE(299), 1,
      sym_term,
    STATE(387), 1,
      sym_connected_constraint,
    STATE(410), 1,
      sym_constraint,
    ACTIONS(267), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(265), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [2358] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2383] = 4,
    ACTIONS(61), 1,
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
    STATE(93), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2408] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2433] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2458] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(60), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2483] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2508] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(98), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2533] = 4,
    ACTIONS(61), 1,
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
    STATE(68), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2558] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2583] = 4,
    ACTIONS(61), 1,
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
    STATE(74), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2608] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(77), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2633] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(79), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2658] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2683] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(84), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2708] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(85), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2733] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2758] = 4,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2783] = 4,
    ACTIONS(61), 1,
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
    STATE(88), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2808] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
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
  [2831] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2856] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(95), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2881] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 7,
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
      aux_sym_function_call_repeat1,
  [2906] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2931] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(114), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2956] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(106), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [2981] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(59), 7,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      aux_sym_function_call_repeat1,
  [3006] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(400), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
    ACTIONS(339), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3030] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(108), 13,
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
  [3052] = 3,
    ACTIONS(13), 1,
      sym_single_field_variable,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(432), 13,
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
  [3074] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(412), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
    ACTIONS(345), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3095] = 4,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(347), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3118] = 2,
    ACTIONS(355), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(353), 12,
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
  [3137] = 1,
    ACTIONS(357), 14,
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
  [3154] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      sym__ws,
    ACTIONS(363), 1,
      sym_comment,
    STATE(125), 10,
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
  [3179] = 4,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(365), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3202] = 5,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      sym__ws,
    ACTIONS(378), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(125), 10,
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
  [3227] = 5,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(164), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
    ACTIONS(384), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3252] = 1,
    ACTIONS(388), 14,
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
  [3269] = 14,
    ACTIONS(390), 1,
      anon_sym_default,
    ACTIONS(392), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(394), 1,
      anon_sym_type,
    ACTIONS(396), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(398), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(400), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(402), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(404), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(406), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(408), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(410), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(412), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(414), 1,
      anon_sym_range,
    ACTIONS(416), 1,
      anon_sym_cardinality,
  [3312] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(348), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
    ACTIONS(418), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3333] = 3,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(116), 6,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
    ACTIONS(420), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3354] = 4,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(124), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(347), 7,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [3377] = 1,
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
  [3394] = 1,
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
  [3411] = 1,
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
  [3428] = 1,
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
  [3445] = 7,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(121), 1,
      sym_single_constraint,
    STATE(122), 1,
      sym_term,
    STATE(127), 1,
      sym__constant,
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
  [3473] = 3,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(131), 5,
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
  [3493] = 7,
    ACTIONS(269), 1,
      anon_sym_TILDE,
    STATE(297), 1,
      sym__constant,
    STATE(298), 1,
      sym_single_constraint,
    STATE(299), 1,
      sym_term,
    STATE(396), 1,
      sym_connected_constraint,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(265), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3521] = 2,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 11,
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
  [3538] = 1,
    ACTIONS(439), 12,
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
  [3553] = 1,
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
  [3568] = 11,
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
  [3602] = 1,
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
  [3615] = 1,
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
      anon_sym_else,
  [3628] = 4,
    STATE(127), 1,
      sym__constant,
    STATE(132), 1,
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
  [3647] = 1,
    ACTIONS(469), 10,
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
  [3660] = 1,
    ACTIONS(471), 10,
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
  [3673] = 1,
    ACTIONS(473), 10,
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
  [3686] = 1,
    ACTIONS(475), 10,
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
  [3699] = 3,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(153), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3716] = 1,
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
  [3729] = 1,
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
  [3742] = 3,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
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
  [3759] = 3,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
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
  [3776] = 4,
    STATE(297), 1,
      sym__constant,
    STATE(300), 1,
      sym_term,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(265), 6,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
  [3795] = 1,
    ACTIONS(485), 10,
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
  [3808] = 1,
    ACTIONS(487), 10,
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
  [3821] = 3,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(154), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [3838] = 3,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
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
  [3855] = 10,
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
  [3886] = 1,
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
      anon_sym_do,
  [3899] = 1,
    ACTIONS(473), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3911] = 1,
    ACTIONS(475), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3923] = 2,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [3937] = 1,
    ACTIONS(485), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3949] = 1,
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
  [3961] = 1,
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
  [3973] = 1,
    ACTIONS(469), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3985] = 1,
    ACTIONS(467), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3997] = 1,
    ACTIONS(471), 9,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4009] = 1,
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
  [4021] = 4,
    ACTIONS(505), 1,
      anon_sym_QMARKVARIABLE,
    STATE(411), 1,
      sym_value_list,
    STATE(183), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(503), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4038] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_wildcard_parameter_restriction,
    STATE(187), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4058] = 7,
    ACTIONS(515), 1,
      sym_symbol,
    ACTIONS(517), 1,
      sym_global_variable,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_symbol_list_repeat1,
    STATE(433), 1,
      sym_query,
    STATE(438), 1,
      sym_function_call,
  [4080] = 3,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(175), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(523), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4094] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_wildcard_parameter_restriction,
    STATE(180), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4114] = 4,
    ACTIONS(530), 1,
      sym_str_lit,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(202), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [4130] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_wildcard_parameter_restriction,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4150] = 7,
    ACTIONS(517), 1,
      sym_global_variable,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      sym_symbol,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_symbol_list_repeat1,
    STATE(389), 1,
      sym_query,
    STATE(438), 1,
      sym_function_call,
  [4172] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_wildcard_parameter_restriction,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4192] = 7,
    ACTIONS(517), 1,
      sym_global_variable,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      sym_symbol,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_symbol_list_repeat1,
    STATE(384), 1,
      sym_query,
    STATE(438), 1,
      sym_function_call,
  [4214] = 7,
    ACTIONS(546), 1,
      anon_sym_deffacts,
    ACTIONS(548), 1,
      anon_sym_deftemplate,
    ACTIONS(550), 1,
      anon_sym_defrule,
    ACTIONS(552), 1,
      anon_sym_defglobal,
    ACTIONS(554), 1,
      anon_sym_deffunction,
    ACTIONS(556), 1,
      anon_sym_defgeneric,
    ACTIONS(558), 1,
      anon_sym_defmethod,
  [4236] = 3,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(175), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(560), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4250] = 7,
    ACTIONS(517), 1,
      sym_global_variable,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_symbol,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_symbol_list_repeat1,
    STATE(429), 1,
      sym_query,
    STATE(438), 1,
      sym_function_call,
  [4272] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_wildcard_parameter_restriction,
    STATE(188), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4292] = 4,
    ACTIONS(570), 1,
      sym_str_lit,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(198), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4308] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_wildcard_parameter_restriction,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4328] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_wildcard_parameter_restriction,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4348] = 6,
    ACTIONS(507), 1,
      sym_single_field_variable,
    ACTIONS(509), 1,
      sym_multifield_variable,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      sym_wildcard_parameter_restriction,
    STATE(178), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4368] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(199), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [4381] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(421), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(584), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4394] = 3,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(196), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4407] = 3,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(192), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4420] = 4,
    ACTIONS(592), 1,
      sym_single_field_variable,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(194), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [4435] = 3,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4448] = 3,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(196), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4461] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(447), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(610), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4474] = 3,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(196), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [4487] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(200), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [4500] = 3,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(200), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [4513] = 3,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(203), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4526] = 3,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(200), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_deffacts_construct_repeat1,
  [4539] = 3,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [4552] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(451), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(629), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [4565] = 4,
    ACTIONS(633), 1,
      anon_sym_QMARKVARIABLE,
    STATE(411), 1,
      sym_lexeme_list,
    ACTIONS(631), 2,
      sym_str_lit,
      sym_symbol,
    STATE(208), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4580] = 1,
    ACTIONS(635), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4588] = 1,
    ACTIONS(637), 5,
      sym_global_variable,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4596] = 3,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 2,
      sym_str_lit,
      sym_symbol,
    STATE(210), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4608] = 3,
    ACTIONS(643), 1,
      sym_symbol,
    STATE(209), 1,
      aux_sym_symbol_list_repeat1,
    ACTIONS(646), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4620] = 3,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      sym_str_lit,
      sym_symbol,
    STATE(210), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [4632] = 4,
    ACTIONS(653), 1,
      sym_variable_symbol,
    ACTIONS(655), 1,
      sym_global_variable,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(237), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4646] = 2,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    STATE(241), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [4656] = 3,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(213), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4667] = 2,
    ACTIONS(666), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(668), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4676] = 2,
    ACTIONS(670), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(672), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4685] = 2,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(676), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4694] = 1,
    ACTIONS(678), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4701] = 2,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(682), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4710] = 1,
    ACTIONS(684), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4717] = 2,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(688), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4726] = 2,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(692), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4735] = 1,
    ACTIONS(694), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4742] = 2,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(698), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4751] = 2,
    ACTIONS(700), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(702), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4760] = 2,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(706), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4769] = 2,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(710), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4778] = 2,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(714), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4787] = 3,
    ACTIONS(716), 1,
      sym_global_variable,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(228), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4798] = 1,
    ACTIONS(721), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4805] = 2,
    ACTIONS(723), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(725), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4814] = 3,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(260), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [4825] = 3,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(255), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4836] = 3,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(291), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [4847] = 1,
    ACTIONS(739), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4854] = 3,
    ACTIONS(655), 1,
      sym_global_variable,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(264), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4865] = 2,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(745), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4874] = 3,
    ACTIONS(655), 1,
      sym_global_variable,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(228), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [4885] = 2,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(751), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4894] = 2,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(755), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4903] = 2,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(759), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4912] = 1,
    ACTIONS(761), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4919] = 2,
    ACTIONS(763), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(765), 2,
      sym_comment,
      anon_sym_LPAREN,
  [4928] = 3,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(232), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [4939] = 4,
    ACTIONS(769), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(771), 1,
      sym_allowed_type,
    STATE(309), 1,
      aux_sym_type_specification_repeat1,
    STATE(404), 1,
      sym_type_specification,
  [4952] = 4,
    ACTIONS(773), 1,
      sym_symbol,
    ACTIONS(775), 1,
      anon_sym_QMARKVARIABLE,
    STATE(312), 1,
      aux_sym_symbol_list_repeat1,
    STATE(411), 1,
      sym_symbol_list,
  [4965] = 4,
    ACTIONS(777), 1,
      sym_str_lit,
    ACTIONS(779), 1,
      anon_sym_QMARKVARIABLE,
    STATE(314), 1,
      aux_sym_string_list_repeat1,
    STATE(411), 1,
      sym_string_list,
  [4978] = 1,
    ACTIONS(781), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4985] = 4,
    ACTIONS(783), 1,
      sym_integer,
    ACTIONS(785), 1,
      anon_sym_QMARKVARIABLE,
    STATE(296), 1,
      aux_sym_integer_list_repeat1,
    STATE(411), 1,
      sym_integer_list,
  [4998] = 4,
    ACTIONS(787), 1,
      sym_float,
    ACTIONS(789), 1,
      anon_sym_QMARKVARIABLE,
    STATE(320), 1,
      aux_sym_float_list_repeat1,
    STATE(411), 1,
      sym_float_list,
  [5011] = 4,
    ACTIONS(791), 1,
      sym_number,
    ACTIONS(793), 1,
      anon_sym_QMARKVARIABLE,
    STATE(322), 1,
      aux_sym_number_list_repeat1,
    STATE(411), 1,
      sym_number_list,
  [5024] = 4,
    ACTIONS(795), 1,
      sym_variable_symbol,
    ACTIONS(797), 1,
      anon_sym_QMARKVARIABLE,
    STATE(324), 1,
      aux_sym_class_name_list_repeat1,
    STATE(411), 1,
      sym_instance_list,
  [5037] = 4,
    ACTIONS(799), 1,
      sym_variable_symbol,
    ACTIONS(801), 1,
      anon_sym_QMARKVARIABLE,
    STATE(326), 1,
      aux_sym_class_name_list_repeat1,
    STATE(411), 1,
      sym_class_name_list,
  [5050] = 1,
    ACTIONS(803), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5057] = 2,
    ACTIONS(805), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(807), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5066] = 3,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(255), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [5077] = 2,
    ACTIONS(814), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(816), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5086] = 2,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(820), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5095] = 1,
    ACTIONS(822), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5102] = 2,
    ACTIONS(824), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(826), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5111] = 3,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(213), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [5122] = 2,
    ACTIONS(830), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(832), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5131] = 2,
    ACTIONS(834), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(836), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5140] = 1,
    ACTIONS(838), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5147] = 3,
    ACTIONS(655), 1,
      sym_global_variable,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(228), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [5158] = 2,
    ACTIONS(842), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(844), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5167] = 1,
    ACTIONS(846), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5174] = 2,
    ACTIONS(848), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(850), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5183] = 2,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(854), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5192] = 2,
    ACTIONS(856), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(858), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5201] = 2,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(862), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5210] = 1,
    ACTIONS(864), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5217] = 2,
    ACTIONS(866), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(868), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5226] = 2,
    ACTIONS(870), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(872), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5235] = 1,
    ACTIONS(874), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5242] = 1,
    ACTIONS(876), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5249] = 2,
    ACTIONS(878), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(880), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5258] = 2,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(884), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5267] = 2,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(888), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5276] = 2,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(892), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5285] = 2,
    ACTIONS(894), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(896), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5294] = 2,
    ACTIONS(898), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(900), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5303] = 2,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(904), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5312] = 2,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(908), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5321] = 1,
    ACTIONS(910), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5328] = 2,
    ACTIONS(912), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(914), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5337] = 2,
    ACTIONS(916), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(918), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5346] = 1,
    ACTIONS(920), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5353] = 1,
    ACTIONS(922), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [5360] = 2,
    ACTIONS(924), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(926), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5369] = 2,
    ACTIONS(928), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(930), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5378] = 3,
    ACTIONS(932), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    STATE(291), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5389] = 2,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(939), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5398] = 1,
    ACTIONS(941), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5405] = 1,
    ACTIONS(943), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5412] = 2,
    ACTIONS(945), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(947), 2,
      sym_comment,
      anon_sym_LPAREN,
  [5421] = 3,
    ACTIONS(949), 1,
      sym_integer,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_integer_list_repeat1,
  [5431] = 1,
    ACTIONS(953), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5437] = 2,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5445] = 1,
    ACTIONS(959), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5451] = 1,
    ACTIONS(961), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5457] = 1,
    ACTIONS(963), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5463] = 3,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      sym_symbol,
    STATE(302), 1,
      aux_sym_symbol_list_repeat1,
  [5473] = 3,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      aux_sym_parameter_list_token1,
    STATE(328), 1,
      aux_sym_parameter_list_repeat1,
  [5483] = 3,
    ACTIONS(972), 1,
      sym_single_field_variable,
    ACTIONS(974), 1,
      sym_multifield_variable,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
  [5493] = 3,
    ACTIONS(978), 1,
      sym_integer,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_range_spec,
  [5503] = 2,
    ACTIONS(982), 1,
      sym_variable_symbol,
    ACTIONS(984), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [5511] = 3,
    ACTIONS(986), 1,
      sym_variable_symbol,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_class_name_list_repeat1,
  [5521] = 3,
    ACTIONS(991), 1,
      sym_number,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_number_list_repeat1,
  [5531] = 3,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(998), 1,
      sym_allowed_type,
    STATE(315), 1,
      aux_sym_type_specification_repeat1,
  [5541] = 3,
    ACTIONS(1000), 1,
      sym_float,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_float_list_repeat1,
  [5551] = 3,
    ACTIONS(1005), 1,
      sym_integer,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_integer_list_repeat1,
  [5561] = 3,
    ACTIONS(1010), 1,
      sym_symbol,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_symbol_list_repeat1,
  [5571] = 3,
    ACTIONS(1014), 1,
      sym_str_lit,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      aux_sym_string_list_repeat1,
  [5581] = 3,
    ACTIONS(1019), 1,
      sym_str_lit,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      aux_sym_string_list_repeat1,
  [5591] = 3,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(1025), 1,
      sym_allowed_type,
    STATE(315), 1,
      aux_sym_type_specification_repeat1,
  [5601] = 1,
    ACTIONS(1028), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [5607] = 2,
    STATE(332), 1,
      sym_cardinality_specification,
    ACTIONS(1030), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5615] = 2,
    STATE(330), 1,
      sym_range_specification,
    ACTIONS(1032), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5623] = 3,
    ACTIONS(443), 1,
      sym_symbol,
    ACTIONS(445), 1,
      sym_variable_symbol,
    ACTIONS(463), 1,
      anon_sym_object,
  [5633] = 3,
    ACTIONS(1034), 1,
      sym_float,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_float_list_repeat1,
  [5643] = 2,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(233), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [5651] = 3,
    ACTIONS(1038), 1,
      sym_number,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_number_list_repeat1,
  [5661] = 3,
    ACTIONS(1042), 1,
      sym_str_lit,
    ACTIONS(1044), 1,
      sym_integer,
    ACTIONS(1046), 1,
      anon_sym_LPAREN,
  [5671] = 3,
    ACTIONS(1048), 1,
      sym_variable_symbol,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_class_name_list_repeat1,
  [5681] = 3,
    ACTIONS(1052), 1,
      sym_symbol,
    ACTIONS(1054), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(1056), 1,
      anon_sym_if,
  [5691] = 3,
    ACTIONS(1048), 1,
      sym_variable_symbol,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_class_name_list_repeat1,
  [5701] = 3,
    ACTIONS(1060), 1,
      sym_symbol,
    ACTIONS(1062), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(1064), 1,
      anon_sym_if,
  [5711] = 3,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(1068), 1,
      aux_sym_parameter_list_token1,
    STATE(328), 1,
      aux_sym_parameter_list_repeat1,
  [5721] = 1,
    ACTIONS(1071), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5727] = 2,
    STATE(402), 1,
      sym_range_specification,
    ACTIONS(1032), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [5735] = 1,
    ACTIONS(1073), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [5741] = 2,
    STATE(401), 1,
      sym_cardinality_specification,
    ACTIONS(1030), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [5749] = 3,
    ACTIONS(972), 1,
      sym_single_field_variable,
    ACTIONS(1075), 1,
      sym_multifield_variable,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [5759] = 3,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    ACTIONS(1079), 1,
      sym_integer,
    STATE(26), 1,
      sym_range_spec,
  [5769] = 3,
    ACTIONS(1081), 1,
      sym_symbol,
    ACTIONS(1083), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(1085), 1,
      anon_sym_if,
  [5779] = 3,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    ACTIONS(1087), 1,
      sym_integer,
    STATE(15), 1,
      sym_range_spec,
  [5789] = 3,
    ACTIONS(1089), 1,
      sym_single_field_variable,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_parameter_list,
  [5799] = 3,
    ACTIONS(1089), 1,
      sym_single_field_variable,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_parameter_list,
  [5809] = 3,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(1097), 1,
      aux_sym_parameter_list_token1,
    STATE(303), 1,
      aux_sym_parameter_list_repeat1,
  [5819] = 1,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5824] = 1,
    ACTIONS(1101), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5829] = 2,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_function_call,
  [5836] = 1,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5841] = 2,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(1107), 1,
      aux_sym_parameter_list_token1,
  [5848] = 2,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    ACTIONS(1111), 1,
      aux_sym_parameter_list_token1,
  [5855] = 1,
    ACTIONS(1113), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5860] = 2,
    ACTIONS(1115), 1,
      anon_sym_salience,
    ACTIONS(1117), 1,
      anon_sym_auto_DASHfocus,
  [5867] = 1,
    ACTIONS(1119), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5872] = 2,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym_function_call,
  [5879] = 2,
    ACTIONS(1121), 1,
      sym_str_lit,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
  [5886] = 2,
    ACTIONS(1125), 1,
      sym_str_lit,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
  [5893] = 2,
    ACTIONS(1129), 1,
      sym_single_field_variable,
    ACTIONS(1131), 1,
      sym_multifield_variable,
  [5900] = 2,
    ACTIONS(1133), 1,
      sym_symbol,
    ACTIONS(1135), 1,
      sym_variable_symbol,
  [5907] = 1,
    ACTIONS(1137), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5912] = 1,
    ACTIONS(1139), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5917] = 1,
    ACTIONS(1141), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5922] = 1,
    ACTIONS(1143), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5927] = 2,
    ACTIONS(1145), 1,
      anon_sym_slot,
    ACTIONS(1147), 1,
      anon_sym_multislot,
  [5934] = 1,
    ACTIONS(1149), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5939] = 2,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_function_call,
  [5946] = 1,
    ACTIONS(1151), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5951] = 1,
    ACTIONS(1153), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5956] = 1,
    ACTIONS(1155), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5961] = 1,
    ACTIONS(1157), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5966] = 1,
    ACTIONS(1159), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5971] = 1,
    ACTIONS(1161), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5976] = 1,
    ACTIONS(1163), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5981] = 1,
    ACTIONS(1165), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [5986] = 1,
    ACTIONS(1167), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5991] = 1,
    ACTIONS(1169), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5996] = 1,
    ACTIONS(1171), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [6001] = 1,
    ACTIONS(1173), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6006] = 2,
    ACTIONS(1175), 1,
      sym_str_lit,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
  [6013] = 1,
    ACTIONS(1179), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6018] = 1,
    ACTIONS(1181), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6023] = 1,
    ACTIONS(1183), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6028] = 1,
    ACTIONS(1185), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6033] = 1,
    ACTIONS(1187), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6038] = 1,
    ACTIONS(1189), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6043] = 1,
    ACTIONS(1191), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6048] = 1,
    ACTIONS(1193), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6053] = 2,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(1197), 1,
      aux_sym_parameter_list_token1,
  [6060] = 1,
    ACTIONS(1199), 1,
      anon_sym_LT_DASH,
  [6064] = 1,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
  [6068] = 1,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
  [6072] = 1,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
  [6076] = 1,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
  [6080] = 1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [6084] = 1,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
  [6088] = 1,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
  [6092] = 1,
    ACTIONS(1213), 1,
      sym_symbol,
  [6096] = 1,
    ACTIONS(972), 1,
      sym_single_field_variable,
  [6100] = 1,
    ACTIONS(1215), 1,
      sym_boolean_symbol,
  [6104] = 1,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [6108] = 1,
    ACTIONS(1217), 1,
      sym_variable_symbol,
  [6112] = 1,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [6116] = 1,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
  [6120] = 1,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
  [6124] = 1,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [6128] = 1,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
  [6132] = 1,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [6136] = 1,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [6140] = 1,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
  [6144] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [6148] = 1,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
  [6152] = 1,
    ACTIONS(1237), 1,
      sym_variable_symbol,
  [6156] = 1,
    ACTIONS(1239), 1,
      sym_variable_symbol,
  [6160] = 1,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
  [6164] = 1,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [6168] = 1,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
  [6172] = 1,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [6176] = 1,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
  [6180] = 1,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
  [6184] = 1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [6188] = 1,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
  [6192] = 1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [6196] = 1,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [6200] = 1,
    ACTIONS(1257), 1,
      sym_single_field_variable,
  [6204] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [6208] = 1,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
  [6212] = 1,
    ACTIONS(1259), 1,
      anon_sym_then,
  [6216] = 1,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
  [6220] = 1,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
  [6224] = 1,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
  [6228] = 1,
    ACTIONS(1129), 1,
      sym_single_field_variable,
  [6232] = 1,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
  [6236] = 1,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
  [6240] = 1,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [6244] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [6248] = 1,
    ACTIONS(1269), 1,
      anon_sym_EQ,
  [6252] = 1,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
  [6256] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [6260] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [6264] = 1,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
  [6268] = 1,
    ACTIONS(1279), 1,
      sym_symbol,
  [6272] = 1,
    ACTIONS(1281), 1,
      sym_symbol,
  [6276] = 1,
    ACTIONS(1283), 1,
      sym_symbol,
  [6280] = 1,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
  [6284] = 1,
    ACTIONS(1287), 1,
      sym_symbol,
  [6288] = 1,
    ACTIONS(1289), 1,
      sym_variable_symbol,
  [6292] = 1,
    ACTIONS(1291), 1,
      sym_variable_symbol,
  [6296] = 1,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [6300] = 1,
    ACTIONS(1295), 1,
      ts_builtin_sym_end,
  [6304] = 1,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [6308] = 1,
    ACTIONS(1297), 1,
      sym_symbol,
  [6312] = 1,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [6316] = 1,
    ACTIONS(1301), 1,
      anon_sym_then,
  [6320] = 1,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
  [6324] = 1,
    ACTIONS(1305), 1,
      sym_symbol,
  [6328] = 1,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [6332] = 1,
    ACTIONS(1309), 1,
      anon_sym_then,
  [6336] = 1,
    ACTIONS(1311), 1,
      sym_variable_symbol,
  [6340] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 353,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 500,
  [SMALL_STATE(18)] = 526,
  [SMALL_STATE(19)] = 552,
  [SMALL_STATE(20)] = 578,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 632,
  [SMALL_STATE(23)] = 658,
  [SMALL_STATE(24)] = 686,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 740,
  [SMALL_STATE(27)] = 768,
  [SMALL_STATE(28)] = 794,
  [SMALL_STATE(29)] = 820,
  [SMALL_STATE(30)] = 846,
  [SMALL_STATE(31)] = 874,
  [SMALL_STATE(32)] = 902,
  [SMALL_STATE(33)] = 930,
  [SMALL_STATE(34)] = 956,
  [SMALL_STATE(35)] = 981,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1081,
  [SMALL_STATE(40)] = 1106,
  [SMALL_STATE(41)] = 1131,
  [SMALL_STATE(42)] = 1156,
  [SMALL_STATE(43)] = 1181,
  [SMALL_STATE(44)] = 1206,
  [SMALL_STATE(45)] = 1231,
  [SMALL_STATE(46)] = 1256,
  [SMALL_STATE(47)] = 1281,
  [SMALL_STATE(48)] = 1306,
  [SMALL_STATE(49)] = 1331,
  [SMALL_STATE(50)] = 1356,
  [SMALL_STATE(51)] = 1381,
  [SMALL_STATE(52)] = 1406,
  [SMALL_STATE(53)] = 1431,
  [SMALL_STATE(54)] = 1456,
  [SMALL_STATE(55)] = 1481,
  [SMALL_STATE(56)] = 1506,
  [SMALL_STATE(57)] = 1531,
  [SMALL_STATE(58)] = 1556,
  [SMALL_STATE(59)] = 1581,
  [SMALL_STATE(60)] = 1606,
  [SMALL_STATE(61)] = 1631,
  [SMALL_STATE(62)] = 1656,
  [SMALL_STATE(63)] = 1681,
  [SMALL_STATE(64)] = 1706,
  [SMALL_STATE(65)] = 1731,
  [SMALL_STATE(66)] = 1756,
  [SMALL_STATE(67)] = 1781,
  [SMALL_STATE(68)] = 1806,
  [SMALL_STATE(69)] = 1831,
  [SMALL_STATE(70)] = 1854,
  [SMALL_STATE(71)] = 1877,
  [SMALL_STATE(72)] = 1900,
  [SMALL_STATE(73)] = 1925,
  [SMALL_STATE(74)] = 1948,
  [SMALL_STATE(75)] = 1973,
  [SMALL_STATE(76)] = 1998,
  [SMALL_STATE(77)] = 2023,
  [SMALL_STATE(78)] = 2048,
  [SMALL_STATE(79)] = 2073,
  [SMALL_STATE(80)] = 2098,
  [SMALL_STATE(81)] = 2123,
  [SMALL_STATE(82)] = 2148,
  [SMALL_STATE(83)] = 2173,
  [SMALL_STATE(84)] = 2198,
  [SMALL_STATE(85)] = 2223,
  [SMALL_STATE(86)] = 2248,
  [SMALL_STATE(87)] = 2273,
  [SMALL_STATE(88)] = 2298,
  [SMALL_STATE(89)] = 2323,
  [SMALL_STATE(90)] = 2358,
  [SMALL_STATE(91)] = 2383,
  [SMALL_STATE(92)] = 2408,
  [SMALL_STATE(93)] = 2433,
  [SMALL_STATE(94)] = 2458,
  [SMALL_STATE(95)] = 2483,
  [SMALL_STATE(96)] = 2508,
  [SMALL_STATE(97)] = 2533,
  [SMALL_STATE(98)] = 2558,
  [SMALL_STATE(99)] = 2583,
  [SMALL_STATE(100)] = 2608,
  [SMALL_STATE(101)] = 2633,
  [SMALL_STATE(102)] = 2658,
  [SMALL_STATE(103)] = 2683,
  [SMALL_STATE(104)] = 2708,
  [SMALL_STATE(105)] = 2733,
  [SMALL_STATE(106)] = 2758,
  [SMALL_STATE(107)] = 2783,
  [SMALL_STATE(108)] = 2808,
  [SMALL_STATE(109)] = 2831,
  [SMALL_STATE(110)] = 2856,
  [SMALL_STATE(111)] = 2881,
  [SMALL_STATE(112)] = 2906,
  [SMALL_STATE(113)] = 2931,
  [SMALL_STATE(114)] = 2956,
  [SMALL_STATE(115)] = 2981,
  [SMALL_STATE(116)] = 3006,
  [SMALL_STATE(117)] = 3030,
  [SMALL_STATE(118)] = 3052,
  [SMALL_STATE(119)] = 3074,
  [SMALL_STATE(120)] = 3095,
  [SMALL_STATE(121)] = 3118,
  [SMALL_STATE(122)] = 3137,
  [SMALL_STATE(123)] = 3154,
  [SMALL_STATE(124)] = 3179,
  [SMALL_STATE(125)] = 3202,
  [SMALL_STATE(126)] = 3227,
  [SMALL_STATE(127)] = 3252,
  [SMALL_STATE(128)] = 3269,
  [SMALL_STATE(129)] = 3312,
  [SMALL_STATE(130)] = 3333,
  [SMALL_STATE(131)] = 3354,
  [SMALL_STATE(132)] = 3377,
  [SMALL_STATE(133)] = 3394,
  [SMALL_STATE(134)] = 3411,
  [SMALL_STATE(135)] = 3428,
  [SMALL_STATE(136)] = 3445,
  [SMALL_STATE(137)] = 3473,
  [SMALL_STATE(138)] = 3493,
  [SMALL_STATE(139)] = 3521,
  [SMALL_STATE(140)] = 3538,
  [SMALL_STATE(141)] = 3553,
  [SMALL_STATE(142)] = 3568,
  [SMALL_STATE(143)] = 3602,
  [SMALL_STATE(144)] = 3615,
  [SMALL_STATE(145)] = 3628,
  [SMALL_STATE(146)] = 3647,
  [SMALL_STATE(147)] = 3660,
  [SMALL_STATE(148)] = 3673,
  [SMALL_STATE(149)] = 3686,
  [SMALL_STATE(150)] = 3699,
  [SMALL_STATE(151)] = 3716,
  [SMALL_STATE(152)] = 3729,
  [SMALL_STATE(153)] = 3742,
  [SMALL_STATE(154)] = 3759,
  [SMALL_STATE(155)] = 3776,
  [SMALL_STATE(156)] = 3795,
  [SMALL_STATE(157)] = 3808,
  [SMALL_STATE(158)] = 3821,
  [SMALL_STATE(159)] = 3838,
  [SMALL_STATE(160)] = 3855,
  [SMALL_STATE(161)] = 3886,
  [SMALL_STATE(162)] = 3899,
  [SMALL_STATE(163)] = 3911,
  [SMALL_STATE(164)] = 3923,
  [SMALL_STATE(165)] = 3937,
  [SMALL_STATE(166)] = 3949,
  [SMALL_STATE(167)] = 3961,
  [SMALL_STATE(168)] = 3973,
  [SMALL_STATE(169)] = 3985,
  [SMALL_STATE(170)] = 3997,
  [SMALL_STATE(171)] = 4009,
  [SMALL_STATE(172)] = 4021,
  [SMALL_STATE(173)] = 4038,
  [SMALL_STATE(174)] = 4058,
  [SMALL_STATE(175)] = 4080,
  [SMALL_STATE(176)] = 4094,
  [SMALL_STATE(177)] = 4114,
  [SMALL_STATE(178)] = 4130,
  [SMALL_STATE(179)] = 4150,
  [SMALL_STATE(180)] = 4172,
  [SMALL_STATE(181)] = 4192,
  [SMALL_STATE(182)] = 4214,
  [SMALL_STATE(183)] = 4236,
  [SMALL_STATE(184)] = 4250,
  [SMALL_STATE(185)] = 4272,
  [SMALL_STATE(186)] = 4292,
  [SMALL_STATE(187)] = 4308,
  [SMALL_STATE(188)] = 4328,
  [SMALL_STATE(189)] = 4348,
  [SMALL_STATE(190)] = 4368,
  [SMALL_STATE(191)] = 4381,
  [SMALL_STATE(192)] = 4394,
  [SMALL_STATE(193)] = 4407,
  [SMALL_STATE(194)] = 4420,
  [SMALL_STATE(195)] = 4435,
  [SMALL_STATE(196)] = 4448,
  [SMALL_STATE(197)] = 4461,
  [SMALL_STATE(198)] = 4474,
  [SMALL_STATE(199)] = 4487,
  [SMALL_STATE(200)] = 4500,
  [SMALL_STATE(201)] = 4513,
  [SMALL_STATE(202)] = 4526,
  [SMALL_STATE(203)] = 4539,
  [SMALL_STATE(204)] = 4552,
  [SMALL_STATE(205)] = 4565,
  [SMALL_STATE(206)] = 4580,
  [SMALL_STATE(207)] = 4588,
  [SMALL_STATE(208)] = 4596,
  [SMALL_STATE(209)] = 4608,
  [SMALL_STATE(210)] = 4620,
  [SMALL_STATE(211)] = 4632,
  [SMALL_STATE(212)] = 4646,
  [SMALL_STATE(213)] = 4656,
  [SMALL_STATE(214)] = 4667,
  [SMALL_STATE(215)] = 4676,
  [SMALL_STATE(216)] = 4685,
  [SMALL_STATE(217)] = 4694,
  [SMALL_STATE(218)] = 4701,
  [SMALL_STATE(219)] = 4710,
  [SMALL_STATE(220)] = 4717,
  [SMALL_STATE(221)] = 4726,
  [SMALL_STATE(222)] = 4735,
  [SMALL_STATE(223)] = 4742,
  [SMALL_STATE(224)] = 4751,
  [SMALL_STATE(225)] = 4760,
  [SMALL_STATE(226)] = 4769,
  [SMALL_STATE(227)] = 4778,
  [SMALL_STATE(228)] = 4787,
  [SMALL_STATE(229)] = 4798,
  [SMALL_STATE(230)] = 4805,
  [SMALL_STATE(231)] = 4814,
  [SMALL_STATE(232)] = 4825,
  [SMALL_STATE(233)] = 4836,
  [SMALL_STATE(234)] = 4847,
  [SMALL_STATE(235)] = 4854,
  [SMALL_STATE(236)] = 4865,
  [SMALL_STATE(237)] = 4874,
  [SMALL_STATE(238)] = 4885,
  [SMALL_STATE(239)] = 4894,
  [SMALL_STATE(240)] = 4903,
  [SMALL_STATE(241)] = 4912,
  [SMALL_STATE(242)] = 4919,
  [SMALL_STATE(243)] = 4928,
  [SMALL_STATE(244)] = 4939,
  [SMALL_STATE(245)] = 4952,
  [SMALL_STATE(246)] = 4965,
  [SMALL_STATE(247)] = 4978,
  [SMALL_STATE(248)] = 4985,
  [SMALL_STATE(249)] = 4998,
  [SMALL_STATE(250)] = 5011,
  [SMALL_STATE(251)] = 5024,
  [SMALL_STATE(252)] = 5037,
  [SMALL_STATE(253)] = 5050,
  [SMALL_STATE(254)] = 5057,
  [SMALL_STATE(255)] = 5066,
  [SMALL_STATE(256)] = 5077,
  [SMALL_STATE(257)] = 5086,
  [SMALL_STATE(258)] = 5095,
  [SMALL_STATE(259)] = 5102,
  [SMALL_STATE(260)] = 5111,
  [SMALL_STATE(261)] = 5122,
  [SMALL_STATE(262)] = 5131,
  [SMALL_STATE(263)] = 5140,
  [SMALL_STATE(264)] = 5147,
  [SMALL_STATE(265)] = 5158,
  [SMALL_STATE(266)] = 5167,
  [SMALL_STATE(267)] = 5174,
  [SMALL_STATE(268)] = 5183,
  [SMALL_STATE(269)] = 5192,
  [SMALL_STATE(270)] = 5201,
  [SMALL_STATE(271)] = 5210,
  [SMALL_STATE(272)] = 5217,
  [SMALL_STATE(273)] = 5226,
  [SMALL_STATE(274)] = 5235,
  [SMALL_STATE(275)] = 5242,
  [SMALL_STATE(276)] = 5249,
  [SMALL_STATE(277)] = 5258,
  [SMALL_STATE(278)] = 5267,
  [SMALL_STATE(279)] = 5276,
  [SMALL_STATE(280)] = 5285,
  [SMALL_STATE(281)] = 5294,
  [SMALL_STATE(282)] = 5303,
  [SMALL_STATE(283)] = 5312,
  [SMALL_STATE(284)] = 5321,
  [SMALL_STATE(285)] = 5328,
  [SMALL_STATE(286)] = 5337,
  [SMALL_STATE(287)] = 5346,
  [SMALL_STATE(288)] = 5353,
  [SMALL_STATE(289)] = 5360,
  [SMALL_STATE(290)] = 5369,
  [SMALL_STATE(291)] = 5378,
  [SMALL_STATE(292)] = 5389,
  [SMALL_STATE(293)] = 5398,
  [SMALL_STATE(294)] = 5405,
  [SMALL_STATE(295)] = 5412,
  [SMALL_STATE(296)] = 5421,
  [SMALL_STATE(297)] = 5431,
  [SMALL_STATE(298)] = 5437,
  [SMALL_STATE(299)] = 5445,
  [SMALL_STATE(300)] = 5451,
  [SMALL_STATE(301)] = 5457,
  [SMALL_STATE(302)] = 5463,
  [SMALL_STATE(303)] = 5473,
  [SMALL_STATE(304)] = 5483,
  [SMALL_STATE(305)] = 5493,
  [SMALL_STATE(306)] = 5503,
  [SMALL_STATE(307)] = 5511,
  [SMALL_STATE(308)] = 5521,
  [SMALL_STATE(309)] = 5531,
  [SMALL_STATE(310)] = 5541,
  [SMALL_STATE(311)] = 5551,
  [SMALL_STATE(312)] = 5561,
  [SMALL_STATE(313)] = 5571,
  [SMALL_STATE(314)] = 5581,
  [SMALL_STATE(315)] = 5591,
  [SMALL_STATE(316)] = 5601,
  [SMALL_STATE(317)] = 5607,
  [SMALL_STATE(318)] = 5615,
  [SMALL_STATE(319)] = 5623,
  [SMALL_STATE(320)] = 5633,
  [SMALL_STATE(321)] = 5643,
  [SMALL_STATE(322)] = 5651,
  [SMALL_STATE(323)] = 5661,
  [SMALL_STATE(324)] = 5671,
  [SMALL_STATE(325)] = 5681,
  [SMALL_STATE(326)] = 5691,
  [SMALL_STATE(327)] = 5701,
  [SMALL_STATE(328)] = 5711,
  [SMALL_STATE(329)] = 5721,
  [SMALL_STATE(330)] = 5727,
  [SMALL_STATE(331)] = 5735,
  [SMALL_STATE(332)] = 5741,
  [SMALL_STATE(333)] = 5749,
  [SMALL_STATE(334)] = 5759,
  [SMALL_STATE(335)] = 5769,
  [SMALL_STATE(336)] = 5779,
  [SMALL_STATE(337)] = 5789,
  [SMALL_STATE(338)] = 5799,
  [SMALL_STATE(339)] = 5809,
  [SMALL_STATE(340)] = 5819,
  [SMALL_STATE(341)] = 5824,
  [SMALL_STATE(342)] = 5829,
  [SMALL_STATE(343)] = 5836,
  [SMALL_STATE(344)] = 5841,
  [SMALL_STATE(345)] = 5848,
  [SMALL_STATE(346)] = 5855,
  [SMALL_STATE(347)] = 5860,
  [SMALL_STATE(348)] = 5867,
  [SMALL_STATE(349)] = 5872,
  [SMALL_STATE(350)] = 5879,
  [SMALL_STATE(351)] = 5886,
  [SMALL_STATE(352)] = 5893,
  [SMALL_STATE(353)] = 5900,
  [SMALL_STATE(354)] = 5907,
  [SMALL_STATE(355)] = 5912,
  [SMALL_STATE(356)] = 5917,
  [SMALL_STATE(357)] = 5922,
  [SMALL_STATE(358)] = 5927,
  [SMALL_STATE(359)] = 5934,
  [SMALL_STATE(360)] = 5939,
  [SMALL_STATE(361)] = 5946,
  [SMALL_STATE(362)] = 5951,
  [SMALL_STATE(363)] = 5956,
  [SMALL_STATE(364)] = 5961,
  [SMALL_STATE(365)] = 5966,
  [SMALL_STATE(366)] = 5971,
  [SMALL_STATE(367)] = 5976,
  [SMALL_STATE(368)] = 5981,
  [SMALL_STATE(369)] = 5986,
  [SMALL_STATE(370)] = 5991,
  [SMALL_STATE(371)] = 5996,
  [SMALL_STATE(372)] = 6001,
  [SMALL_STATE(373)] = 6006,
  [SMALL_STATE(374)] = 6013,
  [SMALL_STATE(375)] = 6018,
  [SMALL_STATE(376)] = 6023,
  [SMALL_STATE(377)] = 6028,
  [SMALL_STATE(378)] = 6033,
  [SMALL_STATE(379)] = 6038,
  [SMALL_STATE(380)] = 6043,
  [SMALL_STATE(381)] = 6048,
  [SMALL_STATE(382)] = 6053,
  [SMALL_STATE(383)] = 6060,
  [SMALL_STATE(384)] = 6064,
  [SMALL_STATE(385)] = 6068,
  [SMALL_STATE(386)] = 6072,
  [SMALL_STATE(387)] = 6076,
  [SMALL_STATE(388)] = 6080,
  [SMALL_STATE(389)] = 6084,
  [SMALL_STATE(390)] = 6088,
  [SMALL_STATE(391)] = 6092,
  [SMALL_STATE(392)] = 6096,
  [SMALL_STATE(393)] = 6100,
  [SMALL_STATE(394)] = 6104,
  [SMALL_STATE(395)] = 6108,
  [SMALL_STATE(396)] = 6112,
  [SMALL_STATE(397)] = 6116,
  [SMALL_STATE(398)] = 6120,
  [SMALL_STATE(399)] = 6124,
  [SMALL_STATE(400)] = 6128,
  [SMALL_STATE(401)] = 6132,
  [SMALL_STATE(402)] = 6136,
  [SMALL_STATE(403)] = 6140,
  [SMALL_STATE(404)] = 6144,
  [SMALL_STATE(405)] = 6148,
  [SMALL_STATE(406)] = 6152,
  [SMALL_STATE(407)] = 6156,
  [SMALL_STATE(408)] = 6160,
  [SMALL_STATE(409)] = 6164,
  [SMALL_STATE(410)] = 6168,
  [SMALL_STATE(411)] = 6172,
  [SMALL_STATE(412)] = 6176,
  [SMALL_STATE(413)] = 6180,
  [SMALL_STATE(414)] = 6184,
  [SMALL_STATE(415)] = 6188,
  [SMALL_STATE(416)] = 6192,
  [SMALL_STATE(417)] = 6196,
  [SMALL_STATE(418)] = 6200,
  [SMALL_STATE(419)] = 6204,
  [SMALL_STATE(420)] = 6208,
  [SMALL_STATE(421)] = 6212,
  [SMALL_STATE(422)] = 6216,
  [SMALL_STATE(423)] = 6220,
  [SMALL_STATE(424)] = 6224,
  [SMALL_STATE(425)] = 6228,
  [SMALL_STATE(426)] = 6232,
  [SMALL_STATE(427)] = 6236,
  [SMALL_STATE(428)] = 6240,
  [SMALL_STATE(429)] = 6244,
  [SMALL_STATE(430)] = 6248,
  [SMALL_STATE(431)] = 6252,
  [SMALL_STATE(432)] = 6256,
  [SMALL_STATE(433)] = 6260,
  [SMALL_STATE(434)] = 6264,
  [SMALL_STATE(435)] = 6268,
  [SMALL_STATE(436)] = 6272,
  [SMALL_STATE(437)] = 6276,
  [SMALL_STATE(438)] = 6280,
  [SMALL_STATE(439)] = 6284,
  [SMALL_STATE(440)] = 6288,
  [SMALL_STATE(441)] = 6292,
  [SMALL_STATE(442)] = 6296,
  [SMALL_STATE(443)] = 6300,
  [SMALL_STATE(444)] = 6304,
  [SMALL_STATE(445)] = 6308,
  [SMALL_STATE(446)] = 6312,
  [SMALL_STATE(447)] = 6316,
  [SMALL_STATE(448)] = 6320,
  [SMALL_STATE(449)] = 6324,
  [SMALL_STATE(450)] = 6328,
  [SMALL_STATE(451)] = 6332,
  [SMALL_STATE(452)] = 6336,
  [SMALL_STATE(453)] = 6340,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(383),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(160),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(127),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(140),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(145),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(342),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(29),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(335),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(106),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(325),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(124),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(391),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(182),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 1), SHIFT(340),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(128),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(378),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(175),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(219),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(425),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(395),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(358),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2), SHIFT_REPEAT(353),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deffacts_construct_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexeme_list, 1),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(209),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(210),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(306),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 9, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 7, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 10),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(430),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 7),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 8),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 7),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 11),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(452),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 10),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 10, .production_id = 7),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffunction_construct, 8, .production_id = 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 10),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 11, .production_id = 10),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 8, .production_id = 7),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(347),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 8),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 11),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(302),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2), SHIFT_REPEAT(307),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_list_repeat1, 2),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(308),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(310),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(311),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_list, 1),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(313),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(315),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(392),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 9),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 9),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 5),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 5),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 9),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 9),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 5),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 5),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 11),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 8),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 11),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 8),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
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
