; JavaScript injection

(script_element
  (start_tag
    (tag_name))
  (raw_text) @injection.content
  (end_tag
    (tag_name))
  (#set! injection.language "javascript")
)

; Typescript injection

(component
  (script_element
    (start_tag
      (tag_name)
      (script_lang
        (ts_lang)))
    (raw_text) @injection.content
    (end_tag
      (tag_name))
  ) (#set! injection.language "typescript")
)
; Typescript injection

(component
  (script_element
    (start_tag
      (tag_name)
      (script_lang
        (tsx_lang)))
    (raw_text) @injection.content
    (end_tag
      (tag_name))
  ) (#set! injection.language "tsx")
)


; scss injection

(component
  (style_element
    (start_tag
      (tag_name)
      (style_lang
        (scss_val)))
    (raw_text) @injection.content
    (end_tag
      (tag_name))
    (#set! injection.language "scss")
  )
  )


; css injection

(component
  (style_element
    (start_tag
      (tag_name)
      (style_lang
        (css_val)))
    (raw_text)  @injection.content
    (end_tag
      (tag_name))
  ) (#set! injection.language "css")
)
