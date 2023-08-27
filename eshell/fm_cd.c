#include "fm_main.h"

#define MAX_INPUT_LENGTH 1024

void _cd(const char *arg) {
    char new_path[MAX_INPUT_LENGTH];

    if (arg == NULL || strcmp(arg, "~") == 0) {
        arg = getenv("HOME");
    } else if (strcmp(arg, "-") == 0) {
        arg = getenv("OLDPWD");
    }

    if (arg) {
        if (chdir(arg) == 0) {
            if (getcwd(new_path, sizeof(new_path)) != NULL) {
                setenv("OLDPWD", getenv("PWD"), 1);
                setenv("PWD", new_path, 1);
            } else {
                perror("getcwd");
            }
        } else {
            perror("chdir");
        }
    }
}
