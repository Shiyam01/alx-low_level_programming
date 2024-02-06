# include "main.h"

/**
 * _isalpha - The function that checks for alphabetic character
 * @c : alphabetic character
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 95 && c <= 122)
	{
		return (1);
	}
	return (0);
}
