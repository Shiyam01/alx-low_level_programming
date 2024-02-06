#include "main.h"

/*
 * print_sign - The function that prints the sign of a number
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
