#include "main.h"

/**
 * jack_bauer - it prints jack bauer minutes of the day
 * starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int t, r;

	t = 0;

	while (t < 24)
	{
		r = 0;
		while (r < 60)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar('.');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
			r++;
		}
		t++;
	}
}
