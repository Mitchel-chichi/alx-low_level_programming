#include "main.h"

/**
 * more_numbers - print numbers 10 times
 *
*/

void more_numbers(void)
{
int z, h;

for (z = 0; z <= 10; z++)
{
for (h = 0; h <= 14; h++)
{
if (h >= 10)
{
_putchar((h / 10) + '0');
}
_putchar((h % 10) + '0');
}
}
}
