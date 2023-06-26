#include "main.h"

/**
 * rev_string - it reverses a string 
 * @s: - the parameter to be reversed
*/

void rev_string(char *s)
{
int u = 0, v = 0;
char temp;

while (s[v++])
{
u++;
}
for (v = u -1; v >= u / 2; u--)
temp = s[v];
s[v] = s[u - v - 1];
s[u - v - 1] = temp;
}
