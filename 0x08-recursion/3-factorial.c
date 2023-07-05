#include "main.h"

/**
 * factorial - used for returning factorial number
 * @n: - the parameter that is returned from
 * Return: it returns factorial of parameter
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
