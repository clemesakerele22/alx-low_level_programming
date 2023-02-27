#include "main.h"
/**
 * swap_int - swaps the values
 * @a: the first argument
 * @b: the second argument
 * * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
