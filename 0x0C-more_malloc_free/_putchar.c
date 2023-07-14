#include <unistd.h>

/**
 * _putchar - it writes the char to stdandard output
 * @c: - the parameter to print
 * Return: On success 1, On error, -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
