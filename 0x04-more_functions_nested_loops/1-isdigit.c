#include "main.h"
/**
 * _isdigit - returns 1 if digit, and 0 otherwise
 *@c: the character to be checked
 *
 * Return: 1 for digit, and 0 otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;

	return (result);
}
