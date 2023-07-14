#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - used for joining n string to another string
 * @s1: - the parameter string for appending
 * @s2: - the parameter string to join from
 * @n: - the parametr num of bytes from s2 to join to s1
 * Return: returns pointer to the supposed string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *dgt;
unsigned int v = 0, m = 0, mun = 0, pal = 0;

while (s1 && s1[mun])
mun++;
while (s2 && s2[pal])
pal++;
if (n < pal)
dgt = malloc(sizeof(char) * (mun + n + 1));
else
dgt = malloc(sizeof(char) * (mun + pal + 1));
if (!dgt)
return (NULL);
while (v < mun)
{
dgt[v] = s1[v];
v++;
}
while (n < pal && v < (mun + n))
dgt[v++] = s2[m++];
while (n >= pal && v < (mun + pal))
dgt[v++] = s2[m++];
dgt[v] = '\0';
return (dgt);
}
