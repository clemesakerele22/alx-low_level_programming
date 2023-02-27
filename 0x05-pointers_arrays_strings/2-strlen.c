#include "main.h"
#include <string.h>
/**
 * _strlen - gets length
 * @s: the argument
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}
