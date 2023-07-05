#include "./tree_sitter_html/scanner.c"
#include "tree_sitter/parser.h"

void *tree_sitter_vue_external_scanner_create() {
    return tree_sitter_html_external_scanner_create();
}

unsigned tree_sitter_vue_external_scanner_serialize(void *payload,
                                                    char *buffer) {
    return tree_sitter_html_external_scanner_serialize(payload, buffer);
}

void tree_sitter_vue_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {
    tree_sitter_html_external_scanner_deserialize(payload, buffer, length);
}

bool tree_sitter_vue_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    bool is_error_recovery =
        valid_symbols[START_TAG_NAME] && valid_symbols[RAW_TEXT];
    if (!is_error_recovery) {
        if (lexer->lookahead != '<' && (valid_symbols[TEXT_FRAGMENT] ||
                                        valid_symbols[INTERPOLATION_TEXT])) {
            bool has_text = false;
            for (;; has_text = true) {
                if (lexer->lookahead == 0) {
                    lexer->mark_end(lexer);
                    break;
                }
                if (lexer->lookahead == '<') {
                    lexer->mark_end(lexer);
                    lexer->advance(lexer, false);
                    if (iswalpha(lexer->lookahead) || lexer->lookahead == '!' ||
                        lexer->lookahead == '?' || lexer->lookahead == '/') {
                        break;
                    }
                } else if (lexer->lookahead == '{') {
                    lexer->mark_end(lexer);
                    lexer->advance(lexer, false);
                    if (lexer->lookahead == '{') {
                        break;
                    }
                } else if (lexer->lookahead == '}' &&
                           valid_symbols[INTERPOLATION_TEXT]) {
                    lexer->mark_end(lexer);
                    lexer->advance(lexer, false);
                    if (lexer->lookahead == '}') {
                        lexer->result_symbol = INTERPOLATION_TEXT;
                        return has_text;
                    }
                } else {
                    lexer->advance(lexer, false);
                }
            }
            if (has_text) {
                lexer->result_symbol = TEXT_FRAGMENT;
                return true;
            }
        }
    }
    return tree_sitter_html_external_scanner_scan(payload, lexer,
                                                  valid_symbols);
}

void tree_sitter_vue_external_scanner_destroy(void *payload) {
    tree_sitter_html_external_scanner_destroy(payload);
}
