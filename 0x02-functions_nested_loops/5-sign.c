#include "main.h"

/*
 * print_sign description - a function that prints the sign of numbers  
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
