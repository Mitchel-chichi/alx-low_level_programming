#include "main.h"
#include <stdio.h>

/**
 * main - creates a test for programmers
 * Return: 0 (success)
*/

int main(void)
{
int v;

for (v = 1; v <= 100; v++)
{
if ((v % 3 == 0) && (v % 5 == 0))
{
printf("FizzBuss");
}
else if (v % 5 == 0)
{
printf("Buzz");
}
else if (v % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", v);
}
if (v != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
