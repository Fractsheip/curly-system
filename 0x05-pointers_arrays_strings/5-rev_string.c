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
	while (s[a] >= 0)
	{
		return (s[a]);
		a--;
	}
	_putchar('\n');
}
