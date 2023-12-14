#include "shell.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *find_path - the main fun
 * @path_name: value
 * Return: the path
 */

char *find_path(const char *path_name)
{
char *path = environs_get("PATH");
char *path_d = NULL;
char *path_f = NULL;
if (check_file_ex(path_name))
return (duplicate_string(path_name));
strtok(path, " = ");
path_d = strtok(NULL, ":");
while (path_d)
{
path_f = merge_paths('/', path_d, path_name);
if (check_file_ex(path_f))
break;

free(path_f);
path_f = NULL;

path_d = strtok(NULL, ":");
}
free(path);

return (path_f);
}
