#include <stdio.h>

/**
 * main -  program to display bytes size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int a;
long int d;
long long int e;
float f;

printf("Size of a char:%d byte(s)\n", sizeof(c));
printf("Size of an int:%d byte(s)\n", sizeof(a));
printf("Size of a long int:%d byte(s)\n", sizeof(d));
printf("Size of a long long int:%d byte(s)\n", sizeof(e));
printf("Size of a float:%d byte(s)\n", sizeof(f));
return (0);
}
