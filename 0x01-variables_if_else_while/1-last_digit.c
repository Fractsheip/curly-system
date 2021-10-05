#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - execute a text when we execute the file
*
* Return:the function all return 0
*/

int main(void)
{
int n, g;
g = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (g > 5)
{
printf("Last digit of %i", n "is %i", g "and is greater than 5\n");
}
else if (g == 0)
{
printf("Last digit of %i", n "is %i", g "and is 0\n");
}
else if (g < 6)
{
printf("Last digit of %i", n "is %i", g "and is less than 6 and not 0\n");
}
return (0);
}
