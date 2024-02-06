#include "main.h"

/*
 * print_sign - This function prints : - if n < 0, + if n > 0 and 0 if n = 0
 * @n : The number
 * Return : 1 if n is +, -1 if n is &-, 0 otherwhise
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
