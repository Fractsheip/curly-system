#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: var to length
* Return: None
*/

int _strlen(char *s)
{
	while((*s + 1) != '\0')
	{
		*s++;
	}
}
