#include <stdio.h>
#include <stdlib.h>

/**
* main - execute a text when we execute the file
* if: print condition if 0 are > at variable n
* else if: print condition 1 is fail and 0 are < at variable n
* else: if none condition is done, is because variable n is 0
* Return:the function all return 0
*/

int main(void)
{
int n;

if (n > 0)
{
printf(n, "is positive");
}
else if (n < 0)
{
printf(n, "is negative");
}
else
{
printf(n, "is zero");
}
}
