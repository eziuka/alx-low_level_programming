#include "main.h"

/**
 * _isalpha - Check if arg is lowercase
 * @c: int number
 *
 * Return: 1 if alphabetic. 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
