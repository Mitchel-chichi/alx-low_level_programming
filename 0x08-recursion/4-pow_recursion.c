#include "main.h"

/**
 * _pow_recursion - used for returning integer x to power of int y
 * @x: - the parameter to be returned
 * @y: - the parameter power being raised from
 * Return: it returns the power y being raised from x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
