#include "main.h"
#include <stdlib.h>
/**
 * argstostr - used for joining all the arguments
 * @ac: - the parameter for integer input
 * @av: - the parameter for double pointer array
 * Return: 0 success
 */
char *argstostr(int ac, char **av)
{
int x, w, v = 0, m = 0;
char *dgt;

if (ac == 0 || av == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (w = 0; av[x][w]; w++)
m++;
}
m += ac;
dgt = malloc(sizeof(char) * m + 1);
if (dgt == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (w = 0; av[x][w]; w++)
{
dgt[v] = av[x][w];
v++;
}
if (dgt[v] == '\0')
{
dgt[v++] = '\n';
}
}
return (dgt);
}
