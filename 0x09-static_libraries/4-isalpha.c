#include "main.h"
		
/**
 * _isalpha - used for checking  alphabetical letters
 * @c: -  the parameter being checked
 * Return: 1 if c a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
