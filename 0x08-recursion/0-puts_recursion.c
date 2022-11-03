#include "main.h"

/**
 * _puts - Prints a string.
 * @str: string.
 */
void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
