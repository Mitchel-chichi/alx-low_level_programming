#include "main.h"
#include <stdio.h>
/**
 * _strchr - it locates a string in the character
 * @c: - the character to be located
 * @s: - the string to be returned
 * Return: 0 (success)
*/

char *_strchr(char *s, char c)
{
int m;
for (m = 0; s[m] >= '\0'; m++)
{
if (s[m] == c)
return (s + m);
}
return (NULL);
}
