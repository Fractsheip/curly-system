#include <stdio.h>
#include "main.h"

/**
* more_numbers - return multiplies var one and var two
* return: 0
*/

void more_numbers(void)
{
int s = 0;

while (s < 10)
{
int large = 0;

while (large <= 14)
{
_putchar(large + '0');
large++;
}
_putchar('\n');
s++;
}
}
