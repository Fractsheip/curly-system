#include <stdio.h>
#include "main.h"

/**
*
*
*
*/

void rev_string(char *s)
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
