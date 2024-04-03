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
#define STATE_COUNT 450
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 174
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
  sym__rhs_slot = 92,
  sym_single_field_rhs_slot = 93,
  sym_multifield_rhs_slot = 94,
  sym__rhs_field = 95,
  sym_deftemplate_construct = 96,
  sym__slot_definition = 97,
  sym_single_slot_definition = 98,
  sym_multislot_definition = 99,
  sym__template_attribute = 100,
  sym_default_attribute = 101,
  sym__constraint_attribute = 102,
  sym_type_attribute = 103,
  sym_type_specification = 104,
  sym_allowed_constant_attribute = 105,
  sym_symbol_list = 106,
  sym_string_list = 107,
  sym_lexeme_list = 108,
  sym_integer_list = 109,
  sym_float_list = 110,
  sym_number_list = 111,
  sym_class_name_list = 112,
  sym_instance_list = 113,
  sym_value_list = 114,
  sym_range_attribute = 115,
  sym_range_specification = 116,
  sym_cardinality_attribute = 117,
  sym_cardinality_specification = 118,
  sym_defrule_construct = 119,
  sym_declaration = 120,
  sym_rule_property = 121,
  sym__conditional_element = 122,
  sym__pattern_CE = 123,
  sym_assigned_pattern_CE = 124,
  sym_not_CE = 125,
  sym_and_CE = 126,
  sym_or_CE = 127,
  sym_logical_CE = 128,
  sym_test_CE = 129,
  sym_exists_CE = 130,
  sym_forall_CE = 131,
  sym_ordered_pattern_CE = 132,
  sym_template_pattern_CE = 133,
  sym_object_pattern_CE = 134,
  sym_attribute_constraint = 135,
  sym_lhs_slot = 136,
  sym_constraint = 137,
  sym_connected_constraint = 138,
  sym_single_constraint = 139,
  sym_term = 140,
  sym_defglobal_construct = 141,
  sym__global_assignment = 142,
  sym_deffunction_construct = 143,
  sym_parameter_list = 144,
  sym_defgeneric_construct = 145,
  sym_defmethod_construct = 146,
  sym_parameter_restriction = 147,
  sym_wildcard_parameter_restriction = 148,
  sym_query = 149,
  aux_sym_program_repeat1 = 150,
  aux_sym_function_call_repeat1 = 151,
  aux_sym_assert_repeat1 = 152,
  aux_sym_fact_set_template_repeat1 = 153,
  aux_sym_fact_set_member_template_repeat1 = 154,
  aux_sym_ordered_rhs_pattern_repeat1 = 155,
  aux_sym_template_rhs_pattern_repeat1 = 156,
  aux_sym_deftemplate_construct_repeat1 = 157,
  aux_sym_single_slot_definition_repeat1 = 158,
  aux_sym_type_specification_repeat1 = 159,
  aux_sym_string_list_repeat1 = 160,
  aux_sym_lexeme_list_repeat1 = 161,
  aux_sym_integer_list_repeat1 = 162,
  aux_sym_float_list_repeat1 = 163,
  aux_sym_number_list_repeat1 = 164,
  aux_sym_value_list_repeat1 = 165,
  aux_sym_defrule_construct_repeat1 = 166,
  aux_sym_declaration_repeat1 = 167,
  aux_sym_ordered_pattern_CE_repeat1 = 168,
  aux_sym_template_pattern_CE_repeat1 = 169,
  aux_sym_object_pattern_CE_repeat1 = 170,
  aux_sym_defglobal_construct_repeat1 = 171,
  aux_sym_parameter_list_repeat1 = 172,
  aux_sym_defmethod_construct_repeat1 = 173,
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
  [10] = 6,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 16,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 12,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 25,
  [42] = 42,
  [43] = 24,
  [44] = 16,
  [45] = 45,
  [46] = 17,
  [47] = 23,
  [48] = 48,
  [49] = 40,
  [50] = 26,
  [51] = 17,
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
  [62] = 28,
  [63] = 22,
  [64] = 35,
  [65] = 48,
  [66] = 66,
  [67] = 7,
  [68] = 68,
  [69] = 69,
  [70] = 31,
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
  [136] = 125,
  [137] = 124,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 125,
  [146] = 146,
  [147] = 147,
  [148] = 144,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 124,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 155,
  [164] = 164,
  [165] = 146,
  [166] = 139,
  [167] = 167,
  [168] = 147,
  [169] = 169,
  [170] = 170,
  [171] = 142,
  [172] = 161,
  [173] = 141,
  [174] = 174,
  [175] = 157,
  [176] = 156,
  [177] = 140,
  [178] = 160,
  [179] = 179,
  [180] = 149,
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
  [196] = 187,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 195,
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
  [216] = 215,
  [217] = 217,
  [218] = 209,
  [219] = 219,
  [220] = 217,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 221,
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
  [283] = 119,
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
  [294] = 284,
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
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 303,
  [344] = 305,
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
  [371] = 307,
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
  [410] = 410,
  [411] = 411,
  [412] = 125,
  [413] = 124,
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
  [439] = 396,
  [440] = 440,
  [441] = 441,
  [442] = 440,
  [443] = 443,
  [444] = 444,
  [445] = 396,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
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
      if (lookahead == '<') ADVANCE(19);
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
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
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
      if (lookahead == '?') ADVANCE(18);
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
      if (lookahead == '?') ADVANCE(18);
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
      if (lookahead == '?') ADVANCE(18);
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
      if (lookahead == '?') ADVANCE(16);
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
      if (lookahead == '?') ADVANCE(17);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 14:
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 15:
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
          lookahead != '~') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == 'D') ADVANCE(423);
      if (lookahead == 'N') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(479);
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
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
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
      if (lookahead == 'd') ADVANCE(21);
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
      if (lookahead == 'f') ADVANCE(440);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 307:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 315:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 316:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 317:
      if (!sym_instance_name_character_set_1(lookahead)) ADVANCE(15);
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
          lookahead == 'e') ADVANCE(307);
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
          lookahead == 'e') ADVANCE(306);
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
          lookahead == 'e') ADVANCE(306);
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
          lookahead != '~') ADVANCE(15);
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
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 5},
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
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 5},
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
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 30},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 0},
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
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 31},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 13},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 14},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 3},
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
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 12},
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
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 12},
  [382] = {.lex_state = 12},
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
  [407] = {.lex_state = 12},
  [408] = {.lex_state = 12},
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
  [429] = {.lex_state = 12},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 12},
  [438] = {.lex_state = 12},
  [439] = {.lex_state = 12},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 12},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 12},
  [444] = {.lex_state = 12},
  [445] = {.lex_state = 12},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 12},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 12},
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
    [sym_program] = STATE(397),
    [sym__construct] = STATE(135),
    [sym__gap] = STATE(135),
    [sym_deffacts_construct] = STATE(135),
    [sym_deftemplate_construct] = STATE(135),
    [sym_defrule_construct] = STATE(135),
    [sym_defglobal_construct] = STATE(135),
    [sym_deffunction_construct] = STATE(135),
    [sym_defgeneric_construct] = STATE(135),
    [sym_defmethod_construct] = STATE(135),
    [aux_sym_program_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__ws] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    STATE(169), 1,
      sym__rhs_field,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(13), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    STATE(170), 3,
      sym__constant,
      sym__variable,
      sym_function_call,
    ACTIONS(11), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(27), 7,
      sym__expression,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
      aux_sym_function_call_repeat1,
  [42] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(88), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    STATE(261), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [94] = 7,
    ACTIONS(15), 1,
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
  [132] = 7,
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
  [169] = 7,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_else,
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
  [206] = 7,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(62), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(59), 4,
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
  [243] = 7,
    ACTIONS(15), 1,
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
  [280] = 7,
    ACTIONS(53), 1,
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
  [317] = 7,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_else,
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
  [354] = 7,
    ACTIONS(53), 1,
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
  [391] = 6,
    ACTIONS(15), 1,
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
    STATE(41), 10,
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
  [425] = 6,
    ACTIONS(15), 1,
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
    STATE(15), 10,
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
  [459] = 6,
    ACTIONS(15), 1,
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
  [493] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [527] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [561] = 6,
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
  [595] = 6,
    ACTIONS(15), 1,
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
  [629] = 7,
    ACTIONS(132), 1,
      sym_str_lit,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_EQ_GT,
    STATE(107), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(109), 14,
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
  [665] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [699] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(144), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(142), 4,
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
  [733] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [767] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(152), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(150), 4,
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
  [801] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [835] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [869] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [903] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [937] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(164), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(162), 4,
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
  [971] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1005] = 6,
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
    STATE(53), 10,
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
  [1039] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1073] = 6,
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
  [1107] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1141] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1175] = 6,
    ACTIONS(15), 1,
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
  [1209] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1243] = 6,
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
  [1277] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
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
  [1311] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1345] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1379] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1413] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(210), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(208), 4,
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
  [1447] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1481] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1515] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(218), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(216), 4,
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
  [1549] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(224), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(222), 4,
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
  [1583] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(230), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(228), 4,
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
  [1617] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(234), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(232), 4,
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
  [1651] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1685] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1719] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(242), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(240), 4,
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
  [1753] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(248), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(246), 4,
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
  [1787] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1821] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1855] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(256), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(254), 4,
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
  [1889] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(262), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(260), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(36), 10,
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
  [1923] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1957] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [1991] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2025] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(272), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(270), 4,
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
  [2059] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(276), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(274), 4,
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
  [2093] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(282), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(280), 4,
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
  [2127] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2161] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(288), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(286), 4,
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
  [2195] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
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
  [2229] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2263] = 6,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(301), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(298), 4,
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
  [2297] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2331] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2365] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2399] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2433] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2467] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(317), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(315), 4,
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
  [2501] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
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
  [2535] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
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
  [2569] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(329), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(327), 4,
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
  [2603] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2637] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2671] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(337), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(335), 4,
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
  [2705] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2739] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(343), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(341), 4,
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
  [2773] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2807] = 6,
    ACTIONS(15), 1,
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
  [2841] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
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
  [2875] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(120), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(118), 4,
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
  [2909] = 5,
    ACTIONS(363), 1,
      sym_single_field_variable,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
    STATE(86), 14,
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
  [2940] = 12,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(91), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [2985] = 12,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(93), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3030] = 6,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_EQ_GT,
    STATE(100), 1,
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
  [3063] = 12,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(93), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3108] = 12,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(93), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3153] = 12,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(90), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3198] = 12,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      anon_sym_TILDE,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(386), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(391), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(397), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    STATE(93), 2,
      sym_constraint,
      aux_sym_ordered_pattern_CE_repeat1,
    ACTIONS(383), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3243] = 7,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(402), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(400), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(213), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
    STATE(128), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [3278] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(410), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(408), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(384), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3311] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3341] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3371] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3401] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3431] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
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
  [3461] = 5,
    ACTIONS(15), 1,
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
  [3491] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3521] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(432), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(430), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(95), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3551] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3581] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3611] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(440), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(438), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(340), 9,
      sym__expression,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym_loop_for_count,
      sym_if_then_else,
      sym_assert,
      sym_do_for_fact,
      sym_do_for_all_facts,
  [3641] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(102), 14,
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
  [3671] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3701] = 5,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(86), 14,
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
  [3731] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
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
  [3758] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(108), 14,
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
  [3785] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
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
  [3812] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
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
  [3839] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
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
  [3866] = 11,
    ACTIONS(446), 1,
      anon_sym_TILDE,
    STATE(118), 1,
      sym__constant,
    STATE(120), 1,
      sym_term,
    STATE(132), 1,
      sym_connected_constraint,
    STATE(283), 1,
      sym_single_constraint,
    STATE(392), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(27), 2,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
    ACTIONS(448), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [3907] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(394), 13,
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
  [3933] = 4,
    ACTIONS(134), 1,
      sym_single_field_variable,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(112), 13,
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
  [3959] = 3,
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
  [3982] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
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
  [4007] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
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
  [4030] = 6,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(466), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(464), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(123), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4059] = 7,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_ordered_rhs_pattern_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(474), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(472), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(169), 4,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
  [4090] = 6,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(481), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(478), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(123), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4119] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(491), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(489), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4142] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(495), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(493), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4165] = 15,
    ACTIONS(497), 1,
      anon_sym_default,
    ACTIONS(499), 1,
      anon_sym_default_DASHdynamic,
    ACTIONS(501), 1,
      anon_sym_type,
    ACTIONS(503), 1,
      anon_sym_allowed_DASHsymbols,
    ACTIONS(505), 1,
      anon_sym_allowed_DASHstrings,
    ACTIONS(507), 1,
      anon_sym_allowed_DASHlexemes,
    ACTIONS(509), 1,
      anon_sym_allowed_DASHintegers,
    ACTIONS(511), 1,
      anon_sym_allowed_DASHfloats,
    ACTIONS(513), 1,
      anon_sym_allowed_DASHnumbers,
    ACTIONS(515), 1,
      anon_sym_allowed_DASHinstance_DASHnames,
    ACTIONS(517), 1,
      anon_sym_allowed_DASHclasses,
    ACTIONS(519), 1,
      anon_sym_allowed_DASHvalues,
    ACTIONS(521), 1,
      anon_sym_range,
    ACTIONS(523), 1,
      anon_sym_cardinality,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [4212] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(527), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(525), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4235] = 6,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(466), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(464), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    STATE(123), 5,
      sym__constant,
      sym__variable,
      sym_function_call,
      sym__rhs_field,
      aux_sym_ordered_rhs_pattern_repeat1,
  [4264] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(533), 6,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(531), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4287] = 9,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(118), 1,
      sym__constant,
    STATE(119), 1,
      sym_single_constraint,
    STATE(120), 1,
      sym_term,
    STATE(134), 1,
      sym_connected_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4321] = 9,
    ACTIONS(446), 1,
      anon_sym_TILDE,
    STATE(118), 1,
      sym__constant,
    STATE(120), 1,
      sym_term,
    STATE(134), 1,
      sym_connected_constraint,
    STATE(283), 1,
      sym_single_constraint,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(448), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4355] = 3,
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
  [4376] = 4,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 2,
      sym__ws,
      sym_comment,
    STATE(133), 10,
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
  [4399] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(549), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_RPAREN,
      anon_sym_TILDE,
    ACTIONS(547), 8,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_QMARK,
      anon_sym_DOLLAR_QMARK,
      anon_sym_COLON,
      anon_sym_EQ,
  [4420] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 2,
      sym__ws,
      sym_comment,
    STATE(133), 10,
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
  [4443] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(493), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(495), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4463] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(489), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(491), 7,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [4483] = 11,
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
  [4518] = 3,
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
  [4537] = 3,
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
  [4556] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(583), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(585), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4575] = 3,
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
  [4594] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(591), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(593), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4613] = 6,
    STATE(118), 1,
      sym__constant,
    STATE(127), 1,
      sym_term,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(31), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4638] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(493), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(495), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4657] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(595), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(597), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4676] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(599), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(601), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4695] = 6,
    STATE(118), 1,
      sym__constant,
    STATE(127), 1,
      sym_term,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(21), 2,
      sym_single_field_variable,
      sym_multifield_variable,
    ACTIONS(448), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(19), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4720] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(603), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(605), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4739] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(159), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4760] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(159), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4781] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(151), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4802] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(489), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(491), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4821] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(150), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4842] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(617), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(619), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4861] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(621), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(623), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4880] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(625), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_else,
    ACTIONS(627), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4899] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(629), 5,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
      anon_sym_do,
    ACTIONS(631), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4918] = 4,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(159), 8,
      sym__template_attribute,
      sym_default_attribute,
      sym__constraint_attribute,
      sym_type_attribute,
      sym_allowed_constant_attribute,
      sym_range_attribute,
      sym_cardinality_attribute,
      aux_sym_single_slot_definition_repeat1,
  [4939] = 3,
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
  [4958] = 3,
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
  [4977] = 4,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(495), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
    ACTIONS(493), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [4997] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(617), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(619), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5015] = 10,
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
  [5047] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(595), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(597), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5065] = 3,
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
  [5083] = 3,
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
  [5101] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(599), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(601), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5119] = 4,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(653), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(655), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
  [5139] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(660), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(663), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5157] = 3,
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
  [5175] = 3,
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
  [5193] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(583), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(585), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5211] = 3,
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
  [5229] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(625), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(627), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5247] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(621), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
    ACTIONS(623), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5265] = 3,
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
  [5283] = 3,
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
  [5301] = 3,
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
  [5319] = 3,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
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
  [5337] = 5,
    ACTIONS(676), 1,
      anon_sym_QMARKVARIABLE,
    STATE(424), 1,
      sym_value_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(183), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(674), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5358] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(185), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5382] = 4,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(198), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(686), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5400] = 8,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(692), 1,
      sym_global_variable,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(416), 1,
      sym_function_call,
    STATE(433), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5426] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(219), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5450] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(219), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5474] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(12), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(700), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5492] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(186), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5516] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(219), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5540] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(192), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5564] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(189), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5588] = 7,
    ACTIONS(678), 1,
      sym_single_field_variable,
    ACTIONS(680), 1,
      sym_multifield_variable,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_wildcard_parameter_restriction,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(219), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [5612] = 8,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_global_variable,
    ACTIONS(712), 1,
      sym_symbol,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(398), 1,
      sym_query,
    STATE(416), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5638] = 8,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_global_variable,
    ACTIONS(716), 1,
      sym_symbol,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(405), 1,
      sym_query,
    STATE(416), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5664] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(35), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(720), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5682] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(32), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(722), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5700] = 8,
    ACTIONS(724), 1,
      anon_sym_deffacts,
    ACTIONS(726), 1,
      anon_sym_deftemplate,
    ACTIONS(728), 1,
      anon_sym_defrule,
    ACTIONS(730), 1,
      anon_sym_defglobal,
    ACTIONS(732), 1,
      anon_sym_deffunction,
    ACTIONS(734), 1,
      anon_sym_defgeneric,
    ACTIONS(736), 1,
      anon_sym_defmethod,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5726] = 4,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(198), 2,
      sym__constant,
      aux_sym_value_list_repeat1,
    ACTIONS(738), 4,
      sym_str_lit,
      sym_number,
      sym_symbol,
      sym_instance_name,
  [5744] = 8,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(692), 1,
      sym_global_variable,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(416), 1,
      sym_function_call,
    STATE(448), 1,
      sym_query,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [5770] = 5,
    ACTIONS(745), 1,
      sym_str_lit,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(208), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5790] = 5,
    ACTIONS(751), 1,
      sym_str_lit,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(205), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5810] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(64), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(757), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      sym_boolean_symbol,
  [5828] = 4,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(203), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [5845] = 5,
    ACTIONS(766), 1,
      anon_sym_QMARKVARIABLE,
    STATE(424), 1,
      sym_lexeme_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(764), 2,
      sym_str_lit,
      sym_symbol,
    STATE(224), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [5864] = 4,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5881] = 4,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(207), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5898] = 4,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5915] = 4,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(214), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5932] = 4,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [5949] = 4,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(211), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5966] = 4,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(214), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [5983] = 4,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6000] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(203), 4,
      sym__rhs_slot,
      sym_single_field_rhs_slot,
      sym_multifield_rhs_slot,
      aux_sym_template_rhs_pattern_repeat1,
  [6017] = 4,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(214), 4,
      sym__slot_definition,
      sym_single_slot_definition,
      sym_multislot_definition,
      aux_sym_deftemplate_construct_repeat1,
  [6034] = 4,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(440), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(796), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6051] = 4,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(442), 2,
      sym__variable,
      sym_function_call,
    ACTIONS(800), 3,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
  [6068] = 7,
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
  [6091] = 4,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(212), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6108] = 5,
    ACTIONS(816), 1,
      sym_single_field_variable,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(819), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
    STATE(219), 2,
      sym_parameter_restriction,
      aux_sym_defmethod_construct_repeat1,
  [6127] = 7,
    ACTIONS(824), 1,
      sym_symbol,
    ACTIONS(826), 1,
      anon_sym_loop_DASHfor_DASHcount,
    ACTIONS(828), 1,
      anon_sym_if,
    ACTIONS(830), 1,
      anon_sym_assert,
    ACTIONS(832), 1,
      anon_sym_do_DASHfor_DASHfact,
    ACTIONS(834), 1,
      anon_sym_do_DASHfor_DASHall_DASHfacts,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6150] = 3,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(218), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6164] = 5,
    ACTIONS(836), 1,
      sym_symbol,
    ACTIONS(838), 1,
      sym_global_variable,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(234), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6182] = 4,
    ACTIONS(842), 1,
      sym_symbol,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(845), 3,
      sym_global_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6198] = 4,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(847), 2,
      sym_str_lit,
      sym_symbol,
    STATE(226), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [6214] = 3,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(209), 4,
      sym__rhs_pattern,
      sym_ordered_rhs_pattern,
      sym_template_rhs_pattern,
      aux_sym_assert_repeat1,
  [6228] = 4,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(851), 2,
      sym_str_lit,
      sym_symbol,
    STATE(226), 2,
      sym__lexeme,
      aux_sym_lexeme_list_repeat1,
  [6244] = 3,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(229), 4,
      sym__pattern_CE,
      sym_ordered_pattern_CE,
      sym_template_pattern_CE,
      sym_object_pattern_CE,
  [6258] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(858), 5,
      sym_single_field_variable,
      sym_multifield_variable,
      sym_global_variable,
      anon_sym_LPAREN,
      sym_boolean_symbol,
  [6270] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(860), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6281] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(862), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6292] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(864), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6303] = 4,
    ACTIONS(838), 1,
      sym_global_variable,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(237), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6318] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(868), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6329] = 4,
    ACTIONS(838), 1,
      sym_global_variable,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6344] = 4,
    ACTIONS(872), 1,
      sym_single_field_variable,
    STATE(235), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(875), 2,
      sym_multifield_variable,
      anon_sym_RPAREN,
  [6359] = 4,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(236), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6374] = 4,
    ACTIONS(838), 1,
      sym_global_variable,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6389] = 4,
    ACTIONS(884), 1,
      sym_global_variable,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(238), 2,
      sym__global_assignment,
      aux_sym_defglobal_construct_repeat1,
  [6404] = 5,
    ACTIONS(889), 1,
      sym_single_field_variable,
    ACTIONS(891), 1,
      sym_multifield_variable,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6421] = 4,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(240), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [6436] = 4,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(236), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6451] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(904), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6462] = 4,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(241), 2,
      sym_attribute_constraint,
      aux_sym_object_pattern_CE_repeat1,
  [6477] = 5,
    ACTIONS(908), 1,
      sym_single_field_variable,
    ACTIONS(910), 1,
      sym_multifield_variable,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6494] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(914), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6505] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(916), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6516] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(918), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6527] = 5,
    ACTIONS(921), 1,
      anon_sym_QMARKVARIABLE,
    ACTIONS(923), 1,
      sym_allowed_type,
    STATE(298), 1,
      aux_sym_type_specification_repeat1,
    STATE(427), 1,
      sym_type_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6544] = 5,
    ACTIONS(925), 1,
      sym_symbol,
    ACTIONS(927), 1,
      anon_sym_QMARKVARIABLE,
    STATE(287), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(424), 1,
      sym_symbol_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6561] = 5,
    ACTIONS(929), 1,
      sym_str_lit,
    ACTIONS(931), 1,
      anon_sym_QMARKVARIABLE,
    STATE(289), 1,
      aux_sym_string_list_repeat1,
    STATE(424), 1,
      sym_string_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6578] = 5,
    ACTIONS(933), 1,
      sym_integer,
    ACTIONS(935), 1,
      anon_sym_QMARKVARIABLE,
    STATE(295), 1,
      aux_sym_integer_list_repeat1,
    STATE(424), 1,
      sym_integer_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6595] = 5,
    ACTIONS(937), 1,
      sym_float,
    ACTIONS(939), 1,
      anon_sym_QMARKVARIABLE,
    STATE(297), 1,
      aux_sym_float_list_repeat1,
    STATE(424), 1,
      sym_float_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6612] = 5,
    ACTIONS(941), 1,
      sym_number,
    ACTIONS(943), 1,
      anon_sym_QMARKVARIABLE,
    STATE(272), 1,
      aux_sym_number_list_repeat1,
    STATE(424), 1,
      sym_number_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6629] = 5,
    ACTIONS(945), 1,
      sym_symbol,
    ACTIONS(947), 1,
      anon_sym_QMARKVARIABLE,
    STATE(290), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(424), 1,
      sym_instance_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6646] = 5,
    ACTIONS(949), 1,
      sym_symbol,
    ACTIONS(951), 1,
      anon_sym_QMARKVARIABLE,
    STATE(292), 1,
      aux_sym_fact_set_member_template_repeat1,
    STATE(424), 1,
      sym_class_name_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6663] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(953), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6674] = 4,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(240), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [6689] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(959), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6700] = 4,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(259), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [6715] = 4,
    ACTIONS(966), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(260), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [6730] = 4,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(259), 2,
      sym_lhs_slot,
      aux_sym_template_pattern_CE_repeat1,
  [6745] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(973), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6756] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(975), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6767] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(977), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6778] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(979), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6789] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(981), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6800] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(983), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6811] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(985), 4,
      sym_single_field_variable,
      sym_multifield_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6822] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(987), 4,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [6833] = 4,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(260), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [6848] = 4,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      sym_allowed_type,
    STATE(271), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6862] = 4,
    ACTIONS(998), 1,
      sym_number,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6876] = 4,
    ACTIONS(1002), 1,
      sym_str_lit,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6890] = 4,
    ACTIONS(1007), 1,
      sym_integer,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6904] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1012), 3,
      sym_single_field_variable,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [6914] = 3,
    ACTIONS(1014), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1016), 2,
      anon_sym_is_DASHa,
      anon_sym_name,
  [6926] = 4,
    ACTIONS(1018), 1,
      sym_float,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6940] = 4,
    ACTIONS(1023), 1,
      sym_number,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_number_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6954] = 3,
    STATE(299), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1028), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [6966] = 3,
    STATE(291), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1030), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [6978] = 4,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [6992] = 3,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(270), 2,
      sym_rule_property,
      aux_sym_declaration_repeat1,
  [7004] = 3,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7016] = 4,
    ACTIONS(1036), 1,
      sym_integer,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_range_spec,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7030] = 4,
    ACTIONS(1040), 1,
      sym_str_lit,
    ACTIONS(1042), 1,
      sym_integer,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7044] = 4,
    ACTIONS(1046), 1,
      sym_str_lit,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7058] = 4,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7072] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1052), 3,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [7082] = 4,
    ACTIONS(1054), 1,
      sym_str_lit,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_string_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7096] = 4,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7110] = 3,
    STATE(387), 1,
      sym_range_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1030), 2,
      sym_number,
      anon_sym_QMARKVARIABLE,
  [7122] = 4,
    ACTIONS(690), 1,
      sym_symbol,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7136] = 3,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    STATE(257), 2,
      sym_fact_set_member_template,
      aux_sym_fact_set_template_repeat1,
  [7148] = 4,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
    ACTIONS(1062), 1,
      sym_integer,
    STATE(5), 1,
      sym_range_spec,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7162] = 4,
    ACTIONS(1064), 1,
      sym_integer,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_integer_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7176] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1068), 3,
      sym_integer,
      anon_sym_RPAREN,
      anon_sym_QMARKVARIABLE,
  [7186] = 4,
    ACTIONS(1070), 1,
      sym_float,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_float_list_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7200] = 4,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(1076), 1,
      sym_allowed_type,
    STATE(271), 1,
      aux_sym_type_specification_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7214] = 3,
    STATE(386), 1,
      sym_cardinality_specification,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1028), 2,
      sym_integer,
      anon_sym_QMARKVARIABLE,
  [7226] = 1,
    ACTIONS(1078), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7233] = 1,
    ACTIONS(1080), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7240] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7249] = 3,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7260] = 1,
    ACTIONS(1086), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7267] = 3,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7278] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7287] = 3,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7298] = 1,
    ACTIONS(1090), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7305] = 1,
    ACTIONS(1092), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7312] = 1,
    ACTIONS(1094), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7319] = 1,
    ACTIONS(1096), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7326] = 1,
    ACTIONS(1098), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7333] = 1,
    ACTIONS(1100), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7340] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7349] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7358] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7367] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7376] = 3,
    ACTIONS(1110), 1,
      sym_str_lit,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7387] = 1,
    ACTIONS(1114), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7394] = 3,
    ACTIONS(1116), 1,
      anon_sym_slot,
    ACTIONS(1118), 1,
      anon_sym_multislot,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7405] = 1,
    ACTIONS(1120), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7412] = 1,
    ACTIONS(1122), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7419] = 1,
    ACTIONS(1124), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7426] = 1,
    ACTIONS(1126), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7433] = 3,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7444] = 1,
    ACTIONS(1128), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7451] = 3,
    ACTIONS(1130), 1,
      sym_str_lit,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7462] = 1,
    ACTIONS(1134), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7469] = 1,
    ACTIONS(1136), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7476] = 1,
    ACTIONS(1138), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7483] = 1,
    ACTIONS(1140), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7490] = 3,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7501] = 1,
    ACTIONS(1142), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7508] = 1,
    ACTIONS(1144), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7515] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7524] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7533] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7542] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1152), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7551] = 1,
    ACTIONS(1154), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7558] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1156), 2,
      sym_global_variable,
      anon_sym_RPAREN,
  [7567] = 1,
    ACTIONS(1158), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7574] = 1,
    ACTIONS(1160), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7581] = 3,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7592] = 3,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_fact_set_template,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7603] = 3,
    ACTIONS(1162), 1,
      sym_symbol,
    STATE(281), 1,
      aux_sym_fact_set_member_template_repeat1,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7614] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1164), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7623] = 1,
    ACTIONS(1166), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7630] = 1,
    ACTIONS(1168), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7637] = 1,
    ACTIONS(1170), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7644] = 1,
    ACTIONS(1172), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7651] = 1,
    ACTIONS(1174), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7658] = 1,
    ACTIONS(1176), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7665] = 1,
    ACTIONS(1178), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7672] = 1,
    ACTIONS(1180), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7679] = 1,
    ACTIONS(1182), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7686] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1184), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7695] = 1,
    ACTIONS(1186), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7702] = 3,
    ACTIONS(1188), 1,
      anon_sym_salience,
    ACTIONS(1190), 1,
      anon_sym_auto_DASHfocus,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7713] = 3,
    ACTIONS(1192), 1,
      sym_single_field_variable,
    ACTIONS(1194), 1,
      sym_multifield_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7724] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1196), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7733] = 1,
    ACTIONS(1198), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7740] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7749] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1202), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7758] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1204), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7767] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1206), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7776] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1208), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7785] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1210), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7794] = 1,
    ACTIONS(1212), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7801] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1214), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7810] = 1,
    ACTIONS(1216), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7817] = 3,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_function_call,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7828] = 1,
    ACTIONS(1220), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7835] = 1,
    ACTIONS(1222), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7842] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1224), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7851] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1226), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7860] = 3,
    ACTIONS(555), 1,
      sym_symbol,
    ACTIONS(573), 1,
      anon_sym_object,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7871] = 1,
    ACTIONS(1228), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7878] = 1,
    ACTIONS(1230), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7885] = 2,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
    ACTIONS(1232), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7894] = 1,
    ACTIONS(1234), 4,
      ts_builtin_sym_end,
      sym__ws,
      sym_comment,
      anon_sym_LPAREN,
  [7901] = 2,
    ACTIONS(1236), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7909] = 2,
    ACTIONS(1238), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7917] = 2,
    ACTIONS(1192), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7925] = 2,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7933] = 2,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7941] = 2,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7949] = 2,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7957] = 2,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7965] = 2,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7973] = 2,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7981] = 2,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7989] = 2,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [7997] = 2,
    ACTIONS(426), 1,
      sym_boolean_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8005] = 2,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8013] = 2,
    ACTIONS(1258), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8021] = 2,
    ACTIONS(1260), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8029] = 2,
    ACTIONS(1262), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8037] = 2,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8045] = 2,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8053] = 2,
    ACTIONS(1266), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8061] = 2,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8069] = 2,
    ACTIONS(1270), 1,
      sym_single_field_variable,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8077] = 2,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8085] = 2,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8093] = 2,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8101] = 2,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8109] = 2,
    ACTIONS(1278), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8117] = 2,
    ACTIONS(1280), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8125] = 2,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8133] = 2,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8141] = 2,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8149] = 2,
    ACTIONS(495), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8157] = 2,
    ACTIONS(491), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8165] = 2,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8173] = 2,
    ACTIONS(1282), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8181] = 2,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8189] = 2,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8197] = 2,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8205] = 2,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8213] = 2,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8221] = 2,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8229] = 2,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8237] = 2,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8245] = 2,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8253] = 2,
    ACTIONS(1292), 1,
      anon_sym_LT_DASH,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8261] = 2,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8269] = 2,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8277] = 2,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8285] = 2,
    ACTIONS(1296), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8293] = 2,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8301] = 2,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8309] = 2,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8317] = 2,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8325] = 2,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8333] = 2,
    ACTIONS(1304), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8341] = 2,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8349] = 2,
    ACTIONS(1308), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8357] = 2,
    ACTIONS(1310), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8365] = 2,
    ACTIONS(1312), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8373] = 2,
    ACTIONS(1314), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8381] = 2,
    ACTIONS(1316), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8389] = 2,
    ACTIONS(1318), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8397] = 2,
    ACTIONS(1320), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8405] = 2,
    ACTIONS(1322), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8413] = 2,
    ACTIONS(1324), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8421] = 2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8429] = 2,
    ACTIONS(1328), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8437] = 2,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
  [8445] = 2,
    ACTIONS(1332), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__ws,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 391,
  [SMALL_STATE(13)] = 425,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 493,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 595,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 665,
  [SMALL_STATE(21)] = 699,
  [SMALL_STATE(22)] = 733,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 801,
  [SMALL_STATE(25)] = 835,
  [SMALL_STATE(26)] = 869,
  [SMALL_STATE(27)] = 903,
  [SMALL_STATE(28)] = 937,
  [SMALL_STATE(29)] = 971,
  [SMALL_STATE(30)] = 1005,
  [SMALL_STATE(31)] = 1039,
  [SMALL_STATE(32)] = 1073,
  [SMALL_STATE(33)] = 1107,
  [SMALL_STATE(34)] = 1141,
  [SMALL_STATE(35)] = 1175,
  [SMALL_STATE(36)] = 1209,
  [SMALL_STATE(37)] = 1243,
  [SMALL_STATE(38)] = 1277,
  [SMALL_STATE(39)] = 1311,
  [SMALL_STATE(40)] = 1345,
  [SMALL_STATE(41)] = 1379,
  [SMALL_STATE(42)] = 1413,
  [SMALL_STATE(43)] = 1447,
  [SMALL_STATE(44)] = 1481,
  [SMALL_STATE(45)] = 1515,
  [SMALL_STATE(46)] = 1549,
  [SMALL_STATE(47)] = 1583,
  [SMALL_STATE(48)] = 1617,
  [SMALL_STATE(49)] = 1651,
  [SMALL_STATE(50)] = 1685,
  [SMALL_STATE(51)] = 1719,
  [SMALL_STATE(52)] = 1753,
  [SMALL_STATE(53)] = 1787,
  [SMALL_STATE(54)] = 1821,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1889,
  [SMALL_STATE(57)] = 1923,
  [SMALL_STATE(58)] = 1957,
  [SMALL_STATE(59)] = 1991,
  [SMALL_STATE(60)] = 2025,
  [SMALL_STATE(61)] = 2059,
  [SMALL_STATE(62)] = 2093,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2161,
  [SMALL_STATE(65)] = 2195,
  [SMALL_STATE(66)] = 2229,
  [SMALL_STATE(67)] = 2263,
  [SMALL_STATE(68)] = 2297,
  [SMALL_STATE(69)] = 2331,
  [SMALL_STATE(70)] = 2365,
  [SMALL_STATE(71)] = 2399,
  [SMALL_STATE(72)] = 2433,
  [SMALL_STATE(73)] = 2467,
  [SMALL_STATE(74)] = 2501,
  [SMALL_STATE(75)] = 2535,
  [SMALL_STATE(76)] = 2569,
  [SMALL_STATE(77)] = 2603,
  [SMALL_STATE(78)] = 2637,
  [SMALL_STATE(79)] = 2671,
  [SMALL_STATE(80)] = 2705,
  [SMALL_STATE(81)] = 2739,
  [SMALL_STATE(82)] = 2773,
  [SMALL_STATE(83)] = 2807,
  [SMALL_STATE(84)] = 2841,
  [SMALL_STATE(85)] = 2875,
  [SMALL_STATE(86)] = 2909,
  [SMALL_STATE(87)] = 2940,
  [SMALL_STATE(88)] = 2985,
  [SMALL_STATE(89)] = 3030,
  [SMALL_STATE(90)] = 3063,
  [SMALL_STATE(91)] = 3108,
  [SMALL_STATE(92)] = 3153,
  [SMALL_STATE(93)] = 3198,
  [SMALL_STATE(94)] = 3243,
  [SMALL_STATE(95)] = 3278,
  [SMALL_STATE(96)] = 3311,
  [SMALL_STATE(97)] = 3341,
  [SMALL_STATE(98)] = 3371,
  [SMALL_STATE(99)] = 3401,
  [SMALL_STATE(100)] = 3431,
  [SMALL_STATE(101)] = 3461,
  [SMALL_STATE(102)] = 3491,
  [SMALL_STATE(103)] = 3521,
  [SMALL_STATE(104)] = 3551,
  [SMALL_STATE(105)] = 3581,
  [SMALL_STATE(106)] = 3611,
  [SMALL_STATE(107)] = 3641,
  [SMALL_STATE(108)] = 3671,
  [SMALL_STATE(109)] = 3701,
  [SMALL_STATE(110)] = 3731,
  [SMALL_STATE(111)] = 3758,
  [SMALL_STATE(112)] = 3785,
  [SMALL_STATE(113)] = 3812,
  [SMALL_STATE(114)] = 3839,
  [SMALL_STATE(115)] = 3866,
  [SMALL_STATE(116)] = 3907,
  [SMALL_STATE(117)] = 3933,
  [SMALL_STATE(118)] = 3959,
  [SMALL_STATE(119)] = 3982,
  [SMALL_STATE(120)] = 4007,
  [SMALL_STATE(121)] = 4030,
  [SMALL_STATE(122)] = 4059,
  [SMALL_STATE(123)] = 4090,
  [SMALL_STATE(124)] = 4119,
  [SMALL_STATE(125)] = 4142,
  [SMALL_STATE(126)] = 4165,
  [SMALL_STATE(127)] = 4212,
  [SMALL_STATE(128)] = 4235,
  [SMALL_STATE(129)] = 4264,
  [SMALL_STATE(130)] = 4287,
  [SMALL_STATE(131)] = 4321,
  [SMALL_STATE(132)] = 4355,
  [SMALL_STATE(133)] = 4376,
  [SMALL_STATE(134)] = 4399,
  [SMALL_STATE(135)] = 4420,
  [SMALL_STATE(136)] = 4443,
  [SMALL_STATE(137)] = 4463,
  [SMALL_STATE(138)] = 4483,
  [SMALL_STATE(139)] = 4518,
  [SMALL_STATE(140)] = 4537,
  [SMALL_STATE(141)] = 4556,
  [SMALL_STATE(142)] = 4575,
  [SMALL_STATE(143)] = 4594,
  [SMALL_STATE(144)] = 4613,
  [SMALL_STATE(145)] = 4638,
  [SMALL_STATE(146)] = 4657,
  [SMALL_STATE(147)] = 4676,
  [SMALL_STATE(148)] = 4695,
  [SMALL_STATE(149)] = 4720,
  [SMALL_STATE(150)] = 4739,
  [SMALL_STATE(151)] = 4760,
  [SMALL_STATE(152)] = 4781,
  [SMALL_STATE(153)] = 4802,
  [SMALL_STATE(154)] = 4821,
  [SMALL_STATE(155)] = 4842,
  [SMALL_STATE(156)] = 4861,
  [SMALL_STATE(157)] = 4880,
  [SMALL_STATE(158)] = 4899,
  [SMALL_STATE(159)] = 4918,
  [SMALL_STATE(160)] = 4939,
  [SMALL_STATE(161)] = 4958,
  [SMALL_STATE(162)] = 4977,
  [SMALL_STATE(163)] = 4997,
  [SMALL_STATE(164)] = 5015,
  [SMALL_STATE(165)] = 5047,
  [SMALL_STATE(166)] = 5065,
  [SMALL_STATE(167)] = 5083,
  [SMALL_STATE(168)] = 5101,
  [SMALL_STATE(169)] = 5119,
  [SMALL_STATE(170)] = 5139,
  [SMALL_STATE(171)] = 5157,
  [SMALL_STATE(172)] = 5175,
  [SMALL_STATE(173)] = 5193,
  [SMALL_STATE(174)] = 5211,
  [SMALL_STATE(175)] = 5229,
  [SMALL_STATE(176)] = 5247,
  [SMALL_STATE(177)] = 5265,
  [SMALL_STATE(178)] = 5283,
  [SMALL_STATE(179)] = 5301,
  [SMALL_STATE(180)] = 5319,
  [SMALL_STATE(181)] = 5337,
  [SMALL_STATE(182)] = 5358,
  [SMALL_STATE(183)] = 5382,
  [SMALL_STATE(184)] = 5400,
  [SMALL_STATE(185)] = 5426,
  [SMALL_STATE(186)] = 5450,
  [SMALL_STATE(187)] = 5474,
  [SMALL_STATE(188)] = 5492,
  [SMALL_STATE(189)] = 5516,
  [SMALL_STATE(190)] = 5540,
  [SMALL_STATE(191)] = 5564,
  [SMALL_STATE(192)] = 5588,
  [SMALL_STATE(193)] = 5612,
  [SMALL_STATE(194)] = 5638,
  [SMALL_STATE(195)] = 5664,
  [SMALL_STATE(196)] = 5682,
  [SMALL_STATE(197)] = 5700,
  [SMALL_STATE(198)] = 5726,
  [SMALL_STATE(199)] = 5744,
  [SMALL_STATE(200)] = 5770,
  [SMALL_STATE(201)] = 5790,
  [SMALL_STATE(202)] = 5810,
  [SMALL_STATE(203)] = 5828,
  [SMALL_STATE(204)] = 5845,
  [SMALL_STATE(205)] = 5864,
  [SMALL_STATE(206)] = 5881,
  [SMALL_STATE(207)] = 5898,
  [SMALL_STATE(208)] = 5915,
  [SMALL_STATE(209)] = 5932,
  [SMALL_STATE(210)] = 5949,
  [SMALL_STATE(211)] = 5966,
  [SMALL_STATE(212)] = 5983,
  [SMALL_STATE(213)] = 6000,
  [SMALL_STATE(214)] = 6017,
  [SMALL_STATE(215)] = 6034,
  [SMALL_STATE(216)] = 6051,
  [SMALL_STATE(217)] = 6068,
  [SMALL_STATE(218)] = 6091,
  [SMALL_STATE(219)] = 6108,
  [SMALL_STATE(220)] = 6127,
  [SMALL_STATE(221)] = 6150,
  [SMALL_STATE(222)] = 6164,
  [SMALL_STATE(223)] = 6182,
  [SMALL_STATE(224)] = 6198,
  [SMALL_STATE(225)] = 6214,
  [SMALL_STATE(226)] = 6228,
  [SMALL_STATE(227)] = 6244,
  [SMALL_STATE(228)] = 6258,
  [SMALL_STATE(229)] = 6270,
  [SMALL_STATE(230)] = 6281,
  [SMALL_STATE(231)] = 6292,
  [SMALL_STATE(232)] = 6303,
  [SMALL_STATE(233)] = 6318,
  [SMALL_STATE(234)] = 6329,
  [SMALL_STATE(235)] = 6344,
  [SMALL_STATE(236)] = 6359,
  [SMALL_STATE(237)] = 6374,
  [SMALL_STATE(238)] = 6389,
  [SMALL_STATE(239)] = 6404,
  [SMALL_STATE(240)] = 6421,
  [SMALL_STATE(241)] = 6436,
  [SMALL_STATE(242)] = 6451,
  [SMALL_STATE(243)] = 6462,
  [SMALL_STATE(244)] = 6477,
  [SMALL_STATE(245)] = 6494,
  [SMALL_STATE(246)] = 6505,
  [SMALL_STATE(247)] = 6516,
  [SMALL_STATE(248)] = 6527,
  [SMALL_STATE(249)] = 6544,
  [SMALL_STATE(250)] = 6561,
  [SMALL_STATE(251)] = 6578,
  [SMALL_STATE(252)] = 6595,
  [SMALL_STATE(253)] = 6612,
  [SMALL_STATE(254)] = 6629,
  [SMALL_STATE(255)] = 6646,
  [SMALL_STATE(256)] = 6663,
  [SMALL_STATE(257)] = 6674,
  [SMALL_STATE(258)] = 6689,
  [SMALL_STATE(259)] = 6700,
  [SMALL_STATE(260)] = 6715,
  [SMALL_STATE(261)] = 6730,
  [SMALL_STATE(262)] = 6745,
  [SMALL_STATE(263)] = 6756,
  [SMALL_STATE(264)] = 6767,
  [SMALL_STATE(265)] = 6778,
  [SMALL_STATE(266)] = 6789,
  [SMALL_STATE(267)] = 6800,
  [SMALL_STATE(268)] = 6811,
  [SMALL_STATE(269)] = 6822,
  [SMALL_STATE(270)] = 6833,
  [SMALL_STATE(271)] = 6848,
  [SMALL_STATE(272)] = 6862,
  [SMALL_STATE(273)] = 6876,
  [SMALL_STATE(274)] = 6890,
  [SMALL_STATE(275)] = 6904,
  [SMALL_STATE(276)] = 6914,
  [SMALL_STATE(277)] = 6926,
  [SMALL_STATE(278)] = 6940,
  [SMALL_STATE(279)] = 6954,
  [SMALL_STATE(280)] = 6966,
  [SMALL_STATE(281)] = 6978,
  [SMALL_STATE(282)] = 6992,
  [SMALL_STATE(283)] = 7004,
  [SMALL_STATE(284)] = 7016,
  [SMALL_STATE(285)] = 7030,
  [SMALL_STATE(286)] = 7044,
  [SMALL_STATE(287)] = 7058,
  [SMALL_STATE(288)] = 7072,
  [SMALL_STATE(289)] = 7082,
  [SMALL_STATE(290)] = 7096,
  [SMALL_STATE(291)] = 7110,
  [SMALL_STATE(292)] = 7122,
  [SMALL_STATE(293)] = 7136,
  [SMALL_STATE(294)] = 7148,
  [SMALL_STATE(295)] = 7162,
  [SMALL_STATE(296)] = 7176,
  [SMALL_STATE(297)] = 7186,
  [SMALL_STATE(298)] = 7200,
  [SMALL_STATE(299)] = 7214,
  [SMALL_STATE(300)] = 7226,
  [SMALL_STATE(301)] = 7233,
  [SMALL_STATE(302)] = 7240,
  [SMALL_STATE(303)] = 7249,
  [SMALL_STATE(304)] = 7260,
  [SMALL_STATE(305)] = 7267,
  [SMALL_STATE(306)] = 7278,
  [SMALL_STATE(307)] = 7287,
  [SMALL_STATE(308)] = 7298,
  [SMALL_STATE(309)] = 7305,
  [SMALL_STATE(310)] = 7312,
  [SMALL_STATE(311)] = 7319,
  [SMALL_STATE(312)] = 7326,
  [SMALL_STATE(313)] = 7333,
  [SMALL_STATE(314)] = 7340,
  [SMALL_STATE(315)] = 7349,
  [SMALL_STATE(316)] = 7358,
  [SMALL_STATE(317)] = 7367,
  [SMALL_STATE(318)] = 7376,
  [SMALL_STATE(319)] = 7387,
  [SMALL_STATE(320)] = 7394,
  [SMALL_STATE(321)] = 7405,
  [SMALL_STATE(322)] = 7412,
  [SMALL_STATE(323)] = 7419,
  [SMALL_STATE(324)] = 7426,
  [SMALL_STATE(325)] = 7433,
  [SMALL_STATE(326)] = 7444,
  [SMALL_STATE(327)] = 7451,
  [SMALL_STATE(328)] = 7462,
  [SMALL_STATE(329)] = 7469,
  [SMALL_STATE(330)] = 7476,
  [SMALL_STATE(331)] = 7483,
  [SMALL_STATE(332)] = 7490,
  [SMALL_STATE(333)] = 7501,
  [SMALL_STATE(334)] = 7508,
  [SMALL_STATE(335)] = 7515,
  [SMALL_STATE(336)] = 7524,
  [SMALL_STATE(337)] = 7533,
  [SMALL_STATE(338)] = 7542,
  [SMALL_STATE(339)] = 7551,
  [SMALL_STATE(340)] = 7558,
  [SMALL_STATE(341)] = 7567,
  [SMALL_STATE(342)] = 7574,
  [SMALL_STATE(343)] = 7581,
  [SMALL_STATE(344)] = 7592,
  [SMALL_STATE(345)] = 7603,
  [SMALL_STATE(346)] = 7614,
  [SMALL_STATE(347)] = 7623,
  [SMALL_STATE(348)] = 7630,
  [SMALL_STATE(349)] = 7637,
  [SMALL_STATE(350)] = 7644,
  [SMALL_STATE(351)] = 7651,
  [SMALL_STATE(352)] = 7658,
  [SMALL_STATE(353)] = 7665,
  [SMALL_STATE(354)] = 7672,
  [SMALL_STATE(355)] = 7679,
  [SMALL_STATE(356)] = 7686,
  [SMALL_STATE(357)] = 7695,
  [SMALL_STATE(358)] = 7702,
  [SMALL_STATE(359)] = 7713,
  [SMALL_STATE(360)] = 7724,
  [SMALL_STATE(361)] = 7733,
  [SMALL_STATE(362)] = 7740,
  [SMALL_STATE(363)] = 7749,
  [SMALL_STATE(364)] = 7758,
  [SMALL_STATE(365)] = 7767,
  [SMALL_STATE(366)] = 7776,
  [SMALL_STATE(367)] = 7785,
  [SMALL_STATE(368)] = 7794,
  [SMALL_STATE(369)] = 7801,
  [SMALL_STATE(370)] = 7810,
  [SMALL_STATE(371)] = 7817,
  [SMALL_STATE(372)] = 7828,
  [SMALL_STATE(373)] = 7835,
  [SMALL_STATE(374)] = 7842,
  [SMALL_STATE(375)] = 7851,
  [SMALL_STATE(376)] = 7860,
  [SMALL_STATE(377)] = 7871,
  [SMALL_STATE(378)] = 7878,
  [SMALL_STATE(379)] = 7885,
  [SMALL_STATE(380)] = 7894,
  [SMALL_STATE(381)] = 7901,
  [SMALL_STATE(382)] = 7909,
  [SMALL_STATE(383)] = 7917,
  [SMALL_STATE(384)] = 7925,
  [SMALL_STATE(385)] = 7933,
  [SMALL_STATE(386)] = 7941,
  [SMALL_STATE(387)] = 7949,
  [SMALL_STATE(388)] = 7957,
  [SMALL_STATE(389)] = 7965,
  [SMALL_STATE(390)] = 7973,
  [SMALL_STATE(391)] = 7981,
  [SMALL_STATE(392)] = 7989,
  [SMALL_STATE(393)] = 7997,
  [SMALL_STATE(394)] = 8005,
  [SMALL_STATE(395)] = 8013,
  [SMALL_STATE(396)] = 8021,
  [SMALL_STATE(397)] = 8029,
  [SMALL_STATE(398)] = 8037,
  [SMALL_STATE(399)] = 8045,
  [SMALL_STATE(400)] = 8053,
  [SMALL_STATE(401)] = 8061,
  [SMALL_STATE(402)] = 8069,
  [SMALL_STATE(403)] = 8077,
  [SMALL_STATE(404)] = 8085,
  [SMALL_STATE(405)] = 8093,
  [SMALL_STATE(406)] = 8101,
  [SMALL_STATE(407)] = 8109,
  [SMALL_STATE(408)] = 8117,
  [SMALL_STATE(409)] = 8125,
  [SMALL_STATE(410)] = 8133,
  [SMALL_STATE(411)] = 8141,
  [SMALL_STATE(412)] = 8149,
  [SMALL_STATE(413)] = 8157,
  [SMALL_STATE(414)] = 8165,
  [SMALL_STATE(415)] = 8173,
  [SMALL_STATE(416)] = 8181,
  [SMALL_STATE(417)] = 8189,
  [SMALL_STATE(418)] = 8197,
  [SMALL_STATE(419)] = 8205,
  [SMALL_STATE(420)] = 8213,
  [SMALL_STATE(421)] = 8221,
  [SMALL_STATE(422)] = 8229,
  [SMALL_STATE(423)] = 8237,
  [SMALL_STATE(424)] = 8245,
  [SMALL_STATE(425)] = 8253,
  [SMALL_STATE(426)] = 8261,
  [SMALL_STATE(427)] = 8269,
  [SMALL_STATE(428)] = 8277,
  [SMALL_STATE(429)] = 8285,
  [SMALL_STATE(430)] = 8293,
  [SMALL_STATE(431)] = 8301,
  [SMALL_STATE(432)] = 8309,
  [SMALL_STATE(433)] = 8317,
  [SMALL_STATE(434)] = 8325,
  [SMALL_STATE(435)] = 8333,
  [SMALL_STATE(436)] = 8341,
  [SMALL_STATE(437)] = 8349,
  [SMALL_STATE(438)] = 8357,
  [SMALL_STATE(439)] = 8365,
  [SMALL_STATE(440)] = 8373,
  [SMALL_STATE(441)] = 8381,
  [SMALL_STATE(442)] = 8389,
  [SMALL_STATE(443)] = 8397,
  [SMALL_STATE(444)] = 8405,
  [SMALL_STATE(445)] = 8413,
  [SMALL_STATE(446)] = 8421,
  [SMALL_STATE(447)] = 8429,
  [SMALL_STATE(448)] = 8437,
  [SMALL_STATE(449)] = 8445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(217),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(67),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(67),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(220),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(425),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2), SHIFT_REPEAT(164),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defrule_construct_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(118),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(118),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(132),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(144),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_pattern_CE_repeat1, 2), SHIFT_REPEAT(371),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(123),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(123),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2), SHIFT_REPEAT(396),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constraint, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constraint, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(133),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(197),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connected_constraint, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connected_constraint, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 5),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 7),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 7),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_all_facts, 6),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_all_facts, 6),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 6),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 6),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 5),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 6),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 8),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 8),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_for_fact, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_for_fact, 5),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 5),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_spec, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_spec, 4),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2), SHIFT_REPEAT(126),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_slot_definition_repeat1, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 5),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_for_count, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for_count, 4),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6), REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_rhs_pattern_repeat1, 1), SHIFT(314),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym__rhs_field, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2), SHIFT_REPEAT(198),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2), SHIFT_REPEAT(449),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_rhs_pattern_repeat1, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2), SHIFT_REPEAT(429),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2), SHIFT_REPEAT(320),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deftemplate_construct_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(245),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defmethod_construct_repeat1, 2), SHIFT_REPEAT(383),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2), SHIFT_REPEAT(223),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_member_template_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexeme_list, 1),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexeme_list_repeat1, 2), SHIFT_REPEAT(226),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexeme_list_repeat1, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_template, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigned_pattern_CE, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_CE, 4),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 12),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 4, .production_id = 9),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(235),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2), SHIFT_REPEAT(276),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_pattern_CE_repeat1, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2), SHIFT_REPEAT(435),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defglobal_construct_repeat1, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2), SHIFT_REPEAT(400),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_set_template_repeat1, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 3, .production_id = 9),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 1, .production_id = 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 4),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_pattern_CE, 3), REDUCE(sym_template_pattern_CE, 3, .production_id = 6),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_pattern_CE, 4, .production_id = 6),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 3),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2), SHIFT_REPEAT(381),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_pattern_CE_repeat1, 2),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(358),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_pattern_CE, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_CE, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_CE, 4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_CE, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_CE, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_CE, 5),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_restriction, 5, .production_id = 12),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_CE, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_specification_repeat1, 2), SHIFT_REPEAT(271),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_list, 1),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(273),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2), SHIFT_REPEAT(274),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_list_repeat1, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2), SHIFT_REPEAT(277),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_list_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2), SHIFT_REPEAT(278),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_list_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_specification, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_list, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_list, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_list, 1),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_specification, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_list, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specification, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 11),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 4, .production_id = 5),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 8),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_rhs_pattern, 4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 7, .production_id = 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 6, .production_id = 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_field_rhs_slot, 4, .production_id = 10),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 4, .production_id = 10),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifield_rhs_slot, 3, .production_id = 10),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 4, .production_id = 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 4, .production_id = 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4, .production_id = 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 4),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 8),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 4, .production_id = 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 5, .production_id = 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 3),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 5, .production_id = 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 5, .production_id = 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 9, .production_id = 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 4, .production_id = 10),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_property, 4),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4, .production_id = 10),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 4),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defglobal_construct, 5, .production_id = 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_assignment, 3),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 11),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 4, .production_id = 7),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 7, .production_id = 3),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 8, .production_id = 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 5, .production_id = 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defgeneric_construct, 5, .production_id = 3),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 7, .production_id = 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 11),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 11, .production_id = 11),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_set_member_template, 4, .production_id = 13),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 8),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_attribute, 5),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 9, .production_id = 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_attribute, 4),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_attribute, 4),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 3, .production_id = 10),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_constant_attribute, 4),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_attribute, 5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_slot, 3, .production_id = 10),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 8, .production_id = 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multislot_definition, 5, .production_id = 7),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffunction_construct, 6, .production_id = 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 8),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deffacts_construct, 6, .production_id = 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 5, .production_id = 7),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_slot_definition, 4, .production_id = 7),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defrule_construct, 6, .production_id = 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deftemplate_construct, 6, .production_id = 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_rhs_pattern, 3, .production_id = 5),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmethod_construct, 10, .production_id = 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 5, .production_id = 12),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 1, .production_id = 4),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 3, .production_id = 9),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 12),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_parameter_restriction, 4, .production_id = 9),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
