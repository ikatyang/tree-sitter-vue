#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 190
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_SLASH_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_EQ = 5,
  sym_attribute_name = 6,
  sym_attribute_value = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_quoted_attribute_value_token1 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_quoted_attribute_value_token2 = 11,
  anon_sym_LBRACE_LBRACE = 12,
  anon_sym_RBRACE_RBRACE = 13,
  anon_sym_COLON = 14,
  sym_directive_name = 15,
  sym_directive_shorthand = 16,
  aux_sym_directive_argument_token1 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_directive_dynamic_argument_value = 20,
  anon_sym_DOT = 21,
  sym__text_fragment = 22,
  sym__interpolation_text = 23,
  sym__start_tag_name = 24,
  sym__template_start_tag_name = 25,
  sym__script_start_tag_name = 26,
  sym__style_start_tag_name = 27,
  sym__end_tag_name = 28,
  sym_erroneous_end_tag_name = 29,
  sym__implicit_end_tag = 30,
  sym_raw_text = 31,
  sym_comment = 32,
  sym_component = 33,
  sym__node = 34,
  sym_element = 35,
  sym_template_element = 36,
  sym_script_element = 37,
  sym_style_element = 38,
  sym_start_tag = 39,
  sym_template_start_tag = 40,
  sym_script_start_tag = 41,
  sym_style_start_tag = 42,
  sym_self_closing_tag = 43,
  sym_end_tag = 44,
  sym_erroneous_end_tag = 45,
  sym_attribute = 46,
  sym_quoted_attribute_value = 47,
  sym_text = 48,
  sym_interpolation = 49,
  sym_directive_attribute = 50,
  sym_directive_argument = 51,
  sym_directive_dynamic_argument = 52,
  sym_directive_modifiers = 53,
  sym_directive_modifier = 54,
  aux_sym_component_repeat1 = 55,
  aux_sym_element_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_directive_modifiers_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COLON] = ":",
  [sym_directive_name] = "directive_name",
  [sym_directive_shorthand] = "directive_name",
  [aux_sym_directive_argument_token1] = "directive_argument_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_directive_dynamic_argument_value] = "directive_dynamic_argument_value",
  [anon_sym_DOT] = ".",
  [sym__text_fragment] = "_text_fragment",
  [sym__interpolation_text] = "raw_text",
  [sym__start_tag_name] = "tag_name",
  [sym__template_start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_component] = "component",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_template_element] = "template_element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_template_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_text] = "text",
  [sym_interpolation] = "interpolation",
  [sym_directive_attribute] = "directive_attribute",
  [sym_directive_argument] = "directive_argument",
  [sym_directive_dynamic_argument] = "directive_dynamic_argument",
  [sym_directive_modifiers] = "directive_modifiers",
  [sym_directive_modifier] = "directive_modifier",
  [aux_sym_component_repeat1] = "component_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_directive_modifiers_repeat1] = "directive_modifiers_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_shorthand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_directive_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_dynamic_argument_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__text_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolation_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__template_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_template_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_template_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_dynamic_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_modifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(36);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(36);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(36);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_directive_shorthand);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_directive_dynamic_argument_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 4},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 11, .external_lex_state = 5},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 12, .external_lex_state = 5},
  [21] = {.lex_state = 12, .external_lex_state = 5},
  [22] = {.lex_state = 13, .external_lex_state = 5},
  [23] = {.lex_state = 12, .external_lex_state = 5},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12, .external_lex_state = 5},
  [26] = {.lex_state = 13, .external_lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 6},
  [28] = {.lex_state = 13, .external_lex_state = 5},
  [29] = {.lex_state = 13, .external_lex_state = 5},
  [30] = {.lex_state = 13, .external_lex_state = 5},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 13, .external_lex_state = 5},
  [33] = {.lex_state = 13, .external_lex_state = 5},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 0, .external_lex_state = 7},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12, .external_lex_state = 5},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 12, .external_lex_state = 5},
  [43] = {.lex_state = 12, .external_lex_state = 5},
  [44] = {.lex_state = 12, .external_lex_state = 5},
  [45] = {.lex_state = 12, .external_lex_state = 5},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 13, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 13, .external_lex_state = 5},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 13, .external_lex_state = 5},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 13, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 13, .external_lex_state = 5},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 13, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 13, .external_lex_state = 5},
  [87] = {.lex_state = 13, .external_lex_state = 5},
  [88] = {.lex_state = 13, .external_lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 13, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 13, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 9},
  [134] = {.lex_state = 0, .external_lex_state = 9},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 9},
  [145] = {.lex_state = 0, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 10},
  [150] = {.lex_state = 0, .external_lex_state = 10},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0, .external_lex_state = 9},
  [154] = {.lex_state = 0, .external_lex_state = 10},
  [155] = {.lex_state = 0, .external_lex_state = 9},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 9},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 0, .external_lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 10},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 10},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 11},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 12},
  [184] = {.lex_state = 0, .external_lex_state = 11},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0, .external_lex_state = 12},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 12},
  [189] = {.lex_state = 0},
};

