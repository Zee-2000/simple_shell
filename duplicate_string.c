#include <stdlib.h>
/**
*duplicate_string - function that duplicates string
* @s: constant character
* Return : new allocated pointer for the duplicated string
*/
char *duplicate_string(const char *s)
{
size_t x = 0;
size_t l = 0;
char *ns = NULL;

while (s[x++])
;
l += x;

ns = malloc(sizeof(*ns) * (l + 1));

x = 0;
while (x <= l)
{
ns[x] = s[x];
x++;
}
return (ns);
}
