#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - used for displaying multiplication of argv numbers
 * @argc: - the parameter arg count
 * @argv: - the parameter arg vector
 * Return: must return 0 success
*/

int main(int argc, char *argv[])
{
int c = 0, w = 0;
if (argc == 3)
{
c = atoi(argv[1]);
w = atoi(argv[2]);
printf("%d\n", c *w);/* c multiplies with w*/
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
