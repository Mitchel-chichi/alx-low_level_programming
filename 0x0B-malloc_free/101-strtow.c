#include <stdlib.h>
#include "main.h"

/**
 * count_word -  used for counting the numbers in a string
 * @rng: - the parameter string for evaluation
 * Return: total num of words
 */
int count_word(char *rng)
{
int mun, d, v;

mun = 0;
v = 0;

for (rng = 0; rng[d] != '\0'; d++)
{
if (rng[d] == ' ')
mun = 0;
else if (mun == 0)
{
mun = 1;
v++;
}
}
return (v);
}
/**
 * **strtow - used for splitting strings into words
 * @str: -the parameter string being splitted
 * Return: NULL if str is equal to NUll
 */
char **strtow(char *str)
{
char **dgt, *temp;
int e, r = 0, pal = 0,  m = 0, words, first, last;

while (*(str + pal))
pal++;
words = count_word(str);
if (words == 0)
return (NULL);
dgt = (char **) malloc(sizeof(char *) * (words + 1));
if (dgt == NULL)
return (NULL);
for (e = 0; e <= pal; e++)
{
if (str[e] == ' ' || str[e] == '\0')
{
if (m)
{
last = e;
temp = (char *) malloc(sizeof(char) * (m + 1));
if (temp == NULL)
return (NULL);
while (first < last)
*temp++ = str[first++];
*temp = '\0';
dgt[r] = temp - m;
r++;
m = 0;
}
}
else if (m++ == 0)
first = e;
}
dgt[r] = NULL;
return (dgt);
}
