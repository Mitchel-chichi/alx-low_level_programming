#include "main.h"
/**
 * leet - it encodes a string
 * @s: - value
 * Return: the value of n
*/

char *leet(char *s)
{
int q, l;
char h[] = "aAeEoOtTIL";
char w[] = "4433007711";

for (q = 0; s[q] != '\0'; q++)
{
for (l = 0; l < 10; l++)
{
if (s[q] == h[l])
{
s[q] = w[l];
}
}
}
return (s);
}
