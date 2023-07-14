#include "main.h"
#include <stdlib.h>
/**
 * *_memset - used for filling mem with constant byte
 * @v: - the parameter mem being filled
 * @h: - the parameter character being copied
 * @e: - the parameter num of times to copy char h
 * Return: returns pointer to mem area
*/
char *_memset(char *v, char h, unsigned int e)
{
unsigned int r;

for (r = 0; r < e; r++)
{
v[r] = h;
}
return (v);
}
/**
 * *_calloc - used for allocating mem for arr
 * @nmemb: - the parameter num of elements in arr
 * @size: - the parameter for size of each element
 * Return: returns pointer to mem allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *dgt;

if (nmemb == 0 || size == 0)
return (NULL);
dgt = malloc(size * nmemb);
if (dgt == NULL)
return (NULL);
_memset(dgt, 0, nmemb * size);
return (dgt);
}
