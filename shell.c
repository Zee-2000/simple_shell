#include <stdio.h>
#include "shell.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
/**
<<<<<<< HEAD
* main -  entry point for shell program shell program
* @command: command written in shell
* @rgu: array of strings that stores the command and its 1st argument
* @sizbff: size of bufferr allocated in command
* @read_com: number of bytes read from the user input
* @path_command: stores the full path exceutable for the user command
* Return: 0 for success
=======
* main -  Simple shell heart
* Return : 0
>>>>>>> a2ac0be3e17e7911af77eaae7fe2c5f8073a7b07
*/
int main(void)
{
char *command = NULL;
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
