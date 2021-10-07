#include <stdio.h>
#include "main.h"

/**
* print_number - print the table of 9
* @number1: here var do ten number
* @number2: here var imput the last number
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void print_number(int number1, int number2)
{
int ten = number1 / 10, unit = number1 % 10;

if (ten == 0 && number2 != 0)
_putchar(' ');
else if (ten != 0)
_putchar(ten + 48);
_putchar(unit + 48);
}

/**
* times_table - Print the table of 9
*/

void times_table(void)
{
int row, column, result;

for (row = 0; row < 10; row++)
{
for (column = 0; column < 10; column++)
{
result = row * column;
print_number(result, column);
if (column != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
