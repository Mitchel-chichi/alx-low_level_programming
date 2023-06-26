#include "main.h"
/**
 * _atoi - it converts a string to an interger
 * @s: - the number to be converted
 * Return: int
*/

int _atoi(char *s)
{
int m = 0;
unsigned int r = 0;
int w = 1;
int v = 0;

while (s[m])
{
if (s[m] == 45)
{
w *= -1;
}
while (s[m] >= 48 && s[m] <= 57)
{
v = 1;
r = (r * 10) + (s[m] - '0');
m++;
}
if (v == 1)
{
break;
}
m++;
}
r *= w;
return (r);
}
