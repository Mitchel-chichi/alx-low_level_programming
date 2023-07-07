#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - used for displaying positive num
 * @argc: - the parameter arg count
 * @argv: - the parameter arg vector
 * Return: must return 0 success
*/

int main(int argc, char *argv[])
{
int g;
unsigned int h, sum = 0;
char *m;
if (argc > 1)
{
for (g = 0; g < argc; g++)
{
m = argv[g];
for (h = 0; h < strlen(m); h++)
{
if (m[h] < 48 || m[h] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(m);
m++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
