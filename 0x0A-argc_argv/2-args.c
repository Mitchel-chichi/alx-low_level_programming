#include <stdio.h>
#include "main.h"

/**
 * main - used for displaying arguments it receives
 * @argc: - the parameter num of arguments
 * @argv: - the parameter arr of arguments
 * Return: must return 0 (Success)
 */
int main(int argc, char *argv[])
{
int m;
for (m = 0; m < argc; m++)
{
printf("%s\n", argv[m]);
}
return (0);
}
