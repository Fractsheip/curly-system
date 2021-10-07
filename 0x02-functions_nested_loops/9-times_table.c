#include <stdio.h>
#include "main.h"

/**
* times_table - print the table of 9
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void times_table(void)
{
int a = 0;
int b;
int espacio = 32;
int coma = 44;

while(a <= 9)
{
int b = 0;
while(b <= 9)
{
int result = a * b;
_putchar(result);
_putchar(espacio);
_putchar(coma);
b++;
}
_putchar('\n');
a++;
}
}
