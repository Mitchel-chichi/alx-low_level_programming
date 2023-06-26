#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes c to standard output
 * @c: - it is the character to be checked
 * Return: 1 (success)
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
