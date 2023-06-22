#include "main.h"
/**
 * more_numbers - it prints numbers ten times
*/

void more_numbers(void)
{
int r, t;

for (r = 1; r <= 10; r++)
{
for (t = 0; t <= 14; t++)
{
if (t > 9)
{
_putchar((t / 10) + '0');
}
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
