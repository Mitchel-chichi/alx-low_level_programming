#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - used for duplicating new memory space location
 * @str: - the parameter char that is a duplicate
 * Return: 0 success
 */
char *_strdup(char *str)
{
char *dgt;
int v, w = 0;

if (str == NULL)
return (NULL);
v = 0;
while (str[v] != '\0')
v++;

dgt = malloc(sizeof(char) * (v + 1));
if (dgt == NULL)
return (NULL);
for (w = 0; str[w]; w++)
dgt[w] = str[w];
return (dgt);
}
