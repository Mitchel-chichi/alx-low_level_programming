#include "main.h"
/**
 * reverse_array - it reverse the content of an array of interegers
 * @n: - the number of elements of the array
 * @a: - array intergers that need reversal
*/

void reverse_array(int *a, int n)
{
int v, w;
for (w = n - 1; w >= n / 2; w--)
{
v = a[n - 1 - w];
a[n - 1 - w] = a[w];
a[w] = v;
}
}
