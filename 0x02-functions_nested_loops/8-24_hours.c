#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
    int minutes, hours;
    {
        for (hours = 0; hours < 24; hours++)
        {
            for (minutes = 0; minutes < 60; minutes++)
            {
                _putchar((hours / 10) + '0');
                _putchar((hours % 10) + '0');
                _putchar(':');
                _putchar((minutes / 10) + '0');
                _putchar((minutes % 10) + '0');
                _putchar('\n');
                    
            }
        }
    }
}