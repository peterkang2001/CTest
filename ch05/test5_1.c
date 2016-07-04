#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number = 0;
	int count = 10;
	long sum = 0L;
	float average = 0.0f;

	for(int i = 0; i < count; i++)
	{
		printf("Enter grade:\n");
		scanf("%d", &number);
		sum += number;
	}
	average = (float)sum / count;
	printf("Average of the ten numbers entered is: %f\n", average);

	return 0;
}