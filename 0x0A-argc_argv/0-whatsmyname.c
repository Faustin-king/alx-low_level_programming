#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of arugments
* @argv: An array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("The name of the program\n");

	for (i = 0; i < argc; i++)
	{
		printf("name[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
