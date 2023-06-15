#include <stdio.h>

/**
 * main - Print the size of data types
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

printf("Size of a char:%d bytes\n",sizeof(c));
printf("Size of an int:%d bytes\n",sizeof(a));
printf("Size of a long int:%d bytes\n",sizeof(d));
printf("Size of long long int:%d bytes\n",sizeof(e));
printf("Size of float:%d bytes\n",sizeof(f));
return (0);
}
