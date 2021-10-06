#include <stdio.h>
#include "main.h"

/**
* print_sign - print + or - or 0 at the var n
* @n: var define number + or - or 0
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int print_sign(int n)
{
int mas = 43;
int menos = 45;

if (n > 0)
{
_putchar(mas);
_putchar(49);
}
else if (n < 0)
{
_putchar(menos);
_putchar(47);
}
else
{
_putchar('0');
_putchar(n);
}
return (0);
}
