#include "fm_main.h"

/**
 * main - a simple shell.
 * argc - argument count.
 * argv - argument vector.
 *
 * Return: Always 0.
 */
int main(int ac __attribute__((unused)), char **av) {
  char *lineptr = NULL, *lineptr_cpy = NULL;
  const char *delimtr = " \n";
  size_t nread = 0;
  int count_token;
  char *shell_prompt = "fm_shell$ ";
  ssize_t nchar_read;
  char **av_cmd_line;
   pid_t child_pid;

  for (;;) {
    write(STDOUT_FILENO, shell_prompt, strlen(shell_prompt));
    nchar_read = getline(&lineptr, &nread, stdin);

    fm_builtin(lineptr);
    if (nchar_read == -1) {
      write(STDOUT_FILENO, "Exiting.....", 13);
      return (-1);
    } else {
      lineptr_cpy = malloc(sizeof(char) * nchar_read);
      mem_alloc_error(lineptr_cpy);
      strcpy(lineptr_cpy, lineptr);
      count_token = fm_tokenize(lineptr, delimtr);

      /*av_cmmd goes here*/
      av_cmd_line = av_cmmd(lineptr_cpy, delimtr, av, count_token);
      child_pid = fork();
      if (child_pid == 0) {
        exe_cmmd(av_cmd_line);
        exit(EXIT_FAILURE);
      } else if (child_pid < 0)
        perror("Fork error");
      else
        wait(NULL);
    }
  }
  free(lineptr);
  free(lineptr_cpy);
  return (0);
}