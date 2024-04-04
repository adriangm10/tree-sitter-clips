; Highlight for clips
[
 "?DERIVE"
 "?NONE"
 "?VARIABLE"
] @type.builtin

(number) @number
(integer) @number
(float) @number
(single_field_variable) @variable
(multifield_variable) @variable
(str_lit) @string
(comment) @comment
(boolean_symbol) @boolean

((symbol) @constant.builtin
  (#any-of? @constant.builtin "t" "crlf"))

((symbol) @boolean
  (#any-of? @boolean "TRUE" "FALSE"))

((symbol) @constant
  (#match? @constant "^[A-Z0-9_]*$"))

(deffunction_construct
  name: (_) @function)
(deffunction_construct
  comment: (_) @comment)

(defmethod_construct
  name: (_) @function)
(defmethod_construct
  comment: (_) @comment)

(deffacts_construct
  name: (_) @function)
(deffacts_construct
  comment: (_) @comment)

(deftemplate_construct
  name: (_) @type)
(deftemplate_construct
  comment: (_) @comment)

(defrule_construct
  name: (_) @function)
(defrule_construct
  comment: (_) @comment)

(defgeneric_construct
  name: (_) @function)
(defgeneric_construct
  comment: (_) @comment)

(parameter_restriction
  param: (_) @variable.parameter
  (symbol) @type.builtin)

(wildcard_parameter_restriction
  param: (_) @variable.parameter
  (symbol) @type.builtin)

(function_call
  name: (_) @function.call)

(function_call
  name: (_) @keyword.operator
  (#any-of? @keyword.operator "and" "or" "not" "eq" "neq"))

(function_call
  name: (_) @operator
  (#any-of? @operator "-" "/" "+" "*" "~" "<" "=" "<=" ">" ">="))

(function_call
  name: (_) @keyword.repeat
  (#any-of? @keyword.repeat "while" "foreach"))

(function_call
  name: (_) @keyword.return
  (#eq? @keyword.return "return"))

(function_call
  name: (_) @keyword
  (#eq? @keyword "bind"))

(parameter_list
  (single_field_variable) @variable.parameter)
(parameter_list
  (multifield_variable) @variable.parameter)

(fact_set_member_template
  template_name: (_) @type)

(multislot_definition
  slot_name: (_) @variable.member)
(single_slot_definition
  slot_name: (_) @variable.member)

(term
  (single_field_variable) @variable.parameter)

(term
  (multifield_variable) @variable.parameter)

(allowed_type) @type.builtin

(template_pattern_CE
  name: (_) @type)

(lhs_slot
  slot_name: (_) @variable.member)

(rhs_slot
  slot_name: (_) @variable.member)

(template_rhs_pattern
  temp_name: (_) @type)

(assigned_pattern_CE
  (single_field_variable) @variable.parameter)

(ERROR) @error

[
  "deftemplate"
  "deffacts"
  "deffunction"
  "defmethod"
  "defrule"
  "defglobal"
  "defgeneric"
  "type"
  "slot"
  "multislot"
  "default"
  "default-dynamic"
  "cardinality"
  "range"
  "test"
  "forall"
  "logical"
  "exists"
  "object"
  "is-a"
  "name"
  "assert"
  "declare"
  "salience"
  "auto-focus"
  "allowed-symbols"
  "allowed-strings"
  "allowed-lexemes"
  "allowed-integers"
  "allowed-floats"
  "allowed-numbers"
  "allowed-instance-names"
  "allowed-classes"
  "allowed-values"
] @keyword

[
  "loop-for-count"
  "if"
  "then"
  "else"
  "do"
  "do-for-fact"
  "do-for-all-facts"
] @keyword.repeat

[
 "and"
 "or"
 "not"
 "?"
 "$?"
] @keyword.operator

[
 "("
 ")"
] @punctuation.brackets

[
 "=>"
 "~"
 "&"
 "|"
 ":"
 "="
 "<-"
] @operator
