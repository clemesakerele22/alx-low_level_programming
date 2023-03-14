#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the string str
 * @str: teh str string
 * Return: NULL or the pointer
 */
char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
