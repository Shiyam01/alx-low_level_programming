#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: print the alphabet, in lowercase, followed by a new line
 * Return : nothing
 */

int main (void)
{
        char c;
        for (c = 'a' ; c <= 'z'; c++)
        {
                putchar(c);
        }
        putchar('\n');

}
