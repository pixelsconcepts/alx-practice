#ifndef FM_MAIN_H
#define FM_MAIN_H
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>

void exe_cmmd(char **av);
int fm_tokenize(char *lineptr, const char *delimtr);
char **av_cmmd(char *lineptr_cpy, const char *delimtr, char **av, int count_token);
void mem_alloc_error(char *s);
char *locate_cmmd(char *cmmd);
char *fm_getenv(const char *var_name);
extern char **environ;
void fm_builtin(char *input);
char *_strtok(char *str, const char *delim);
void _cd(const char *arg);
/*char *_strchr(const char *s, char c);*/
char *_strchr(const char *str, int ch);
#endif