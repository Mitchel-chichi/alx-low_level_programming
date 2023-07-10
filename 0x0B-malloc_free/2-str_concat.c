#include "main.h"
#include <stdlib.h>
/**
 * str_concat - used for joining two strings
 * @s1: - the parameter one to be joined
 * @s2: - the parameter two to be joined
 * Return: returns joined strings of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *pal;
int mun, dgt;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

mun = dgt = 0;
while (s1[mun] != '\0')
mun++;
while (s2[dgt] != '\0')
dgt++;
pal = malloc(sizeof(char) * (mun + dgt + 1));

if (pal == NULL)
return (NULL);
mun = dgt = 0;
while (s1[mun] != '\0')
{
pal[mun] = s1[mun];
mun++;
}

while (s2[dgt] != '\0')
{
pal[mun] = s2[dgt];
mun++, dgt++;
}
pal[mun] = '\0';
return (pal);
}
