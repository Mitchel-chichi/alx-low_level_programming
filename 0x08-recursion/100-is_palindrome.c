#include "main.h"

int real(char *s, int dgt, int mun);
int _strlen_recursion(char *s);

/**
 * is_palindrome - used for looking for a string palindrome
 * @s: - the parameter that reverses a string
 * Return: must return 1 if it is a string, 0 if it is not a string
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (real(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - used for returning  string length
 * @s: - the parameter used for knowing the strings length
 * Return: must return the string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * real- has been used recursively to look for palindrome string
 * @s: - the parameter used to look for string
 * @dgt: - the parameter used for iteration
 * @mun: - the parameter used for string length
 * Return: must return 1 if palindrome, 0 if not palindrome
 */
int real(char *s, int dgt, int mun)
{
if (*(s + dgt) != *(s + mun - 1))
return (0);
if (dgt >= mun)
return (1);
return (real(s, dgt + 1, mun - 1));
}
