#include "stdio.h"
#include "main.h"

/**
 * main - print the name of the program.
 * @argc : an integer variable that represents the number of
 * command line arguments passed to the program when it is executed
 * @argv: an array of strings (character pointers) that
 * holds the command line arguments passed to the program.
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Program name: %s\n", *argv);
	return (0);
}
