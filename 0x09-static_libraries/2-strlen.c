#include "main.h"
/**
 * _strlen - used for looking the strings length
 * @s: - the parameter string checked
 * Return: must return the length string
 */
int _strlen(char *s)
{
int mun = 0;
while (*s != '\0')
{
mun++;
s++;
}
return (mun);
}
