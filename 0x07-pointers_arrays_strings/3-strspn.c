#include "main.h"
/**
 * _strspn - it gets the ubstring length prefix
 * @s: - the parameter where bytes are returned
 * @accept: - the parameter that consists of bytes
 * Return: 0 (success)
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int h = 0;
int f;

while (*s)
{
for (f = 0; accept[f]; f++)
{
if (*s == accept[f])
{
h++;
break;
}
else if (accept[f + 1] == '\0')
return (h);
}
s++;
}
return (h);
}

