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

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
