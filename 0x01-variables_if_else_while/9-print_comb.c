#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int a = 48;
int coma = 44;
int space = 32;

while (a < 58)
{
putchar(a);

if (a < 57)
{
putchar(coma);
putchar(space);
a++;
}
else
{
a++;
}
}
putchar('\n');
return (0);
}
