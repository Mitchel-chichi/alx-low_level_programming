#include <stdio.h>

/**
 * main - Print different two digits combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, s;
for (n = '0'; n < '9'; n++)
{
for (s = n + 1; s <= '9'; s++)
{
if (s != n)
{
putchar(n);
putchar(s);
if (n == '8' && s == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
