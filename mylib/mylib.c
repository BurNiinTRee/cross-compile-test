#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mylib.h"
#include <config.h>

char* make_greeting(char* name) {
  int name_length = strlen(name);
  int prefix_length = strlen(GREETING_PREFIX);
  int buffer_size = name_length + prefix_length + 3; // space + ! + \0
  char* buff = malloc(buffer_size);

  snprintf(buff, buffer_size, "%s %s!", GREETING_PREFIX, name);
  return buff;
}

void free_greeting(char* greeting) {
  free(greeting);
}
