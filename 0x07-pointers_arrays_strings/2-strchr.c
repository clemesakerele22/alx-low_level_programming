#include "main.h"
/**
 * *_strchr - the description
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: if c is found - a pointer to first occurrence
 * if c is not found, NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c
			return (s + index);
	}
	return ('\0');
}
