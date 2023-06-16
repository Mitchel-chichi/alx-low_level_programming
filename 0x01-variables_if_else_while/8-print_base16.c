#include <stdio.h>

/**
 * main - Print the hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
