#ifndef _DEFS_H_
#define _DEFS_H_

#include <stdio.h>

struct Connection {
  int file_descriptor;
};

struct InputBuffer {
  char* buffer;
  size_t buffer_length;
  ssize_t input_length;
};

typedef struct Connection Connection;
typedef struct InputBuffer InputBuffer;

#endif