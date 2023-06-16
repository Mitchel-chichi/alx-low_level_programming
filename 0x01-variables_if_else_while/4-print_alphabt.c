#include <stdio.h>
#include <stdlib.h>
/**
 * main - use putchar to print lowercase letters without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char m, x, y;
x = 'q';
y = 'e';
for (m = 'a'; m <= 'z'; m++)
{
if (m != x && m != y)
putchar(m);
}
putchar('\n');
return (0);
}
