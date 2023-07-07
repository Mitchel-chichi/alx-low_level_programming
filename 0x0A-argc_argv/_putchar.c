#include <stdio.h>
#include "main.h"

/**
 * _putchar - used to write character to standard output
 * @c: - The parameter being displayed
 * Return:success 1, On error, -1 should return
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
