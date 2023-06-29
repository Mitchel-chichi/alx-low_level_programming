#include "main.h"
#include "stdio.h"
/**
 * rot13 - it encodes a string
 * @m: - the parameter to be pointed
 * Return: the pointer m
 */

char *rot13(char *m)
{
int v;
int w;
char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char msg1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (v = 0; m[v] != '\0'; v++)
{
for (w = 0; w < 52; w++)
{
if (m[v] == alp[w])
{
m[v] = msg1[w];
break;
}
}
}
return (m);
}
