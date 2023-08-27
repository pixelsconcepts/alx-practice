#include "fm_main.h"
/**
  * fm_getenv - get environment variable
  * @var_name: environment variable
  * 
  * Return: NULL
  */
char *fm_getenv(const char *var_name)
{
  char *equal_sign;
  size_t var_len;
  int index;

  for (index = 0; environ[index] != NULL; index++)
    {
      equal_sign = _strchr(environ[index], '=');
      if (equal_sign != NULL) 
      {
            /*Calculate the length of the variable name*/
            var_len = equal_sign - environ[index];
            
            /*Compare variable name with the input*/
            if (strncmp(environ[index], var_name, var_len) == 0) 
            {
                return equal_sign + 1;  /*Return value after '='*/
            }
        }
    }
  return (NULL);
}