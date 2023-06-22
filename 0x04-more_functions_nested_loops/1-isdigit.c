#include "main.h"
/**
 * _isdigit - it checks for numbers from zero to nine
 * @c: - it is the letter to be checked
 * Return: 1 if c is a number, otherwise 0
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
