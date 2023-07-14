#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - used for checking for string containing non-digit
 * @s: - the parameter string being evaluated
 * Return: 0 if non-digit, 1 otherwise
*/
int is_digit(char *s)
{
int v = 0;

while (s[v])
{
if (s[v] < '0' || s[v] > '9')
return (0);
v++;
}
return (1);
}
/**
 * _strlen - used for returning string length
 * @s: - the parameter string being evaluated
 * Return: return string length
*/
int _strlen(char *s)
{
int q = 0;

while (s[q] != '\0')
{
q++;
}
return (q);
}
/**
 * errors - used for handling main errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - used for multiplication of two positive intergers
 * @argc: - the parameter num of arg
 * @argv: - the parameter arr of arg
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
char *dgt, *mun;
int pal1, pal2, pal, w, carry, let1, let2, *res, c = 0;

dgt = argv[1], mun = argv[2];
if (argc != 3 || !is_digit(dgt) || !is_digit(mun))
errors();
pal1 = _strlen(dgt);
pal2 = _strlen(mun);
pal = pal1 + pal2 + 1;
res = malloc(sizeof(int) * pal);
if (!res)
return (1);
for (w = 0; w <= pal1 + pal2; w++)
res[w] = 0;
for (pal1 = pal1 - 1; pal1 >= 0; pal1--)
{
let1 = dgt[pal1] - '0';
carry = 0;
for (pal2 = _strlen(mun) - 1; pal2 >= 0; pal2--)
{
let2 = mun[pal2] - '0';
carry += res[pal1 + pal2 + 1] + (let1 *let2);
res[pal1 + pal2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
res[pal1 + pal2 + 1] += carry;
}
for (w = 0; w < pal - 1; w++)
{
if (res[w])
c = 1;
if (c)
_putchar(res[w] + '0');
}
if (!c)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
