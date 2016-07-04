#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Program name: %s\n", argv[0]);
	for(int i = 1; i < argc; i++)
	{
		printf("Argment %d: %s\n", i, argv[i]);
	}
	return 0;
}