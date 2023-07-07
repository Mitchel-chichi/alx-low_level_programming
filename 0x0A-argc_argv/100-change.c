#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - used for displaying min amt of coins
 * @argc: - the parameter num of arguments
 * @argv: - the parameter arr of arguments
 * Return: must return 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int dgt, r, fin;
int coin[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
dgt = atoi(argv[1]);
fin = 0;
if (dgt < 0)
{
printf("0\n");
return (0);
}
for (r = 0; r < 5 && dgt >= 0; r++)
{
while (dgt >= coin[r])
{
fin++;
dgt -= coin[r];
}
}
printf("%d\n", fin);
return (0);
}
