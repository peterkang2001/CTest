#include <stdio.h>
int main(int argc, char const *argv[])
{
	long sum = 0L;
	int count = 0;
	printf("Enter the number of integers you want to sum:\n");
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		sum = 0L;
		for(int j = 1; j <= i; j++)
		{
			sum += j;
		}
		printf("%d\t%ld\n", i, sum);
	}
	return 0;
}