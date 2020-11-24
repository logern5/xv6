#include <stdio.h>
#include <assert.h>

void perror(const char* s)
{
  fprintf(stderr, "perror(): %s\n", s);
}

