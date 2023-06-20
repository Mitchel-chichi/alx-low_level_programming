#include <unistd.h>
/**
 * _putchar - it writes C to the standard output stream
 * @c: to be printed
 * Return: 1 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
