#include <stdio.h>
#include "main.h"

/**
* _isupper - return if c is upercase or otherwise
* @c: var define to evaluate
* retunr: if are upercase return 1, else is otherwise return 0
*/

int _isupper(int c)
{
int c;

if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
