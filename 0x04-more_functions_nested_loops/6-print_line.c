#include <stdio.h>
#include "main.h"

/**
* print_line - return multiplies var one and var two
* @n: var define the large of the line
* return: 0
*/

void print_line(int n)
{
int underscore = 95;

while (n > 0)
{
_putchar(underscore);
n--;
}
_putchar('\n');
}
