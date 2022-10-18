#include "main.h"
/**
 * _islower - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower e), 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}