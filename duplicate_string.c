#include <stdlib.h>
/**
*duplicate_string - allocates a new memory
* @s: constant character
* Return : A new string that is an exact copy of the input string
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
