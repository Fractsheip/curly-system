#include <stdio.h>
#include "main.h"

/**
* main - execute a text when we execute the file
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int main(void)
{
char c[8] = "_putchar";
int i = 0;

while (c[i] != '\0')
{
_putchar(c[i++]);
}
_putchar('\n');
return (0);
}
