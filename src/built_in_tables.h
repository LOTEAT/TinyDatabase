#ifndef _BUILD_IN_TABLES_
#define _BUILD_IN_TABLES_

#include "param.h"
#include <stdint.h>

typedef struct{
  uint32_t id;
  char username[COLUMN_USERNAME_SIZE];
  char email[COLUMN_EMAIL_SIZE];
} Row;

#define ID_SIZE  sizeof(((Row*)0)->id)
#define USERNAME_SIZE  sizeof(((Row*)0)->username)
#define EMAIL_SIZE  sizeof(((Row*)0)->email)
#define ID_OFFSET  0
#define USERNAME_OFFSET  ID_OFFSET + ID_SIZE
#define EMAIL_OFFSET  USERNAME_OFFSET + USERNAME_SIZE
#define ROW_SIZE  ID_SIZE + USERNAME_SIZE + EMAIL_SIZE
#define PAGE_SIZE  4096
#define ROWS_PER_PAGE  PAGE_SIZE / ROW_SIZE
#define TABLE_MAX_ROWS  ROWS_PER_PAGE * TABLE_MAX_PAGES

#endif 