#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print the numbers should be 98
* @n: start var
* main.h - _putchar execute the putchar no use putchar
* Return: give the result
*/

void print_to_98(int n)
{
int d = n;

while (d < 98)
{
printf("%d, ", d);
d++;
}
while ( d > 98)
{
printf("%d, ", d);
d--;
}
if (d == 98)
{
printf("%d\n", d);
}
}
