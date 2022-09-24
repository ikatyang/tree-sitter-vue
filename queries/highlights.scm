[
  (template_element)
  (tag_name)
  (start_tag)
  (directive_attribute)
  (directive_dynamic_argument)
  (directive_dynamic_argument_value)
  (end_tag)
] @tag

; suspense

(suspense
  (props
    (quoted_attribute_value
      (attribute_value) @property.value) @string
  ) @property.value
  (text) @string
) @function

; component el
(vue_component) @function


; shorthand
;(directive_attribute
;  (directive_shorthand) @function)

(erroneous_end_tag_name) @error
(attribute_name) @attribute
(attribute_value) @property.value
(quoted_attribute_value) @string
(comment) @comment

(text) @none
(element) @string
(interpolation) @punctuation.special
(interpolation
  (raw_text) @none)

[
  (directive_modifier)
  (directive_name)
  (directive_argument)
] @method

"=" @operator

[
 "<"
 ">"
 "</"
 "/>"
 ] @tag.delimiter


(directive_name) @props
