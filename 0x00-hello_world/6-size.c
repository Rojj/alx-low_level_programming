#include <stdio.h>

/**
 * main - print the sizes of various types on the computer
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %ld 1byte(s)\n", sizeof(long unsigned int));
	printf("size of an int: %ld 4byte(s)\n", sizeof(long unsigned int));
	printf("size of a long int: %ld 8byte(s)\n", sizeof(long unsigned int));
	printf("size of a long long int: %ld 8byte(s)\n", sizeof(long unsigned int));
	printf("size of a float: %ld 4byte(s)\n", sizeof(long unsigned int));
	return	(0);
	}
