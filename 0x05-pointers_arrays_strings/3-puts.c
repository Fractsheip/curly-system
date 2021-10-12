#include <stdio.h>
#include "main.h"

/**
* _puts - run for the string and print the values
* @str: its the value int
* Return: None
*/

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
