#include <stdio.h>
#include "main.h"

/**
* print_triangle - print a triange whit size define number of a and b
* @size: define the large and tall
*/

void print_triangle(int size)
{
int a = 1;
int b = 0;

if (size > 0)
{
while (a <= size)
{
b = 0;
while (b < size - a)
{
putchar(' ');
b++;
}
while (b < size)
{
putchar('#');
b++;
}
putchar('\n');
a++;
}
}
else
{
putchar('\n');
}
}
