#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int row, column, d;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			d = (row * column);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
