#include "main.h"
/**
 * string_toupper - it changes lowercase letters to uppercase letters
 * @m: -string changed from lowercase to uppercase
 * Return: it returns the changed string
*/

char *string_toupper(char *m)
{
int x = 0;
while (m[x])
{
if (m[x] >= 'a' && m[x] <= 'z')
m[x] -= 32;
x++;
}
return (m);
}
