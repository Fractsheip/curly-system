#include <stdio.h>
#include "main.h"

/**
* print_alphabet - print the alphabet
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
