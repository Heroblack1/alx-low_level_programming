#include "main.h"

/**
 * swap_int - a function that swaps the values of two integer
 *  @a: input 1
 *  @b: input 2
 *  Return: integers
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	swap_int(&a, &b);
	return (0);
}
