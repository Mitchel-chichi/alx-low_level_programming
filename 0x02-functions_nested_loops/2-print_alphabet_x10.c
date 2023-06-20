#include "main.h"
/*
 * print_alphabet_x10 - print the lowercase alphabets ten times
 * Return: void
*/

void print_alphabet_x10(void)
{
	char n;
	int l;

	l = 0;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (l <= 10)
		{
			continue;
		}
	_putchar(n);
	_putchar('\n');
	}
}

