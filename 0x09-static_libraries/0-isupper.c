#include "main.h"
/**
 * _isupper - used for looking for uppercase letters
 * @c: - The parameter being checked
 * Return: 0 upper or 1, otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
