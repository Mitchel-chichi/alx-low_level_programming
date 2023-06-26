#include "main.h"
/**
 * _strlen - it returns the length of the string
 * @s: - the parameter to be returned
 * Return: length
*/

int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);
}
