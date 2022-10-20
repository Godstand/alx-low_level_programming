#include "main.h"
/**
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to be treated
 * Return: Number matrix
 */
void print_times_table(int n)
{
int x, y, multi;

if (n >= 0 && n <= 15)
{
for (x = 0; x <= n; x++)
{
_putchar(48);
for (y = 1; y <= n; y++)
{
multi = x * y;
_putchar(44);
_putchar(32);
if (multi <= 9)
{
_putchar(32);
_putchar(32);
_putchar(multi + 48);
}
else if (multi <= 99)
{
_putchar(32);
_putchar((multi / 10) + 48);
_putchar((multi % 10) + 48);
}
else
{
_putchar(((multi / 100) % 10) + 48);
_putchar(((multi / 10) % 10) + 48);
_putchar((multi % 10) + 48);
}
}
_putchar('\n');
}
}
}
