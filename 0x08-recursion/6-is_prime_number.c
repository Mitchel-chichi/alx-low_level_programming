#include "main.h"
#include <stdio.h>

int real_prime(int n, int i);

/**
 * is_prime_number - used for looking at an int if its prime Number
 * @n: - the parameter to be looked at
 * Return: must return 1 if parameter is prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (real_prime(n, n - 1));
}

/**
 * real_prime - used recursively to look if number is prime
 * @n: - the parameter to be looked
 * @i: - the parameter used for iteration
 * Return: must return 1 if parameter is prime number, 0 if not
 */
int real_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (real_prime(n, i - 1));
}
