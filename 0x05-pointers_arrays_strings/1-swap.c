#include <stdio.h>
#include "main.h"

/**
* swap_int - change the values of *a, *b reverse
* @a: var punter one
* @b: var punter two
* Return: None
*/

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
