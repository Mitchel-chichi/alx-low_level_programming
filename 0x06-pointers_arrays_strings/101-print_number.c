#include "main.h"
/**
 * print_number - it prints an intereger
 * @n: - the interger to be printed
*/

void print_number(int n)
{
unsigned int dgt = n;
if (n < 0)
{
_putchar('-');
dgt = -dgt;
}
if ((dgt / 10) > 0)
print_number(dgt / 10);
_putchar((dgt % 10) + '0');
}
