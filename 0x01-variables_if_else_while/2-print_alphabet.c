#include <stdio.h>

/**
 * main -Print alphabet lowercase lettwers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
