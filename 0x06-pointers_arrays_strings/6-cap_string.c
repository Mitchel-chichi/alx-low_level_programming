#include "main.h"
/**
 * cap_string - it capitalises all strings words
 * @f: - the string to be capitalised
 * Return: it returns the changed string
*/

char *cap_string(char *f)
{
int h = 0;
while (f[h])
{
while (!(f[h] >= 'a' && f[h] <= 'z'))
h++;
if (f[h - 1] == ' ' ||
f[h - 1] == '\t' ||
f[h - 1] == '\n' ||
f[h - 1] == ',' ||
f[h - 1] == ';' ||
f[h - 1] == '.' ||
f[h - 1] == '!' ||
f[h - 1] == '?' ||
f[h - 1] == '"' ||
f[h - 1] == '(' ||
f[h - 1] == ')' ||
f[h - 1] == '{' ||
f[h - 1] == '}' ||
h == 0)
f[h] -= 32;
h++;
}
return (f);
}
