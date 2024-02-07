#include "main.h"

/**
 * print_sign - a function that prints the sing of a number (other than 0)
 * @n : the number whose sign to be checked
 * Return : returns 1 if n > 0, returns -1 if n < 0, returns 0 if n = 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
