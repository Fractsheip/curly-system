#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print the numbers should be 98
* @n: start var
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void print_to_98(int n)
{
int d = n;

while (d < 98)
{
_putchar(d);
_putchar(',');
_putchar(' ');
d++;
}
}
