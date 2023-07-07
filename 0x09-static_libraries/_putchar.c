#include <unistd.h>

/**
 * _putchar - used in writing char to standard output
 * @c:- The parameter to be displayed
 * Return: On success 1, on error, -1 returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
