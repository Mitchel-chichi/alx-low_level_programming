#include "main.h"
/**
 * _strncpy - it copies a string
 * @dest: - the destination value
 * @src: - the source value
 * @n: - the number fo bytes to be copied
 * Return: it returns the destination value
*/

char *_strncpy(char *dest, char *src, int n)
{
int t = 0, e = 0;
while (src[t++])
e++;
for (t = 0; src[t] && t < n; t++)
dest[t] = src[t];
for (t = e; t < n; t++)
dest[t] = '\0';
return (dest);
}
