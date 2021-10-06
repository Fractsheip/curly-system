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
return (2);
}
else if (n < 0)
{
_putchar(menos);
return (9);
}
else
{
_putchar('0');
return (8);
}
}
