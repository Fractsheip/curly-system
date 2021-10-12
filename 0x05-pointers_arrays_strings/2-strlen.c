#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: var to length
* Return: None
*/

int _strlen(char *s)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while(*(s + 1) != '\0')
	{
		b = b + 1;
		a++;
	}
	return(b);
}
