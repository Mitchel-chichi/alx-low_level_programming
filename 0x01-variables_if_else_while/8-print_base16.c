#include <stdio.h>

/**
 * main - Print the hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char z;
for (x = '1'; x <= '9'; x++)
putchar(x);
for (z = 'a'; z <= 'f'; z++)
putchar(z);
putchar('\n');
return (0);
}
