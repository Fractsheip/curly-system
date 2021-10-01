#include <stdio.h>

/**
 * main - execute a text when we execute the file
 * char:bytes in char
 * int:bytes in int
 * long int:bytes in long int
 * long long int:bytes in long long int
 * printf:with this can you see in the console the answer
 * Return:the function all return 0
 */

int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of a int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
