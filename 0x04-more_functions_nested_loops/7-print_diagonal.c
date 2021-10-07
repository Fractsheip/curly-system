#include <stdio.h>
#include "main.h"

/**
* print_line - return multiplies var one and var two
* @n: var define the large of the line
* return: 0
*/

void print_diagonal(int n)
{
int i = 0, j = 0;
int space = 32;
int backslash = 92;

if (n > 0)
{
while (n > 0)
{
i = j;
while (i > 0)
{
_putchar(space);
i--;
}
_putchar(backslash);
_putchar('\n');
n--;
j++;
}
}
else
{
_putchar('\n');
}
}
