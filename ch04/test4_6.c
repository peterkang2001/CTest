#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	char answer = 'N';
	double total = 0.0;
	double value = 0.0;
	int count = 0;
	printf("This program calculates the average of any number of values:\n");

	for(;;)
	{
		printf("Enter a value:\n");
		scanf("%lf", &value);
		total += value;
		++count;

		printf("Do you want to enter another value?(Y or N):\n");
		scanf("%c", &answer);
		if (tolower(answer)  == 'n')
		{
			break;
		}
	}
	printf("The average is %.2lf\n", total/count);
	return 0;
}