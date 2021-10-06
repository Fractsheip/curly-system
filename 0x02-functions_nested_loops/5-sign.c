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
int one = 49;
int zone = 47;
int zero = 48;

if (n > 0)
{
_putchar(mas);
_putchar(one);
}
else if (n < 0)
{
_putchar(menos);
_putchar(zone);
}
else
{
_putchar('0');
_putchar(zero);
}
return ;
}
