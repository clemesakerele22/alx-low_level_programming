#include <stdlib.h>
#include <stdio.h>
/**
 * main - the program starts here
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Succes)
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}
	return (0);
}
