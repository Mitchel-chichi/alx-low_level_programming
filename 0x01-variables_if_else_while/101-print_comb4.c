#include <stdio.h>

/**
 * main - print three combinations of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int h, j, k;
for (h = '0'; h <= '9'; h++)
{
for (j = h + 1; j <= '9'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
if ((j != h) != k)
{
putchar(h);
putchar(j);
putchar(k);
if (h == '7' && j == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
