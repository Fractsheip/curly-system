#include <stdio.h>

/**
* main - print the function when you call main
* Retun: None
*/

int main()
{
int a = 1;

while (a <= 100)
{
while (a % 10 == 0)
{
printf("FizzBuzz ");
a++;
}
while (a % 3 == 0)
{
printf("Fizz ");
a++;
}
while (a % 5 == 0)
{
printf("Buzz ");
a++;
}
if (a < 100)
{
printf("%d ", a);
a++;   
}
}
printf("\n");
return (0);
}
