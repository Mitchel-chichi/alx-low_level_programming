#include "main.h"
/**
 * jack_bauer - prints his every minutes of the day
 * Return: ...
*/

void jack_bauer(void)
{
	int q;
	int w;
	int x;
	int y;

	for (q = 0; q <= 2; q++)
	{
	for (w = 0; w <= 9; w++)
	{
	if ((q <= 1 && w <= 9) || (q <= 2 && w <= 3))
	{
	for (x = 0; x <= 5; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	_putchar(q + '0');
	_putchar(w + '0');
	_putchar(58);
	_putchar(x + '0');
	_putchar(y + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
