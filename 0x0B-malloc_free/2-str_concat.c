#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates the trings s1 & s2
 * @s1: string 1
 * @s2: string 2
 * Return: NULL (Failure) or Pointer address
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0, j = 0, sum;
	char *ptr;

	if (s1 == NULL)
		size1 = 0;
	if (s2 == NULL)
		size2 = 0;
	for (; s1[size1]; size1++)
		;
	for (; s2[size2]; size2++)
		;
	sum = size1 + size2;
	ptr = malloc(sizeof(char) * sum + 1);
	if (ptr == NULL)
		return (NULL);
	for (; i < size1; i++)
		ptr[i] = s1[i];
	for (; j < size2; j++)
		ptr[j + size1] = s2[j];
	ptr[sum] = '\0';
	return (ptr);
}
