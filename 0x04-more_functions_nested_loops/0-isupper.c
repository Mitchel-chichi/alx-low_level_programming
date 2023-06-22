#include "main.h"

/**
 * _isupper - it checks for uppercase letters
 * @c: - it is the letter to be checked
 * Return: 1 if c is uppercase,otherwise 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