enum {
  ts_external_token__text_fragment = 0,
  ts_external_token__interpolation_text = 1,
  ts_external_token__start_tag_name = 2,
  ts_external_token__template_start_tag_name = 3,
  ts_external_token__script_start_tag_name = 4,
  ts_external_token__style_start_tag_name = 5,
  ts_external_token__end_tag_name = 6,
  ts_external_token_erroneous_end_tag_name = 7,
  ts_external_token_SLASH_GT = 8,
  ts_external_token__implicit_end_tag = 9,
  ts_external_token_raw_text = 10,
  ts_external_token_comment = 11,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_fragment] = sym__text_fragment,
  [ts_external_token__interpolation_text] = sym__interpolation_text,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__template_start_tag_name] = sym__template_start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [6] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [9] = {
    [ts_external_token_raw_text] = true,
  },
  [10] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [11] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [12] = {
    [ts_external_token__end_tag_name] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
    [sym_directive_shorthand] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__text_fragment] = ACTIONS(1),
    [sym__interpolation_text] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__template_start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_component] = STATE(179),
    [sym_element] = STATE(16),
    [sym_template_element] = STATE(16),
    [sym_script_element] = STATE(16),
    [sym_style_element] = STATE(16),
    [sym_start_tag] = STATE(2),
    [sym_template_start_tag] = STATE(10),
    [sym_script_start_tag] = STATE(133),
    [sym_style_start_tag] = STATE(134),
    [sym_self_closing_tag] = STATE(129),
    [aux_sym_component_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_template_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(138),
    [sym_erroneous_end_tag] = STATE(7),
    [sym_text] = STATE(7),
    [sym_interpolation] = STATE(7),
    [aux_sym_element_repeat1] = STATE(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym__node] = STATE(11),
    [sym_element] = STATE(11),
    [sym_template_element] = STATE(11),
    [sym_script_element] = STATE(11),
    [sym_style_element] = STATE(11),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(84),
    [sym_erroneous_end_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_interpolation] = STATE(11),
    [aux_sym_element_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [4] = {
    [sym__node] = STATE(11),
    [sym_element] = STATE(11),
    [sym_template_element] = STATE(11),
    [sym_script_element] = STATE(11),
    [sym_style_element] = STATE(11),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(55),
    [sym_erroneous_end_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_interpolation] = STATE(11),
    [aux_sym_element_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(29),
    [sym_comment] = ACTIONS(25),
  },
  [5] = {
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym_template_element] = STATE(3),
    [sym_script_element] = STATE(3),
    [sym_style_element] = STATE(3),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(95),
    [sym_erroneous_end_tag] = STATE(3),
    [sym_text] = STATE(3),
    [sym_interpolation] = STATE(3),
    [aux_sym_element_repeat1] = STATE(3),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_template_element] = STATE(4),
    [sym_script_element] = STATE(4),
    [sym_style_element] = STATE(4),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(67),
    [sym_erroneous_end_tag] = STATE(4),
    [sym_text] = STATE(4),
    [sym_interpolation] = STATE(4),
    [aux_sym_element_repeat1] = STATE(4),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__node] = STATE(11),
    [sym_element] = STATE(11),
    [sym_template_element] = STATE(11),
    [sym_script_element] = STATE(11),
    [sym_style_element] = STATE(11),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_end_tag] = STATE(141),
    [sym_erroneous_end_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_interpolation] = STATE(11),
    [aux_sym_element_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [sym__text_fragment] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(39),
    [sym_comment] = ACTIONS(25),
  },
  [8] = {
    [sym__node] = STATE(15),
    [sym_element] = STATE(15),
    [sym_template_element] = STATE(15),
    [sym_script_element] = STATE(15),
    [sym_style_element] = STATE(15),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(50),
    [sym_erroneous_end_tag] = STATE(15),
    [sym_text] = STATE(15),
    [sym_interpolation] = STATE(15),
    [aux_sym_element_repeat1] = STATE(15),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [9] = {
    [sym__node] = STATE(15),
    [sym_element] = STATE(15),
    [sym_template_element] = STATE(15),
    [sym_script_element] = STATE(15),
    [sym_style_element] = STATE(15),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(83),
    [sym_erroneous_end_tag] = STATE(15),
    [sym_text] = STATE(15),
    [sym_interpolation] = STATE(15),
    [aux_sym_element_repeat1] = STATE(15),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [10] = {
    [sym__node] = STATE(13),
    [sym_element] = STATE(13),
    [sym_template_element] = STATE(13),
    [sym_script_element] = STATE(13),
    [sym_style_element] = STATE(13),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(146),
    [sym_erroneous_end_tag] = STATE(13),
    [sym_text] = STATE(13),
    [sym_interpolation] = STATE(13),
    [aux_sym_element_repeat1] = STATE(13),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(55),
  },
  [11] = {
    [sym__node] = STATE(11),
    [sym_element] = STATE(11),
    [sym_template_element] = STATE(11),
    [sym_script_element] = STATE(11),
    [sym_style_element] = STATE(11),
    [sym_start_tag] = STATE(6),
    [sym_template_start_tag] = STATE(14),
    [sym_script_start_tag] = STATE(144),
    [sym_style_start_tag] = STATE(145),
    [sym_self_closing_tag] = STATE(68),
    [sym_erroneous_end_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_interpolation] = STATE(11),
    [aux_sym_element_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_SLASH] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(63),
    [sym__text_fragment] = ACTIONS(66),
    [sym__implicit_end_tag] = ACTIONS(69),
    [sym_comment] = ACTIONS(71),
  },
  [12] = {
    [sym__node] = STATE(9),
    [sym_element] = STATE(9),
    [sym_template_element] = STATE(9),
    [sym_script_element] = STATE(9),
    [sym_style_element] = STATE(9),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(94),
    [sym_erroneous_end_tag] = STATE(9),
    [sym_text] = STATE(9),
    [sym_interpolation] = STATE(9),
    [aux_sym_element_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(51),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(74),
  },
  [13] = {
    [sym__node] = STATE(15),
    [sym_element] = STATE(15),
    [sym_template_element] = STATE(15),
    [sym_script_element] = STATE(15),
    [sym_style_element] = STATE(15),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(139),
    [sym_erroneous_end_tag] = STATE(15),
    [sym_text] = STATE(15),
    [sym_interpolation] = STATE(15),
    [aux_sym_element_repeat1] = STATE(15),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [14] = {
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_template_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_end_tag] = STATE(63),
    [sym_erroneous_end_tag] = STATE(8),
    [sym_text] = STATE(8),
    [sym_interpolation] = STATE(8),
    [aux_sym_element_repeat1] = STATE(8),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_SLASH] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [sym__text_fragment] = ACTIONS(47),
    [sym_comment] = ACTIONS(76),
  },
  [15] = {
    [sym__node] = STATE(15),
    [sym_element] = STATE(15),
    [sym_template_element] = STATE(15),
    [sym_script_element] = STATE(15),
    [sym_style_element] = STATE(15),
    [sym_start_tag] = STATE(5),
    [sym_template_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(137),
    [sym_style_start_tag] = STATE(136),
    [sym_self_closing_tag] = STATE(96),
    [sym_erroneous_end_tag] = STATE(15),
    [sym_text] = STATE(15),
    [sym_interpolation] = STATE(15),
    [aux_sym_element_repeat1] = STATE(15),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_LT_SLASH] = ACTIONS(81),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(84),
    [sym__text_fragment] = ACTIONS(87),
    [sym_comment] = ACTIONS(90),
  },
  [16] = {
    [sym_element] = STATE(17),
    [sym_template_element] = STATE(17),
    [sym_script_element] = STATE(17),
    [sym_style_element] = STATE(17),
    [sym_start_tag] = STATE(2),
    [sym_template_start_tag] = STATE(10),
    [sym_script_start_tag] = STATE(133),
    [sym_style_start_tag] = STATE(134),
    [sym_self_closing_tag] = STATE(129),
    [aux_sym_component_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(95),
  },
  [17] = {
    [sym_element] = STATE(17),
    [sym_template_element] = STATE(17),
    [sym_script_element] = STATE(17),
    [sym_style_element] = STATE(17),
    [sym_start_tag] = STATE(2),
    [sym_template_start_tag] = STATE(10),
    [sym_script_start_tag] = STATE(133),
    [sym_style_start_tag] = STATE(134),
    [sym_self_closing_tag] = STATE(129),
    [aux_sym_component_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [sym_comment] = ACTIONS(102),
  },
  [18] = {
    [sym_directive_modifiers] = STATE(52),
    [aux_sym_directive_modifiers_repeat1] = STATE(23),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_SLASH_GT] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [sym_attribute_name] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [sym_directive_name] = ACTIONS(105),
    [sym_directive_shorthand] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(113),
  },
  [19] = {
    [sym_directive_modifiers] = STATE(77),
    [aux_sym_directive_modifiers_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(115),
    [sym_attribute_name] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(117),
    [sym_directive_name] = ACTIONS(105),
    [sym_directive_shorthand] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(119),
  },
  [20] = {
    [sym_directive_modifiers] = STATE(69),
    [aux_sym_directive_modifiers_repeat1] = STATE(23),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_SLASH_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(123),
    [sym_attribute_name] = ACTIONS(125),
    [sym_directive_name] = ACTIONS(121),
    [sym_directive_shorthand] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(113),
  },
  [21] = {
    [sym_directive_modifiers] = STATE(74),
    [aux_sym_directive_modifiers_repeat1] = STATE(23),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_SLASH_GT] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(129),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(113),
  },
  [22] = {
    [sym_attribute] = STATE(30),
    [sym_directive_attribute] = STATE(30),
    [aux_sym_start_tag_repeat1] = STATE(30),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(135),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [23] = {
    [aux_sym_directive_modifiers_repeat1] = STATE(25),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_SLASH_GT] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(143),
    [sym_attribute_name] = ACTIONS(145),
    [sym_directive_name] = ACTIONS(143),
    [sym_directive_shorthand] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(113),
  },
  [24] = {
    [sym_directive_modifiers] = STATE(101),
    [aux_sym_directive_modifiers_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(147),
    [sym_attribute_name] = ACTIONS(125),
    [sym_directive_name] = ACTIONS(121),
    [sym_directive_shorthand] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(119),
  },
  [25] = {
    [aux_sym_directive_modifiers_repeat1] = STATE(25),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH_GT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [sym_attribute_name] = ACTIONS(151),
    [sym_directive_name] = ACTIONS(149),
    [sym_directive_shorthand] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(153),
  },
  [26] = {
    [sym_attribute] = STATE(33),
    [sym_directive_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_SLASH_GT] = ACTIONS(158),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_LT_SLASH] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(164),
    [sym__text_fragment] = ACTIONS(162),
    [sym__interpolation_text] = ACTIONS(166),
    [sym__implicit_end_tag] = ACTIONS(162),
    [sym_comment] = ACTIONS(162),
  },
  [28] = {
    [sym_attribute] = STATE(26),
    [sym_directive_attribute] = STATE(26),
    [aux_sym_start_tag_repeat1] = STATE(26),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(168),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [29] = {
    [sym_attribute] = STATE(32),
    [sym_directive_attribute] = STATE(32),
    [aux_sym_start_tag_repeat1] = STATE(32),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(170),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [30] = {
    [sym_attribute] = STATE(33),
    [sym_directive_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_SLASH_GT] = ACTIONS(172),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [31] = {
    [sym_directive_modifiers] = STATE(97),
    [aux_sym_directive_modifiers_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(174),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(119),
  },
  [32] = {
    [sym_attribute] = STATE(33),
    [sym_directive_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_SLASH_GT] = ACTIONS(176),
    [sym_attribute_name] = ACTIONS(137),
    [sym_directive_name] = ACTIONS(139),
    [sym_directive_shorthand] = ACTIONS(141),
  },
  [33] = {
    [sym_attribute] = STATE(33),
    [sym_directive_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_SLASH_GT] = ACTIONS(178),
    [sym_attribute_name] = ACTIONS(180),
    [sym_directive_name] = ACTIONS(183),
    [sym_directive_shorthand] = ACTIONS(186),
  },
  [34] = {
    [sym_attribute] = STATE(41),
    [sym_directive_attribute] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [anon_sym_GT] = ACTIONS(189),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [35] = {
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_LT_SLASH] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(197),
    [sym__text_fragment] = ACTIONS(162),
    [sym__interpolation_text] = ACTIONS(199),
    [sym_comment] = ACTIONS(162),
  },
  [36] = {
    [sym_attribute] = STATE(41),
    [sym_directive_attribute] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [anon_sym_GT] = ACTIONS(201),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [37] = {
    [sym_attribute] = STATE(36),
    [sym_directive_attribute] = STATE(36),
    [aux_sym_start_tag_repeat1] = STATE(36),
    [anon_sym_GT] = ACTIONS(203),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [38] = {
    [sym_attribute] = STATE(41),
    [sym_directive_attribute] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [anon_sym_GT] = ACTIONS(205),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [39] = {
    [aux_sym_directive_modifiers_repeat1] = STATE(39),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [sym_attribute_name] = ACTIONS(151),
    [sym_directive_name] = ACTIONS(149),
    [sym_directive_shorthand] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [40] = {
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_SLASH_GT] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(210),
    [sym_attribute_name] = ACTIONS(212),
    [sym_directive_name] = ACTIONS(210),
    [sym_directive_shorthand] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
  },
  [41] = {
    [sym_attribute] = STATE(41),
    [sym_directive_attribute] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [anon_sym_GT] = ACTIONS(178),
    [sym_attribute_name] = ACTIONS(214),
    [sym_directive_name] = ACTIONS(217),
    [sym_directive_shorthand] = ACTIONS(220),
  },
  [42] = {
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_SLASH_GT] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [sym_attribute_name] = ACTIONS(225),
    [sym_directive_name] = ACTIONS(223),
    [sym_directive_shorthand] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
  },
  [43] = {
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_SLASH_GT] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(227),
    [sym_attribute_name] = ACTIONS(229),
    [sym_directive_name] = ACTIONS(227),
    [sym_directive_shorthand] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
  },
  [44] = {
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_SLASH_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(231),
    [sym_attribute_name] = ACTIONS(233),
    [sym_directive_name] = ACTIONS(231),
    [sym_directive_shorthand] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
  },
  [45] = {
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH_GT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [sym_attribute_name] = ACTIONS(151),
    [sym_directive_name] = ACTIONS(149),
    [sym_directive_shorthand] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [46] = {
    [sym_attribute] = STATE(38),
    [sym_directive_attribute] = STATE(38),
    [aux_sym_start_tag_repeat1] = STATE(38),
    [anon_sym_GT] = ACTIONS(235),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [47] = {
    [aux_sym_directive_modifiers_repeat1] = STATE(39),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(143),
    [sym_attribute_name] = ACTIONS(145),
    [sym_directive_name] = ACTIONS(143),
    [sym_directive_shorthand] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(119),
  },
  [48] = {
    [sym_attribute] = STATE(34),
    [sym_directive_attribute] = STATE(34),
    [aux_sym_start_tag_repeat1] = STATE(34),
    [anon_sym_GT] = ACTIONS(237),
    [sym_attribute_name] = ACTIONS(191),
    [sym_directive_name] = ACTIONS(193),
    [sym_directive_shorthand] = ACTIONS(195),
  },
  [49] = {
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_SLASH] = ACTIONS(241),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(241),
    [sym__text_fragment] = ACTIONS(241),
    [sym__implicit_end_tag] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
  },
  [50] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LT_SLASH] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(245),
    [sym__text_fragment] = ACTIONS(245),
    [sym__implicit_end_tag] = ACTIONS(245),
    [sym_comment] = ACTIONS(245),
  },
  [51] = {
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_SLASH] = ACTIONS(249),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(249),
    [sym__text_fragment] = ACTIONS(249),
    [sym__implicit_end_tag] = ACTIONS(249),
    [sym_comment] = ACTIONS(249),
  },
  [52] = {
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_SLASH_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(123),
    [sym_attribute_name] = ACTIONS(125),
    [sym_directive_name] = ACTIONS(121),
    [sym_directive_shorthand] = ACTIONS(121),
  },
  [53] = {
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_LT_SLASH] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [sym__text_fragment] = ACTIONS(162),
    [sym__implicit_end_tag] = ACTIONS(162),
    [sym_comment] = ACTIONS(162),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(227),
    [sym_attribute_name] = ACTIONS(229),
    [sym_directive_name] = ACTIONS(227),
    [sym_directive_shorthand] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
  },
  [55] = {
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_SLASH] = ACTIONS(253),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(253),
    [sym__text_fragment] = ACTIONS(253),
    [sym__implicit_end_tag] = ACTIONS(253),
    [sym_comment] = ACTIONS(253),
  },
  [56] = {
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_SLASH] = ACTIONS(257),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(257),
    [sym__text_fragment] = ACTIONS(257),
    [sym__implicit_end_tag] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
  },
  [57] = {
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_LT_SLASH] = ACTIONS(261),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(261),
    [sym__text_fragment] = ACTIONS(261),
    [sym__implicit_end_tag] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
  },
  [58] = {
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_LT_SLASH] = ACTIONS(265),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(265),
    [sym__text_fragment] = ACTIONS(265),
    [sym__implicit_end_tag] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
  },
  [59] = {
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_SLASH] = ACTIONS(269),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(269),
    [sym__text_fragment] = ACTIONS(269),
    [sym__implicit_end_tag] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
  },
  [60] = {
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_LT_SLASH] = ACTIONS(273),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(273),
    [sym__text_fragment] = ACTIONS(273),
    [sym__implicit_end_tag] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
  },
  [61] = {
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_LT_SLASH] = ACTIONS(277),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(277),
    [sym__text_fragment] = ACTIONS(277),
    [sym__implicit_end_tag] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
  },
  [62] = {
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_LT_SLASH] = ACTIONS(281),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(281),
    [sym__text_fragment] = ACTIONS(281),
    [sym__implicit_end_tag] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
  },
  [63] = {
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_LT_SLASH] = ACTIONS(285),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(285),
    [sym__text_fragment] = ACTIONS(285),
    [sym__implicit_end_tag] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
  },
  [64] = {
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_LT_SLASH] = ACTIONS(289),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(289),
    [sym__text_fragment] = ACTIONS(289),
    [sym__implicit_end_tag] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
  },
  [65] = {
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_LT_SLASH] = ACTIONS(293),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(293),
    [sym__text_fragment] = ACTIONS(293),
    [sym__implicit_end_tag] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
  },
  [66] = {
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(231),
    [sym_attribute_name] = ACTIONS(233),
    [sym_directive_name] = ACTIONS(231),
    [sym_directive_shorthand] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
  },
  [67] = {
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_SLASH] = ACTIONS(297),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(297),
    [sym__text_fragment] = ACTIONS(297),
    [sym__implicit_end_tag] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
  },
  [68] = {
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_LT_SLASH] = ACTIONS(301),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(301),
    [sym__text_fragment] = ACTIONS(301),
    [sym__implicit_end_tag] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
  },
  [69] = {
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_SLASH_GT] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(129),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
  },
  [70] = {
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [sym_attribute_name] = ACTIONS(151),
    [sym_directive_name] = ACTIONS(149),
    [sym_directive_shorthand] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [71] = {
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(210),
    [sym_attribute_name] = ACTIONS(212),
    [sym_directive_name] = ACTIONS(210),
    [sym_directive_shorthand] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
  },
  [72] = {
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH_GT] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [sym_attribute_name] = ACTIONS(307),
    [sym_directive_name] = ACTIONS(303),
    [sym_directive_shorthand] = ACTIONS(303),
  },
  [73] = {
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [sym_attribute_name] = ACTIONS(225),
    [sym_directive_name] = ACTIONS(223),
    [sym_directive_shorthand] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
  },
  [74] = {
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_SLASH_GT] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [sym_attribute_name] = ACTIONS(313),
    [sym_directive_name] = ACTIONS(309),
    [sym_directive_shorthand] = ACTIONS(309),
  },
  [75] = {
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_LT_SLASH] = ACTIONS(317),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(317),
    [sym__text_fragment] = ACTIONS(317),
    [sym__implicit_end_tag] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
  },
  [76] = {
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_SLASH] = ACTIONS(257),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(257),
    [sym__text_fragment] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
  },
  [77] = {
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(147),
    [sym_attribute_name] = ACTIONS(125),
    [sym_directive_name] = ACTIONS(121),
    [sym_directive_shorthand] = ACTIONS(121),
  },
  [78] = {
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_SLASH] = ACTIONS(269),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(269),
    [sym__text_fragment] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
  },
  [79] = {
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_SLASH_GT] = ACTIONS(127),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
  },
  [80] = {
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_SLASH] = ACTIONS(241),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(241),
    [sym__text_fragment] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
  },
  [81] = {
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_SLASH] = ACTIONS(249),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(249),
    [sym__text_fragment] = ACTIONS(249),
    [sym_comment] = ACTIONS(249),
  },
  [82] = {
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_SLASH_GT] = ACTIONS(319),
    [sym_attribute_name] = ACTIONS(321),
    [sym_directive_name] = ACTIONS(319),
    [sym_directive_shorthand] = ACTIONS(319),
  },
  [83] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LT_SLASH] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(245),
    [sym__text_fragment] = ACTIONS(245),
    [sym_comment] = ACTIONS(245),
  },
  [84] = {
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_SLASH] = ACTIONS(253),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(253),
    [sym__text_fragment] = ACTIONS(253),
    [sym_comment] = ACTIONS(253),
  },
  [85] = {
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_LT_SLASH] = ACTIONS(273),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(273),
    [sym__text_fragment] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
  },
  [86] = {
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_SLASH_GT] = ACTIONS(309),
    [sym_attribute_name] = ACTIONS(313),
    [sym_directive_name] = ACTIONS(309),
    [sym_directive_shorthand] = ACTIONS(309),
  },
  [87] = {
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_SLASH_GT] = ACTIONS(323),
    [sym_attribute_name] = ACTIONS(325),
    [sym_directive_name] = ACTIONS(323),
    [sym_directive_shorthand] = ACTIONS(323),
  },
  [88] = {
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_SLASH_GT] = ACTIONS(327),
    [sym_attribute_name] = ACTIONS(329),
    [sym_directive_name] = ACTIONS(327),
    [sym_directive_shorthand] = ACTIONS(327),
  },
  [89] = {
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_LT_SLASH] = ACTIONS(277),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(277),
    [sym__text_fragment] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
  },
  [90] = {
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_SLASH_GT] = ACTIONS(331),
    [sym_attribute_name] = ACTIONS(333),
    [sym_directive_name] = ACTIONS(331),
    [sym_directive_shorthand] = ACTIONS(331),
  },
  [91] = {
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_LT_SLASH] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [sym__text_fragment] = ACTIONS(162),
    [sym_comment] = ACTIONS(162),
  },
  [92] = {
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_LT_SLASH] = ACTIONS(281),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(281),
    [sym__text_fragment] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
  },
  [93] = {
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_SLASH_GT] = ACTIONS(335),
    [sym_attribute_name] = ACTIONS(337),
    [sym_directive_name] = ACTIONS(335),
    [sym_directive_shorthand] = ACTIONS(335),
  },
  [94] = {
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_LT_SLASH] = ACTIONS(285),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(285),
    [sym__text_fragment] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
  },
  [95] = {
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_SLASH] = ACTIONS(297),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(297),
    [sym__text_fragment] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
  },
  [96] = {
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_LT_SLASH] = ACTIONS(301),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(301),
    [sym__text_fragment] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
  },
  [97] = {
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(339),
    [sym_attribute_name] = ACTIONS(313),
    [sym_directive_name] = ACTIONS(309),
    [sym_directive_shorthand] = ACTIONS(309),
  },
  [98] = {
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(341),
    [sym_attribute_name] = ACTIONS(307),
    [sym_directive_name] = ACTIONS(303),
    [sym_directive_shorthand] = ACTIONS(303),
  },
  [99] = {
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_LT_SLASH] = ACTIONS(345),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(345),
    [sym__text_fragment] = ACTIONS(345),
    [sym_comment] = ACTIONS(345),
  },
  [100] = {
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_LT_SLASH] = ACTIONS(265),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(265),
    [sym__text_fragment] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
  },
  [101] = {
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(174),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
  },
  [102] = {
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_LT_SLASH] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(349),
    [sym__text_fragment] = ACTIONS(349),
    [sym_comment] = ACTIONS(349),
  },
  [103] = {
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_LT_SLASH] = ACTIONS(293),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(293),
    [sym__text_fragment] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
  },
  [104] = {
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_LT_SLASH] = ACTIONS(289),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(289),
    [sym__text_fragment] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
  },
  [105] = {
    [sym_directive_argument] = STATE(21),
    [sym_directive_dynamic_argument] = STATE(21),
    [aux_sym_directive_argument_token1] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(353),
  },
  [106] = {
    [sym_quoted_attribute_value] = STATE(124),
    [sym_attribute_value] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
  },
  [107] = {
    [sym_quoted_attribute_value] = STATE(93),
    [sym_attribute_value] = ACTIONS(361),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [108] = {
    [sym__start_tag_name] = ACTIONS(367),
    [sym__template_start_tag_name] = ACTIONS(369),
    [sym__script_start_tag_name] = ACTIONS(371),
    [sym__style_start_tag_name] = ACTIONS(373),
  },
  [109] = {
    [sym__start_tag_name] = ACTIONS(375),
    [sym__template_start_tag_name] = ACTIONS(369),
    [sym__script_start_tag_name] = ACTIONS(371),
    [sym__style_start_tag_name] = ACTIONS(373),
  },
  [110] = {
    [sym_quoted_attribute_value] = STATE(79),
    [sym_attribute_value] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [111] = {
    [sym_quoted_attribute_value] = STATE(128),
    [sym_attribute_value] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
  },
  [112] = {
    [sym_quoted_attribute_value] = STATE(125),
    [sym_attribute_value] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
  },
  [113] = {
    [sym_directive_argument] = STATE(31),
    [sym_directive_dynamic_argument] = STATE(31),
    [aux_sym_directive_argument_token1] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(385),
  },
  [114] = {
    [sym_quoted_attribute_value] = STATE(116),
    [sym_attribute_value] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
  },
  [115] = {
    [anon_sym_GT] = ACTIONS(335),
    [sym_attribute_name] = ACTIONS(337),
    [sym_directive_name] = ACTIONS(335),
    [sym_directive_shorthand] = ACTIONS(335),
  },
  [116] = {
    [anon_sym_GT] = ACTIONS(127),
    [sym_attribute_name] = ACTIONS(131),
    [sym_directive_name] = ACTIONS(127),
    [sym_directive_shorthand] = ACTIONS(127),
  },
  [117] = {
    [sym_quoted_attribute_value] = STATE(115),
    [sym_attribute_value] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
  },
  [118] = {
    [sym_directive_argument] = STATE(24),
    [sym_directive_dynamic_argument] = STATE(24),
    [aux_sym_directive_argument_token1] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(385),
  },
  [119] = {
    [sym_quoted_attribute_value] = STATE(86),
    [sym_attribute_value] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [120] = {
    [sym_quoted_attribute_value] = STATE(88),
    [sym_attribute_value] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [121] = {
    [sym_quoted_attribute_value] = STATE(90),
    [sym_attribute_value] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [122] = {
    [sym__start_tag_name] = ACTIONS(397),
    [sym__template_start_tag_name] = ACTIONS(369),
    [sym__script_start_tag_name] = ACTIONS(371),
    [sym__style_start_tag_name] = ACTIONS(373),
  },
  [123] = {
    [anon_sym_GT] = ACTIONS(319),
    [sym_attribute_name] = ACTIONS(321),
    [sym_directive_name] = ACTIONS(319),
    [sym_directive_shorthand] = ACTIONS(319),
  },
  [124] = {
    [anon_sym_GT] = ACTIONS(331),
    [sym_attribute_name] = ACTIONS(333),
    [sym_directive_name] = ACTIONS(331),
    [sym_directive_shorthand] = ACTIONS(331),
  },
  [125] = {
    [anon_sym_GT] = ACTIONS(309),
    [sym_attribute_name] = ACTIONS(313),
    [sym_directive_name] = ACTIONS(309),
    [sym_directive_shorthand] = ACTIONS(309),
  },
  [126] = {
    [sym_directive_argument] = STATE(20),
    [sym_directive_dynamic_argument] = STATE(20),
    [aux_sym_directive_argument_token1] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(353),
  },
  [127] = {
    [anon_sym_GT] = ACTIONS(323),
    [sym_attribute_name] = ACTIONS(325),
    [sym_directive_name] = ACTIONS(323),
    [sym_directive_shorthand] = ACTIONS(323),
  },
  [128] = {
    [anon_sym_GT] = ACTIONS(327),
    [sym_attribute_name] = ACTIONS(329),
    [sym_directive_name] = ACTIONS(327),
    [sym_directive_shorthand] = ACTIONS(327),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [sym_comment] = ACTIONS(249),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
  },
  [133] = {
    [sym_end_tag] = STATE(143),
    [anon_sym_LT_SLASH] = ACTIONS(399),
    [sym_raw_text] = ACTIONS(401),
  },
  [134] = {
    [sym_end_tag] = STATE(142),
    [anon_sym_LT_SLASH] = ACTIONS(399),
    [sym_raw_text] = ACTIONS(403),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
  },
  [136] = {
    [sym_end_tag] = STATE(89),
    [anon_sym_LT_SLASH] = ACTIONS(405),
    [sym_raw_text] = ACTIONS(407),
  },
  [137] = {
    [sym_end_tag] = STATE(92),
    [anon_sym_LT_SLASH] = ACTIONS(405),
    [sym_raw_text] = ACTIONS(409),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_comment] = ACTIONS(245),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [sym_comment] = ACTIONS(253),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
  },
  [144] = {
    [sym_end_tag] = STATE(62),
    [anon_sym_LT_SLASH] = ACTIONS(411),
    [sym_raw_text] = ACTIONS(413),
  },
  [145] = {
    [sym_end_tag] = STATE(61),
    [anon_sym_LT_SLASH] = ACTIONS(411),
    [sym_raw_text] = ACTIONS(415),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
  },
  [147] = {
    [anon_sym_SQUOTE] = ACTIONS(417),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(419),
  },
  [148] = {
    [sym_end_tag] = STATE(131),
    [anon_sym_LT_SLASH] = ACTIONS(399),
  },
  [149] = {
    [sym__end_tag_name] = ACTIONS(421),
    [sym_erroneous_end_tag_name] = ACTIONS(423),
  },
  [150] = {
    [sym__end_tag_name] = ACTIONS(421),
    [sym_erroneous_end_tag_name] = ACTIONS(425),
  },
  [151] = {
    [sym_directive_modifier] = STATE(70),
    [aux_sym_directive_argument_token1] = ACTIONS(427),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_directive_dynamic_argument_value] = ACTIONS(431),
  },
  [153] = {
    [anon_sym_LT_SLASH] = ACTIONS(433),
    [sym_raw_text] = ACTIONS(433),
  },
  [154] = {
    [sym__end_tag_name] = ACTIONS(435),
    [sym_erroneous_end_tag_name] = ACTIONS(423),
  },
  [155] = {
    [anon_sym_LT_SLASH] = ACTIONS(437),
    [sym_raw_text] = ACTIONS(437),
  },
  [156] = {
    [sym_end_tag] = STATE(80),
    [anon_sym_LT_SLASH] = ACTIONS(405),
  },
  [157] = {
    [anon_sym_SQUOTE] = ACTIONS(439),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(441),
  },
  [158] = {
    [anon_sym_DQUOTE] = ACTIONS(439),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(443),
  },
  [159] = {
    [sym__end_tag_name] = ACTIONS(445),
    [sym_erroneous_end_tag_name] = ACTIONS(423),
  },
  [160] = {
    [sym_end_tag] = STATE(81),
    [anon_sym_LT_SLASH] = ACTIONS(405),
  },
  [161] = {
    [anon_sym_LT_SLASH] = ACTIONS(447),
    [sym_raw_text] = ACTIONS(447),
  },
  [162] = {
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_directive_dynamic_argument_value] = ACTIONS(451),
  },
  [163] = {
    [anon_sym_DQUOTE] = ACTIONS(417),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(453),
  },
  [164] = {
    [sym_directive_modifier] = STATE(45),
    [aux_sym_directive_argument_token1] = ACTIONS(455),
  },
  [165] = {
    [anon_sym_LT_SLASH] = ACTIONS(457),
    [sym_raw_text] = ACTIONS(457),
  },
  [166] = {
    [sym_end_tag] = STATE(51),
    [anon_sym_LT_SLASH] = ACTIONS(411),
  },
  [167] = {
    [sym_end_tag] = STATE(49),
    [anon_sym_LT_SLASH] = ACTIONS(411),
  },
  [168] = {
    [sym__end_tag_name] = ACTIONS(445),
    [sym_erroneous_end_tag_name] = ACTIONS(425),
  },
  [169] = {
    [sym_end_tag] = STATE(130),
    [anon_sym_LT_SLASH] = ACTIONS(399),
  },
  [170] = {
    [sym__end_tag_name] = ACTIONS(435),
    [sym_erroneous_end_tag_name] = ACTIONS(425),
  },
  [171] = {
    [anon_sym_SQUOTE] = ACTIONS(459),
  },
  [172] = {
    [anon_sym_DQUOTE] = ACTIONS(459),
  },
  [173] = {
    [anon_sym_RBRACK] = ACTIONS(461),
  },
  [174] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(463),
  },
  [175] = {
    [anon_sym_DQUOTE] = ACTIONS(465),
  },
  [176] = {
    [sym_erroneous_end_tag_name] = ACTIONS(425),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(467),
  },
  [178] = {
    [anon_sym_GT] = ACTIONS(469),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(471),
  },
  [180] = {
    [anon_sym_GT] = ACTIONS(473),
  },
  [181] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(475),
  },
  [182] = {
    [anon_sym_GT] = ACTIONS(477),
  },
  [183] = {
    [sym__end_tag_name] = ACTIONS(445),
  },
  [184] = {
    [sym_erroneous_end_tag_name] = ACTIONS(423),
  },
  [185] = {
    [anon_sym_GT] = ACTIONS(479),
  },
  [186] = {
    [sym__end_tag_name] = ACTIONS(421),
  },
  [187] = {
    [anon_sym_GT] = ACTIONS(481),
  },
  [188] = {
    [sym__end_tag_name] = ACTIONS(435),
  },
  [189] = {
    [anon_sym_SQUOTE] = ACTIONS(465),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_component, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(122),
  [7] = {.count = 1, .reusable = true}, SHIFT(16),
  [9] = {.count = 1, .reusable = false}, SHIFT(109),
  [11] = {.count = 1, .reusable = true}, SHIFT(170),
  [13] = {.count = 1, .reusable = true}, SHIFT(27),
  [15] = {.count = 1, .reusable = true}, SHIFT(53),
  [17] = {.count = 1, .reusable = true}, SHIFT(138),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(150),
  [23] = {.count = 1, .reusable = true}, SHIFT(84),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(168),
  [29] = {.count = 1, .reusable = true}, SHIFT(55),
  [31] = {.count = 1, .reusable = true}, SHIFT(95),
  [33] = {.count = 1, .reusable = true}, SHIFT(3),
  [35] = {.count = 1, .reusable = true}, SHIFT(67),
  [37] = {.count = 1, .reusable = true}, SHIFT(4),
  [39] = {.count = 1, .reusable = true}, SHIFT(141),
  [41] = {.count = 1, .reusable = false}, SHIFT(108),
  [43] = {.count = 1, .reusable = true}, SHIFT(159),
  [45] = {.count = 1, .reusable = true}, SHIFT(35),
  [47] = {.count = 1, .reusable = true}, SHIFT(91),
  [49] = {.count = 1, .reusable = true}, SHIFT(15),
  [51] = {.count = 1, .reusable = true}, SHIFT(149),
  [53] = {.count = 1, .reusable = true}, SHIFT(154),
  [55] = {.count = 1, .reusable = true}, SHIFT(13),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(109),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(176),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(27),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(53),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.count = 1, .reusable = true}, SHIFT(9),
  [76] = {.count = 1, .reusable = true}, SHIFT(8),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(108),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(184),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(35),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(91),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(15),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_component, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(17),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(122),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(17),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(110),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(105),
  [113] = {.count = 1, .reusable = true}, SHIFT(164),
  [115] = {.count = 1, .reusable = true}, SHIFT(114),
  [117] = {.count = 1, .reusable = true}, SHIFT(113),
  [119] = {.count = 1, .reusable = true}, SHIFT(151),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 2),
  [123] = {.count = 1, .reusable = true}, SHIFT(119),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 3),
  [129] = {.count = 1, .reusable = true}, SHIFT(120),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 3),
  [133] = {.count = 1, .reusable = true}, SHIFT(75),
  [135] = {.count = 1, .reusable = true}, SHIFT(85),
  [137] = {.count = 1, .reusable = false}, SHIFT(72),
  [139] = {.count = 1, .reusable = true}, SHIFT(18),
  [141] = {.count = 1, .reusable = true}, SHIFT(126),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_directive_modifiers, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_directive_modifiers, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(112),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_directive_modifiers_repeat1, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(aux_sym_directive_modifiers_repeat1, 2),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directive_modifiers_repeat1, 2), SHIFT_REPEAT(164),
  [156] = {.count = 1, .reusable = true}, SHIFT(57),
  [158] = {.count = 1, .reusable = true}, SHIFT(56),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [164] = {.count = 1, .reusable = true}, SHIFT(58),
  [166] = {.count = 1, .reusable = true}, SHIFT(174),
  [168] = {.count = 1, .reusable = true}, SHIFT(60),
  [170] = {.count = 1, .reusable = true}, SHIFT(140),
  [172] = {.count = 1, .reusable = true}, SHIFT(76),
  [174] = {.count = 1, .reusable = true}, SHIFT(111),
  [176] = {.count = 1, .reusable = true}, SHIFT(135),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(72),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(18),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(126),
  [189] = {.count = 1, .reusable = true}, SHIFT(99),
  [191] = {.count = 1, .reusable = false}, SHIFT(98),
  [193] = {.count = 1, .reusable = true}, SHIFT(19),
  [195] = {.count = 1, .reusable = true}, SHIFT(118),
  [197] = {.count = 1, .reusable = true}, SHIFT(100),
  [199] = {.count = 1, .reusable = true}, SHIFT(181),
  [201] = {.count = 1, .reusable = true}, SHIFT(161),
  [203] = {.count = 1, .reusable = true}, SHIFT(165),
  [205] = {.count = 1, .reusable = true}, SHIFT(155),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directive_modifiers_repeat1, 2), SHIFT_REPEAT(151),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_directive_dynamic_argument, 2),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_directive_dynamic_argument, 2),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(98),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(19),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(118),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_directive_dynamic_argument, 3),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_directive_dynamic_argument, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_directive_argument, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_directive_argument, 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_directive_modifier, 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_directive_modifier, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(153),
  [237] = {.count = 1, .reusable = true}, SHIFT(102),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_template_element, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_template_element, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_template_element, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_template_element, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [305] = {.count = 1, .reusable = true}, SHIFT(107),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 4),
  [311] = {.count = 1, .reusable = true}, SHIFT(121),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 4),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_attribute_value, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_attribute_value, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 5),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 5),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_directive_attribute, 6),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_directive_attribute, 6),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 3),
  [339] = {.count = 1, .reusable = true}, SHIFT(106),
  [341] = {.count = 1, .reusable = true}, SHIFT(117),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_template_start_tag, 4),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_template_start_tag, 4),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_template_start_tag, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_template_start_tag, 3),
  [351] = {.count = 1, .reusable = false}, SHIFT(43),
  [353] = {.count = 1, .reusable = true}, SHIFT(162),
  [355] = {.count = 1, .reusable = true}, SHIFT(124),
  [357] = {.count = 1, .reusable = true}, SHIFT(147),
  [359] = {.count = 1, .reusable = true}, SHIFT(163),
  [361] = {.count = 1, .reusable = true}, SHIFT(93),
  [363] = {.count = 1, .reusable = true}, SHIFT(157),
  [365] = {.count = 1, .reusable = true}, SHIFT(158),
  [367] = {.count = 1, .reusable = true}, SHIFT(22),
  [369] = {.count = 1, .reusable = true}, SHIFT(48),
  [371] = {.count = 1, .reusable = true}, SHIFT(37),
  [373] = {.count = 1, .reusable = true}, SHIFT(46),
  [375] = {.count = 1, .reusable = true}, SHIFT(28),
  [377] = {.count = 1, .reusable = true}, SHIFT(79),
  [379] = {.count = 1, .reusable = true}, SHIFT(128),
  [381] = {.count = 1, .reusable = true}, SHIFT(125),
  [383] = {.count = 1, .reusable = false}, SHIFT(54),
  [385] = {.count = 1, .reusable = true}, SHIFT(152),
  [387] = {.count = 1, .reusable = true}, SHIFT(116),
  [389] = {.count = 1, .reusable = true}, SHIFT(115),
  [391] = {.count = 1, .reusable = true}, SHIFT(86),
  [393] = {.count = 1, .reusable = true}, SHIFT(88),
  [395] = {.count = 1, .reusable = true}, SHIFT(90),
  [397] = {.count = 1, .reusable = true}, SHIFT(29),
  [399] = {.count = 1, .reusable = true}, SHIFT(188),
  [401] = {.count = 1, .reusable = true}, SHIFT(148),
  [403] = {.count = 1, .reusable = true}, SHIFT(169),
  [405] = {.count = 1, .reusable = true}, SHIFT(186),
  [407] = {.count = 1, .reusable = true}, SHIFT(156),
  [409] = {.count = 1, .reusable = true}, SHIFT(160),
  [411] = {.count = 1, .reusable = true}, SHIFT(183),
  [413] = {.count = 1, .reusable = true}, SHIFT(166),
  [415] = {.count = 1, .reusable = true}, SHIFT(167),
  [417] = {.count = 1, .reusable = false}, SHIFT(123),
  [419] = {.count = 1, .reusable = true}, SHIFT(189),
  [421] = {.count = 1, .reusable = true}, SHIFT(180),
  [423] = {.count = 1, .reusable = true}, SHIFT(182),
  [425] = {.count = 1, .reusable = true}, SHIFT(178),
  [427] = {.count = 1, .reusable = true}, SHIFT(66),
  [429] = {.count = 1, .reusable = true}, SHIFT(71),
  [431] = {.count = 1, .reusable = true}, SHIFT(173),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 3),
  [435] = {.count = 1, .reusable = true}, SHIFT(187),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 4),
  [439] = {.count = 1, .reusable = false}, SHIFT(82),
  [441] = {.count = 1, .reusable = true}, SHIFT(171),
  [443] = {.count = 1, .reusable = true}, SHIFT(172),
  [445] = {.count = 1, .reusable = true}, SHIFT(185),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 4),
  [449] = {.count = 1, .reusable = true}, SHIFT(40),
  [451] = {.count = 1, .reusable = true}, SHIFT(177),
  [453] = {.count = 1, .reusable = true}, SHIFT(175),
  [455] = {.count = 1, .reusable = true}, SHIFT(44),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 3),
  [459] = {.count = 1, .reusable = true}, SHIFT(87),
  [461] = {.count = 1, .reusable = true}, SHIFT(73),
  [463] = {.count = 1, .reusable = true}, SHIFT(65),
  [465] = {.count = 1, .reusable = true}, SHIFT(127),
  [467] = {.count = 1, .reusable = true}, SHIFT(42),
  [469] = {.count = 1, .reusable = true}, SHIFT(64),
  [471] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [473] = {.count = 1, .reusable = true}, SHIFT(78),
  [475] = {.count = 1, .reusable = true}, SHIFT(103),
  [477] = {.count = 1, .reusable = true}, SHIFT(104),
  [479] = {.count = 1, .reusable = true}, SHIFT(59),
  [481] = {.count = 1, .reusable = true}, SHIFT(132),
};

void *tree_sitter_vue_external_scanner_create(void);
void tree_sitter_vue_external_scanner_destroy(void *);
bool tree_sitter_vue_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_vue_external_scanner_serialize(void *, char *);
void tree_sitter_vue_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vue(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_vue_external_scanner_create,
      tree_sitter_vue_external_scanner_destroy,
      tree_sitter_vue_external_scanner_scan,
      tree_sitter_vue_external_scanner_serialize,
      tree_sitter_vue_external_scanner_deserialize,
    },
  };
  return &language;
}
