#include <unistd.h>

/**
 * _putchar - used for writing char to standard output
 * @c: - the parameter to print
 * Return: On success 1, On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
