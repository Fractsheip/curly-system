#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers from 0 - 9 with putchar
* Return:return the multiplies
*/

void print_numbers(void)
{
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
if (i == 9)
{
_putchar('\n');
}
}
}
