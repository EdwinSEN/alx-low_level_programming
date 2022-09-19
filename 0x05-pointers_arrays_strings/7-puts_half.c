#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string in reverse
 */
void puts_half(char *str)

{
        int len = 0;

        while (*str != '\0')
	{	
                len++;
		str++;
	}

        str -= (len / 2);	
        while  (*str != '\0')
        {
             
              _putchar(*str);
              str++; 
         }

	_putchar('\n');

}
