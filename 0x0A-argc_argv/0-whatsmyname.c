#include <stdio.h>
#include "main.h"

/**
 * main - used for displaying name of program
 * @argc: - The parameter consist num of arguments
 * @argv: - the parameter consist arr of arguments
 * Return: must return 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
