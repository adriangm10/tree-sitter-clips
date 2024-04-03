")" @indent.end

((parameter_list) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

((function_call) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

[
 (defrule_construct)
 (deffunction_construct)
 (defmethod_construct)
 (deffacts_construct)
 (loop_for_count)
 (defglobal_construct)
 (defgeneric_construct)
 (deftemplate_construct)
 (function_call)
 (assert)
 (if_then_else)
 (ordered_rhs_pattern)
 (template_rhs_pattern)
 (single_field_rhs_slot)
 (multifield_rhs_slot)
 (single_slot_definition)
 (multislot_definition)
 (default_attribute)
 (type_attribute)
 (type_specification)
 (allowed_constant_attribute)
 (range_attribute)
 (cardinality_attribute)
 (declaration)
 (rule_property)
 (assigned_pattern_CE)
 (not_CE)
 (and_CE)
 (or_CE)
 (logical_CE)
 (test_CE)
 (exists_CE)
 (forall_CE)
 (ordered_pattern_CE)
 (template_pattern_CE)
 (object_pattern_CE)
 (attribute_constraint)
 (lhs_slot)
 (parameter_list)
 (parameter_restriction)
 (wildcard_parameter_restriction)
] @indent.begin


[
 "=>"
 "else"
 ")"
] @indent.branch

(comment) @indent.auto
(str_lit) @indent.auto
