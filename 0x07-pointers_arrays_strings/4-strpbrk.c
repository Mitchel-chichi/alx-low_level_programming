#include "main.h"
/**
 * _strpbrk - used for searching string bytes
 * @s: - the parameter to be located
 * @accept: - where th estring is found
 * Return: 0 (success)
*/

char *_strpbrk(char *s, char *accept)
{
int dgt;

while (*s)
{
for (dgt = 0; accept[dgt]; dgt++)
{
if (*s == accept[dgt])
return (s);
}
s++;
}
return ('\0');
}
