#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <ctype.h>
#include "shell.h"
#include <stddef.h>

extern char **environ;

/* Macros unit Variables*/

#define MAX_ARGV 10

/* function header */
void print_prompt(char *prompt);
char *read_input();
int parse_input(char *input, char **argv);
char *find_command(char *command);
void execute_command(char *command, char **argv);
char *getenv(const char *name);
size_t strlen(const char *str);
int _strlen(char *str);
char *_strchr(char *str, char ch);
char *_strdup(char *string);
int _strcmp(char *str1, char *str2);



#endif
