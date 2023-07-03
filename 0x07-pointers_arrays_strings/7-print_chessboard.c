#include "main.h"
/**
 * print_chessboard - used for displaying a chess board
 * @a: - the parameter to be pointed
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int dgt;
int mun;

for (dgt = 0; dgt < 8; dgt++)
{
for (mun = 0; mun < 8; mun++)
_putchar(a[dgt][mun]);
_putchar('\n');
}
}
