#include <stdio.h>

/**
 * main - prints combinations of numbers in two two sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int v, w;
for (v = 0; v <= 98; v++)
{
for (w = v + 1; w <= 99; w++)
{
putchar((v / 10) + '0');
putchar((v % 10) + '0');
putchar(' ');
putchar((w / 10) + '0');
putchar((w % 10) + '0');
if (v == 98 && w == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
