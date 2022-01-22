#include <fcntl.h>
#include <stdlib.h>
#include "defs.h"
#include "decl.h"

Connection* connect(char* filename) {
  int fd = open(filename,
                O_RDWR |      // Read/Write mode
                    O_CREAT,  // Create file if it does not exist
                S_IWUSR |     // Create file with user write permission
                    S_IRUSR   // Create file with user read permission
                );

  if (fd == -1) {
    printf("Unable to open file '%s'\n", filename);
    exit(EXIT_FAILURE);
  }

  Connection* connection = malloc(sizeof(Connection));
  connection->file_descriptor = fd;

  return connection;
}