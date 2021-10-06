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
int coma = 44;
int espacio = 32;
int mas = 43;
int menos = 45;

if (n > 0)
{
_putchar(mas, coma, espacio, n);
return (1);
}
else if (n < 0)
{
_putchar(menos, coma, espacio, n);
return (-1);
}
else
{
_putchar(n, coma, espacio, n)
return (0);
}
}
