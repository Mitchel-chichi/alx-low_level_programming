#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - used for printing diagonals of two integers
 * @a: - the parameter
 * @size: - the parameter to find the size
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int dgt, mun, w;

dgt = 0;
mun = 0;

for (w = 0; w < size; w++)
{
dgt = dgt + a[w * size + w];
}
for (w = size - 1; w >= 0; w--)
{
mun += a[w * size + (size - w - 1)];
}
printf("%d, %d\n", dgt, mun);
}
