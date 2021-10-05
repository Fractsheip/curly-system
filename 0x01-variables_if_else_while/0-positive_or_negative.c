#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
