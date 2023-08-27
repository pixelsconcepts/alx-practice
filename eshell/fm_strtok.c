#include "fm_main.h"
/**
  *_strtok - Tokenises strings gotten from the stdin
  *@str: String to be tokenized
  *@delim: Delimeter for the tokenization
  *
  * Return: tokenized string
  */


char *_strtok(char *str, const char *delim) {
    static char *saveptr;
    char *token_start;
    
    if (str != NULL) {
        saveptr = str;
    }
    
    if (saveptr == NULL || *saveptr == '\0') {
        return NULL;
    }
    
    /*Skip leading delimiters*/
    while (*saveptr && _strchr(delim, *saveptr)) {
        saveptr++;
    }
    
    if (*saveptr == '\0') {
        return NULL;
    }
    
    token_start = saveptr;
    while (*saveptr && !_strchr(delim, *saveptr)) {
        saveptr++;
    }
    
    if (*saveptr) {
        *saveptr = '\0';
        saveptr++;
    }
    
    return token_start;
}