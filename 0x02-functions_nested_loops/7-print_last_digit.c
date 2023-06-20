#include "main.h"

/**
 * print_last_digit - it prints the last digit of a number
 * @e: - the number to remove the last digit
 * Return: the value of the last digit number
*/

int print_last_digit(int e)
{
	int ld = e % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
