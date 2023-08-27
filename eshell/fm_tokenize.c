#include "fm_main.h"

int fm_tokenize(char *lineptr, const char* delimtr)
{
      char *fm_token;
      int count_token = 0;
  
      fm_token = _strtok(lineptr, delimtr);
      while (fm_token != NULL)
        {
          count_token++;
          fm_token = _strtok(NULL, delimtr);
        }
      count_token++;

      return (count_token);
}