#include "main.h"

/**  
 * int _islower(int c): a function that checks for lowercase character
 * c : lowercase character 
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

		return(1) ; 
	}
	return(0) ;
}

