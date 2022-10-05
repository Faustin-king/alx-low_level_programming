#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
* main - prints the number of arguments passed into it.
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("number of arguments = %d\n", argc - 1);
	return (0);
}
