#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number
 * Return : lastDigit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n
	else 
		lastDigit = n % 10
	_putchar(lastDigit + '0');
	return (lastDigit);
}
