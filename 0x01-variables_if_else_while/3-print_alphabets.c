#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int alphabeta = 97;
int alphabetb = 65;

while (alphabeta < 123)
{
putchar(alphabeta);
alphabeta++;
}
while (alphabetb < 91)
{
putchar(alphabetb);
alphabetb++;
}
putchar('\n');
return (0);
}
