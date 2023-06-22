#include "main.h"

/**
 * print_triangle - it prints a triangle
 * @size: - itv is size of triangles
*/

void print_triangle(int size)
{
int m, z, r;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (m = 0; m < size; m++)
{
for (z = size - m; z > 1; z--)
{
_putchar(32);
}
for (r = 0; r <= m; r++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
