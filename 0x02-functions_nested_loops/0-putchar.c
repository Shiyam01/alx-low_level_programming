#include <stdio.h>
#include "main.h"
/**
 * main - check desc 
 * 
 * desc : the program prints _putchar, followed by a new line
 * rtn : 0
 */
int main(void)
{
        char word[10] = "_puchtar";
        int c;
        
        for (c = 0; c < 8; c++) 
                 putchar(word[c]);

        return (0);
}
