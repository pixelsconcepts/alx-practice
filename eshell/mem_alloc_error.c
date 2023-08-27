#include "fm_main.h"

void mem_alloc_error(char *s)
{
  if (s == NULL)
      {
        perror("memory allocation failed");
        exit(EXIT_FAILURE);
      }
}