#include <stdio.h>

/**
* main - print the function when you call main
* Return: None
*/

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		while (a % 5 == 0 && a % 3 == 0)
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
			if (a == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
			a++;
		}
		if (a < 100 && a % 3 != 0 && a % 5 != 0)
		{
			printf("%d ", a);
			a++;
		}
	}
	printf("\n");
	return (0);
}
