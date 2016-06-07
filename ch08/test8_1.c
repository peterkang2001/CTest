#include <stdio.h>
int main(int argc, char const *argv[])
{
	int count1 = 1;
	do
	{
		int count2 = 0;
		++count2;
		printf("count1 = %d count2 = %d\n", count1, count2);
	}while(++count1 <= 8);

	printf("count1 = %d\n", count1);
	return 0;
}