#include "main.h"
/**
 * _memset - it fills the memopry with bytes
 * @n: - the parameter to be filled with bytes
 * @b: - the parameter with constant byte
 * @s: - the parameter memory area
 * Return: 0 (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int r;
for (r = 0; r < n; r++)
s[r] = b;
return (s);
}
