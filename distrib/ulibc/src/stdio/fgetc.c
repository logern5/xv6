#include <stdio.h>
#include <assert.h>
#include <syscall.h>

int fgetc(FILE* stream)
{
  /* TODO: Add buffering depending on flags */
  int chr = '\0';
  read(stream->fd, &chr, 1);
  return chr;
}

