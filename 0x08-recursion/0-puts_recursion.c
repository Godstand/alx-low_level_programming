#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 * @s: string.
 */
void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
