#include "main.h"
/**
 * _strlen_recursion - used for returning string length
 * @s: - the parameter to be returned
 * Return: it returns the strings length
 */
int _strlen_recursion(char *s)
{
int mun = 0;

if (*s)
{
mun++;
mun += _strlen_recursion(s + 1);
}
return (mun);
}
