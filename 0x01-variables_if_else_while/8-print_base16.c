#include <stdio.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int alphabeta = 48;
int alphabetb = 97;

while (alphabeta < 58)
{
putchar(alphabeta);
alphabeta++;
}
while (alphabetb < 103)
{
putchar(alphabetb);
alphabetb++;
}
putchar('\n');
return (0);
}
