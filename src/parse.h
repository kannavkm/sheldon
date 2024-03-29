//
// Created by kannav on 9/1/20.
//

#ifndef SHELDON_PARSE_H
#define SHELDON_PARSE_H

enum token_type {
  SYMBOL,
  STRING
};

struct token {
    enum token_type _type;
    char * _text;
};

void display_prompt(void);

int split_into_commands(char ***argv, char *input);

struct token * get_next_token(char *line);

void free_token(void);

#endif //SHELDON_PARSE_H
