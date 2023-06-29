#include "main.h"
/**
 * _strncat - it concatenated two strings
 * @n: - the number of bytes from the source file
 * @dest: - the destination file
 * @src: - the source file
 * Return: - it returns the destination value
*/

char *_strncat(char *dest, char *src, int n)
{
int m = 0, r = 0;
while (dest[m++])
r++;
for (m = 0; src[m] && m < n; m++)
dest[r++] = src[m];
return (dest);
}
