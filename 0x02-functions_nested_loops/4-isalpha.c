#include <stdio.h>
#include "main.h"

/**
* _isalpha - print 1 if c is lowercase
* @c: var define lowercase or otherwise
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
