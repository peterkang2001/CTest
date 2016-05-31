#include <stdio.h>
int main(int argc, char const *argv[])
{
	long sum = 1L;
	int j = 1;
	int count = 0;

	printf("Enter the number of integers you want to sum:");
	scanf("%d", &count);

	for(int i = 1; i <= count; i++)
	{
		sum = 1L;
		j = 1;
		printf("\n1");
		while(j < i)
		{
			sum += ++j;
			printf("+%d", j);
		}
		printf(" = %ld\n", sum);
	}
	return 0;
}