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
	while (s[a] == '\0')
	{
		while (a <= 0)
		{
			_putchar(s[a]);
			a--;
		}
		putchar ('\n');
	}
}
