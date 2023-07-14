#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - used for allocating mem via malloc
 * @b: - the parameter num of bytes for allocation
 * Return: it returns a pointer of allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *dgt;

dgt = malloc(b);
if (dgt == NULL)
exit(98);
return (dgt);
}
