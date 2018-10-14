/*
author: Van Vinh Tong
email: vinhbachkhoait@gmail.com
*/

#ifndef _HEADER_H
#define _HEADER_H
#include <ctype.h>
#include <stdio.h>

typedef enum {
    CALL = 0, TO, DO, ELSE, END, FOR, IF, VAR, 
    ODD, PROCEDURE, PROGRAM, THEN, CONST, BEGIN, 
    WHILE, PLUS, MINUS, NONE, IDENT, NUMBER, 
    TIMES, SLASH, EQU, NEQ, LSS, LEQ, GTR, GEO, 
    LPARENT, RPARENT, LBRACK, RBRACK,
    PERIOD, COMMA, SEMICOLON, ASSIGN, PERCENT, COMPARE, GEQ, NND, NNM, NK
} TokenType;

// len of IDEN < 15
#define MAX_IDEN_LEN 15

int checkSpecialChar();

int getToken();


#endif

