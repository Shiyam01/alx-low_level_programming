#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description : the program prints _putchar, followed by a new line
 * return : 0
 */
int main(void)
{
	char word[9] = "_putchar";
		int c;
		for (c = 0; c < 9; c++)	
		putchar(word[c]);
	putchar('\n');
	return (0);
}
