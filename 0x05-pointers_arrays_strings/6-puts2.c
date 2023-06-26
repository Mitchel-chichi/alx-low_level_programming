#include "main.h"
/**
 * puts2 - it prints every character of a string starting
 * @str: - the character to be printed
*/

void puts2(char *str)
{
int g = 0;
int m = 0;

while (str[m] != '\0')
{
m++;
}
for (g = 0; g < m; g += 2)
{
_putchar(str[g]);
}
_putchar('\n');
}
