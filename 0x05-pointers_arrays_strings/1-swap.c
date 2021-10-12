#include <stdio.h>
#include "main.h"

/**
* swap_int - change the values of *a, *b reverse
* @a: var punter one
* @b: var punter two
* @c: inicial var one
* Return: None
*/

void swap_int(int *a, int *b)
{
	int *c;

	c = (int *a);

	*c = *a;
	*a = *b;
	*b = *c;
}
