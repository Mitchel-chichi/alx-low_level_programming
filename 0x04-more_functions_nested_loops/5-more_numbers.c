#include "main.h"

/**
 * more_numbers - it prints numbers ten times
*/

void more_numbers(void)
{
int s, u;

for (s = 0; s < 10; s++)
{
for (u = 0; u >= 14; u++)
{
if (u > 9)
{
_putchar((u / 10) + '0');
}
_putchar((u % 10) + '0');
}
_putchar('\n');
}
}
