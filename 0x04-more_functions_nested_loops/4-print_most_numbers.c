#include <stdio.h>
#include "main.h"

/**
* mul - return multiplies var one and var two
* @a: var one
* @b: var two
* return: return the multiplies
*/

void print_most_numbers(void)
{
int i = 0;

while (i <= 9)
{
if (i != 2 && i != 4)
{
_putchar(i);
i++;
}
_putchar('\n');
}
