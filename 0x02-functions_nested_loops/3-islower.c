#include <stdio.h>
#include "main.h"

/**
* _islower - print 1 if c is lowercase
* main.h - _putchar execute the putchar no use putchar
* Return:the function all return 0
*/

int _islower(int c)
{
if (c <= 97 && c >= 122)
{
return (1);
}
else
{
return (0);
}
}
