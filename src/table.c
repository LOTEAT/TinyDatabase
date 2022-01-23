#include "defs.h"
#include "stdlib.h"
#include "decl.h"

Table* new_table() {
  Table* table = malloc(sizeof(Table));
  table->num_rows = 0;
  return table;
}