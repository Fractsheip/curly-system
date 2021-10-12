#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: var to length
* Return: None
*/

int _strlen(char *s)
{
	int a = 0;
	int cont = 0;

	while(*(s + 1) != '\0')
	{
		cont = cont + 1;
		a++;
	}
	return(cont);
}
