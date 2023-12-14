#include "shell.h"
#include <sys/stat.h>
/**
*check_file_ex - checks if the function printed by fp exists
* @fp: constant character integer
* Return: An integer
*/
int check_file_ex(const char *fp)
{
struct stat bff;

if (stat(fp, &bff) == 0)
return (1);

return (0);
}
