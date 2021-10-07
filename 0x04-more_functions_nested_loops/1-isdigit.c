#include <stdio.h>
#include "main.h"

/**
* _isdigit - return if c is upercase or otherwise
* @c: var define to evaluate
* return: if are number return 1, else is otherwise return 0
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
