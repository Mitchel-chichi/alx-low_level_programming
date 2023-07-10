#include "main.h"
#include <stdlib.h>
/**
 * create_array - used for creating array of chars and initialises
 * @size: - the parameter of size array
 * @c: - the parameter to assign char
 * Return: returns NULL, if size is 0 or pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *mun;
unsigned int w;

mun = malloc(sizeof(char) * size);
if (size == 0 || mun == NULL)
return (NULL);
for (w = 0; w < size; w++)
mun[w] = c;
return (mun);
}
