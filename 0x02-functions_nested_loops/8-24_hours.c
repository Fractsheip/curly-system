#include <stdio.h>
#include "main.h"

/**
* jack_bauer - print the last digit
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void jack_bauer(void)
{
int h = 0, m;

while (h < 24)
{
m = 0;
while (m < 60)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
m++;
}
h++;
}
}
