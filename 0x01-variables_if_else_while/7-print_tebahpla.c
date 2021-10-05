#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int alphabet = 122;

while (alphabet > 96)
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
