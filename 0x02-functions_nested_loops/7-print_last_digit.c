#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print the last digit
* @l: var define last digit
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int print_last_digit(int l)
{
int l = l % 10;

_putchar(l);
return(0);
}
