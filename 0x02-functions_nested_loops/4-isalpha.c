#include "main.h"

/**
 * _isalpha - Checks for characters that are alphabetic
 * @c: - it is the character to be checked
 * Returns: 1 if c is a letter, uppercase or lowercase, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
