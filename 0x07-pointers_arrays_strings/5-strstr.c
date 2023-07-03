#include "main.h"
/**
 * _strstr - used for string location
 * @haystack: - the parameter to be searched from
 * @needle: - the parameter being searched
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *let = haystack;
char *dgt = needle;

while (*let == *dgt && *dgt != '\0')
{
let++;
dgt++;
}
if (*dgt == '\0')
return (haystack);
}
return (0);
}
