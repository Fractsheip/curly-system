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
if (alphabet != 101 && alphabet != 113)
{
putchar(alphabet);
alphabet++;
}
else
{
alphabet++;
}
}
putchar('\n');
return (0);
}
