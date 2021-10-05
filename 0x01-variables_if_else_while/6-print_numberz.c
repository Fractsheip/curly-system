#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
char numbers[] = "0123456789";
int a = 0;

while (a < 10)
{
putchar(numbers[a]);
a++;
}
putchar('\n');
return (0);
}
