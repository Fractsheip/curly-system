#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int alphabet = 97;

while (alphabet < 123)
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
