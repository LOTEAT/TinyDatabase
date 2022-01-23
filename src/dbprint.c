#include "decl.h"

void print_prompt(){ 
    printf("tiny_db > "); 
}

void print_row(Row* row) {
    printf("(%d, %s, %s)\n", row->id, row->username, row->email);
}