#include <stdio.h>

/**
 * main - Print 16hexadicimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
for (b = '1'; b <= '9'; b++)
putchar(b);
for (b = 'a'; b <= 'f'; b++)
putchar(b);
putchar('\n');
return (0);
}
