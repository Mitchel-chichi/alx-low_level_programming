#include "main.h"
/**
 * _strcmp - it compares two strings
 * @s1: - the first string to be compared
 * @s2: - second string to be compared
 * Return: the difference of the two strings
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
