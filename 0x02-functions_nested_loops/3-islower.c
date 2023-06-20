#include "main.h"
/**
 * _islower - it checks if the character is lowercase or not
 * @c: - the character to be checked
 * Return: 1 if c is lowercase, otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
