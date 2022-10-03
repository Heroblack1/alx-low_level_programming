#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %1d byte(s)\n", sizeof(char));
	printf("size of an int: %1d byte(s)\n", sizeof(int));
	printf("size of a long int: %1d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %1d byte(S)\n", sizeof(long long int));
	printf("size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
}
