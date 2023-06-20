#include "math.h"

/**
 * _abs - it computes the absolute value of an integer
 * @s: - it is the intergral value that is to be computed
 * Return: absolute value of the number
*/

int _abs(int s)
{
	if (s >= 0)
	{
		return (s);
	}
	return (-s);
}
