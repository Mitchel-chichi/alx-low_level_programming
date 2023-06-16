#include <stdio.h>

/**
 * main - use int to print base ten numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
putchar(a);
putchar('\n');
return (0);
}
