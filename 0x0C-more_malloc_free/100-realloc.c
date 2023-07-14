#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - used for reallocating a mem block via malloc and free
 * @ptr: - the parameter pointer to mem allocated by malloc last
 * @old_size: - the parameter size of allocated mem for pointer
 * @new_size: - the parameter new size of new mem block
 * Return: returns pointer to the new mem block allocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *dgt;
char *mun;
unsigned int v;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
dgt = malloc(new_size);
if (!dgt)
return (NULL);
mun = ptr;
if (new_size < old_size)
{
for (v = 0; v < new_size; v++)
dgt[v] = mun[v];
}
if (new_size > old_size)
{
for (v = 0; v < old_size; v++)
dgt[v] = mun[v];
}
free(ptr);
return (dgt);
}
