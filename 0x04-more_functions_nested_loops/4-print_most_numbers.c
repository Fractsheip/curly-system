#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - return var one and var two no 2 and 4
* Return:return numbers no 2 and 4
*/

void print_most_numbers(void)
{
int i = 0;

while (i <= 9)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
_putchar('\n');
}
i++;
}
}
