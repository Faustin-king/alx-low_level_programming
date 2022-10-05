#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("The name of the program\n");

	for (i = 0; i < argc; i++)
	{
		printf("name[%d] = %s\n", i, argv[i]);
	}
	return 0;
}
