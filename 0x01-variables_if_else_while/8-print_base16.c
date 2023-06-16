#include <stdio.h>

/**
 * main - Print 16hexadicimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
char l;
for (b = '1'; b <= '9'; b++)
putchar(b);
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
