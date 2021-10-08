#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - return multiplies var one and var two no 2 and 4
* Return:return the multiplies
*/

void print_most_numbers(void)
{
int i = 0;

while (i <= 9)
{
if (i != 2 && i != 4)
{
_putchar(i);
}
i++;
_putchar('\n');
}
}
