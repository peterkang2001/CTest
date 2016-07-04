#include <stdio.h>
int main(int argc, char const *argv[])
{
	long sum = 0L;
	int count = 0;

	printf("Enter the number of integers you want to sum:\n");
	scanf("%d", &count);
	for(int i = 1; i <= count; i++)
	{
		sum += i;
	}
	printf("Total of the first %d numbers is %ld\n", count, sum);
	return 0;
}