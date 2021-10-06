#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print the last digit
* @l: var define last digit
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int print_last_digit(int r)
{
_putchar(_abs(r % 10) + '0');
return (_abs(r % 10));
}

/**
* _abs - print
* @r: var define number + or - or 0
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int _abs(int n)
{
return ((n < 0) ? -n : n);
}