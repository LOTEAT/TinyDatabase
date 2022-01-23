#ifndef _DEFS_H_
#define _DEFS_H_

#include <stdio.h>
#include <stdint.h>
#include "state.h"
#include "built_in_tables.h"
typedef struct {
  int file_descriptor;
} Connection;

typedef struct {
  char* buffer;
  size_t buffer_length;
  ssize_t input_length;
}InputBuffer;

typedef struct {
  StatementType type;
  Row row_to_insert;  // only used by insert statement
} Statement;


typedef struct {
  void* pages[TABLE_MAX_PAGES];
  uint32_t num_rows;
} Table;


#endif