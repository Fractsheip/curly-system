#include <stdio.h>
#include "main.h"

/**
* print_square - retun a rectangle whit equal size and large
* @size: tell the size and large
* return: the result
*/

void print_square(int size)
{
int fijo = size;
int large;

if (size > 0)
{
while (size > 0)
{
large = fijo;

while (large > 0)
{
_putchar('#');
large--;
}
_putchar('\n');
size--;
}
}
else
{
_putchar('\n');
}
}
