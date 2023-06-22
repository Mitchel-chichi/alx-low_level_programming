#include "main.h"

/**
 * more_numbers - print numbers 10 times
 *
*/

void more_numbers(void)
{
int z, h;

for (z = 0; z < 9; z++)
{
for (h = 0; h <= 14; h++)
{
if (h > 9)
{
_putchar((h / 10) + '0');
}
_putchar((h % 10) + '0');
}
}
}
