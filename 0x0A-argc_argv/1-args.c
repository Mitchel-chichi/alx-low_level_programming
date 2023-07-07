#include <stdio.h>
#include "main.h"

/**
 * main - used for displaying num of arg passed to prog
 * @argc: - the parameter num of arguments
 * @argv: - the parameter arr of arguments
 * Return: must return 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
