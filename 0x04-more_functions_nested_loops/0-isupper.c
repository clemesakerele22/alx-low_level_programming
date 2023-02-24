#include "main.h"
/**
 * _isupper - returns 1 if uppercase, and 0 otherwise
 *@c: the character to be checked
 *
 * Return: 1 for uppercase, adn 0 otherwise
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;

	return (result);
}
