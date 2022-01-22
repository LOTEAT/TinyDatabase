/*
 * @Autor: LOTEAT
 * @Description: 
 * @Date: 2022-01-22 09:58:26
 */


#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "decl.h"




char* get_db_filename(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Must supply a filename for the database.\n");
    exit(EXIT_FAILURE);
  }
  return argv[1];
}


InputBuffer* new_input_buffer() {
  InputBuffer* input_buffer = malloc(sizeof(InputBuffer));
  input_buffer->buffer = NULL;
  input_buffer->buffer_length = 0;
  input_buffer->input_length = 0;

  return input_buffer;
}

void print_prompt() { printf("tiny_db > "); }


int main(int argc, char* argv[]) {
  char* db_filename = get_db_filename(argc, argv);
  Connection* connection = connect(db_filename);

  InputBuffer* input_buffer = new_input_buffer();
  while (true) {
    print_prompt();
    read_input(input_buffer);

    if (strcmp(input_buffer->buffer, "exit") == 0) {
      printf("Bye\n");
      exit(EXIT_SUCCESS);
    } else {
      printf("Unrecognized command '%s'.\n", input_buffer->buffer);
    }
  }
}