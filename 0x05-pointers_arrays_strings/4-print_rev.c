#include <stdio.h>
#include "main.h"

/**
*
*
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
	}
	_putchar('\n');
}
