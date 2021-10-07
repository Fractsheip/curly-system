#include <stdio.h>
#include "main.h"

/**
* times_table - print the table of 9
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void times_table(void)
{
int dup1 = 0;
int dup2 = 0;
int espacio = 32;
int coma = 44;

while(a <= 9)
{
while(b <= 9)
{
int result = dup1 * dup2;
_putchar(result);
_putchar(espacio);
_putchar(coma);
b++;
}
_putchar('\n');
a++;
}
}
