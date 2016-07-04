#include <stdio.h>
int main(int argc, char const *argv[])
{
	int count = 0;
	do
	{
		int count = 0;
		++count;
		printf("count = %d\n", count);
	}while(++count <= 8);

	printf("count = %d\n", count);
	return 0;
}