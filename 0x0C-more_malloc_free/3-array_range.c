#include "main.h"
#include <stdlib.h>
/**
 * *array_range - used for creating an arr of int
 * @min: - the parameter min range stored values
 * @max: - the parameter max range ofstored values
 * Return: returns pointer to new arr
*/
int *array_range(int min, int max)
{
int *dgt;
int v, mun;

if (min > max)
return (NULL);
mun = max - min + 1;
dgt = malloc(sizeof(int) * mun);
if (dgt == NULL)
return (NULL);
for (v = 0; min <= max; v++)
dgt[v] = min++;
return (dgt);
}
