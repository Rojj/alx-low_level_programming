#include <stdio.h>

/**
 * main - print the sizes of various types on the computer
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %d 1 byte(s)\n", sizeof(char));
	printf("size of an int: %d 4 byte(s)\n", sizeof(int));
	printf("size of a long int: %d 4 byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d 8 byte(s)\n", sizeof(long long int));
	printf("size of a float: %d 4 byte(s)\n", sizeof(float));
	return	(0);
	}
