#include "main.h"
/**
 * _atoi - used for converting strings to integers.
 * @s:  - the parameter for usage of string
 * Return: must return an int
 */
int _atoi(char *s)
{
int dgt = 1, u = 0;
unsigned int pal = 0;
while (!(s[u] <= '9' && s[u] >= '0') && s[u] != '\0')
{
if (s[u] == '-')
dgt *= -1;
u++;
}
while (s[u] <= '9' && (s[u] >= '0' && s[u] != '\0'))
{
pal = (pal * 10) + (s[u] - '0');
u++;
}
pal *= dgt;
return (pal);
}
