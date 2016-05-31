#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numbers[10];
	int count = 10;
	long sum = 0L;
	float average = 0.0f;

	printf("Enter the 10 numbers:\n");
	for(int i = 0; i < count; i++)
	{
		printf("%2d>",  i+1);
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	average = (float)sum / count;
	for(int i = 0; i < count; i++)
	{
		printf("Grade Numbers %d was %d\n", i+1, numbers[i]);
	}
	printf("Average of the ten numbers entered is:%f\n", average);
	return 0;
}