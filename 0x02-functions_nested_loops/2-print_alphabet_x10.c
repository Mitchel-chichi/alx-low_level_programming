#include "main.h"
/**
 * print_alphabet_x10 - it prins lowercase alphabets ten times
 * Return: void
*/

void print_alphabet_x10(void)
{
	char n;
	int l;

	l = 0;

	while (l <= 9)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	l++;
	}
}

