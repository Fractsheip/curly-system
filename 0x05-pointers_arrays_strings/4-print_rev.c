#include <stdio.h>
#include "main.h"

/**
* print_rev - return reverse characters int
* @s: chararters int
* Return: None
*/

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
