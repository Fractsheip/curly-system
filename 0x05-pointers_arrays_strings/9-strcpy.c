#include <stdio.h>
#include "main.h"

/**
* _strcpy - print the *src in *dest
* @src: here are the scrpt
* @dest: destine of the src script
* Return: None
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
