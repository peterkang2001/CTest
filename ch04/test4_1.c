#include <stdio.h>
int main(int argc, char const *argv[])
{
	int count = 1;
	for (	; count <= 10; ++count)
	{
		printf("%d\n", count);
	}
	printf("We have finished.\n");
	return 0;
}