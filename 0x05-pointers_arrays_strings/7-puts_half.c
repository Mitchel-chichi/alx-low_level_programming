#include "main.h"
/**
 * puts_half - it prints a string in half
 * @str: - the string to be printed
*/

void puts_half(char *str)
{
int e = 0;
int z;

while (str[e] != '\0')
{
e++;
}
if (e % 2 == 1)
{
z = (e - 1) / 2;
z += 1;
}
else
{
z = e / 2;
}
for (; e < z; z++)
{
_putchar(str[z]);
}
_putchar('\n');
}
