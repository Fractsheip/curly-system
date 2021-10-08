#include <stdio.h>
#include "main.h"

/**
* more_numbers - return multiplies var one and var two
* return: 0
*/

void more_numbers(void)
{
int s = 0;
int i;

while (s < 10)
{
int i = 0;

while (i <= 14)
{
_putchar(i + '0');
i++;
}
_putchar("\n");
s++;
}
}
