#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - used for multiplication of two argv numbers
 * @argc: - the parameter arg count
 * @argv: - the parameter arg vector
 * Return: must return 0 success
 */
int main(int argc, char *argv[])
{
int dgt = 0, mun = 0;
if (argc == 3)
{
dgt = atoi(argv[1]);
mun = atoi(argv[2]);
printf("%d\n", dgt * mun);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
