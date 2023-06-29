#include "main.h"
/**
 * _strcat - it concatenates two files
 * @dest: - the destination value
 * @src: - the source value
 * Return: it returns the pointed character
*/

char *_strcat(char *dest, char *src)
{
int a = 0, u;
while (dest[a])
{
a++;
}
for (u = 0; src[u] != 0; u++)
{
dest[a] = src[u];
a++;
}
dest[a] = '\0';
return (dest);
}
