#include "main.h"

/**
 * _puts - it prints a string to the standard output
 * @str: - the parameter to be printed
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
