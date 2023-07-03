#include "main.h"
/**
 * _memcpy - it copies the memory area
 * @dest: - the destination value of memory area
 * @src: - the source value of memory area
 * @n: - the number of bytes of the meory area
 * Return: 0 (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;
for (u = 0; u < n; u++)
dest[u] = src[u];
return (dest);
}
