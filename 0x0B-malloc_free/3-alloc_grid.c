#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - used for returning a two dimensional array
 * @width: - the parameter for width input
 * @height: - the parameter for height input
 * Return: returns NULL if w or h
 */
int **alloc_grid(int width, int height)
{
int **dgt;
int s, r;

if (width <= 0 || height <= 0)
return (NULL);
dgt = malloc(sizeof(int *) * height);
if (dgt == NULL)
return (NULL);
for (s = 0; s < height; s++)
{
dgt[s] = malloc(sizeof(int) * width);
if (dgt[s] == NULL)
{
for (; s >= 0; s--)
free(dgt[s]);
free(dgt);
return (NULL);
}
}
for (s = 0; s < height; s++)
{
for (r = 0; r < width; r++)
dgt[s][r] = 0;
}
return (dgt);
}
