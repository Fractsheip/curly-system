#include <stdio.h>
#include <main.h>

/**
* main - execute a text when we execute the file
* _putchar - execute the putchar no use putchar
* Return:the function all return 0
*/

int main(void)
{
char c[] = "_putchar";
int i = 0;

while (c[i] != 9)
{
_putchar(c[i++]);
}
_putchar('\n');
}
