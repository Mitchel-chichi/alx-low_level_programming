#include "main.h"
#include <stdio.h>
int  _sqrt(int n, int i);

/**
 * _sqrt_recursion - used for returning the square root of a number
 * @n: - the parameter for calculating square root
 * Return: used for returning real square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}

/**
 * _sqrt_recursion - it has recursed to find real square root number
 * @n: - the parameter used for calculating square Root.
 * @i: - the parameter used for iteration
 * Return: used for returning the real square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
