#include <stdio.h>
#include "shell.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
/**
 * main -  entry point for shell program shell progra.
 * Return: 0 for success.
 */
int main(void)
{
char *command = 0;
char *rgu[] = {NULL, NULL};
size_t sizbff = 0;
ssize_t read_com = 0;
char *path_command = NULL;

while (1)
{
printf("welcome in our Shell :)\n");
printf("wait your Command :) ");
read_com = getline(&command, &sizbff, stdin);
command[read_com - 1] = '\0';

path_command = find_path(command);
if (path_command)
{
rgu[0] = path_command;
if (fork() == 0)
execve(*rgu, rgu, NULL);
else
{
wait(NULL);
free(path_command);
path_command = NULL;
};
}
else
dprintf(STDERR_FILENO, "%s: Command not found\n", command);
}

return (0);
}
