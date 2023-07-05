#include <unistd.h>

/**
 * _putchar - used for writing character to standard output
 * @c: - the parameter printed to output
 *
 * Return: success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
