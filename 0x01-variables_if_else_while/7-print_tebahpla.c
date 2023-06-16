#include <stdio.h>

/**
 * main - prints alphabets in lowercase reversed order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char m;
for (m = 'z'; m >= 'a'; m--)
putchar(m);
putchar('\n');
return (0);
}
