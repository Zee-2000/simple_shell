#include "shell.h"
#include <stddef.h>
/**
 * *environs_get - the main func
 * @environs_name: cheack value
 *
 * Return: null
 */

char *environs_get(const char *environs_name)
{
size_t x = 0, y = 0;
char *environs_bar = NULL;

while (environ[x] != NULL)
{
environs_bar = environ[x];
y = 0;
while (environs_bar[y] == environs_name[y] &&  environs_bar[y] !=
'=' && environs_bar[y] && environs_name[y])
y++;
if (environs_name[y] == '\0')
return (duplicate_string(environs_bar));
x++;
}

return (NULL);
}
