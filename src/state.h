#ifndef _STATE_H_
#define _STATE_H_

typedef enum { 
    EXECUTE_SUCCESS, 
    EXECUTE_TABLE_FULL 
} ExecuteResult;

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum {
    PREPARE_SUCCESS,
    PREPARE_SYNTAX_ERROR,
    PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

typedef enum { 
    STATEMENT_INSERT, 
    STATEMENT_SELECT 
} StatementType;

#endif