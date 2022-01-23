#ifndef _DECL_H_
#define _DECL_H_

#include "defs.h"
// connect.c
Connection* connect(char*);

// exec.c
void read_input(InputBuffer*);
InputBuffer* new_input_buffer();
MetaCommandResult do_meta_command(InputBuffer* input_buffer);
PrepareResult prepare_statement(InputBuffer* input_buffer,
                                Statement* statement);
ExecuteResult execute_insert(Statement* statement, Table* table);
ExecuteResult execute_select(Statement* statement, Table* table);
ExecuteResult execute_statement(Statement* statement, Table* table);

// dbprint.c
void print_prompt();
void print_row();

// built_in_tables.c
void serialize_row(Row*, void*);
void deserialize_row(void*, Row*);
void* row_slot(Table*, uint32_t);

// table.c
Table* new_table();


#endif
