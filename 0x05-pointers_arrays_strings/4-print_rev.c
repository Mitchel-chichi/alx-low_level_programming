#include "main.h"

/**
 * print_rev - it prints a string in reverse order
 * @s: - the character to be printed in reverse order
 * Return: 0
*/

void print_rev(char *s)
{
int r = 0;

while (s[r] != '\0')
{
r++;
}
for (r -= 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
