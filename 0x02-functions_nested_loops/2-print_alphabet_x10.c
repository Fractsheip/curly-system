#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - print the alphabet 10 times
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
i++;
}
}
