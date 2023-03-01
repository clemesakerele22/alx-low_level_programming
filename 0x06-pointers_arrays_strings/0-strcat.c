#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @scr: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *scr)
{
int a = -1, -i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = scr[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
