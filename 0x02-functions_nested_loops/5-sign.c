#include "main.h"

/**
 * print_sign -  a function that prints the sign of a number
 * @n: the number whose sign to be checked
 * Return: 1 if the sign is +, 0 if there is no sign, -1 if the sign is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
