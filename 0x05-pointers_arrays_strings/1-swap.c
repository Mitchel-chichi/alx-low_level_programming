#include "main.h"

/**
 * swap_int - it swaps two intergers values
 * @a: - one of the intergers to be swapped
 * @b: - another interger to be swapped
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
