#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;
	int value_count = 0;
	float fp1 = 0.0;
	printf("Input:\n");
	value_count = scanf("fp1 = %f i = %d %d", &fp1, &i, &j);
	printf("\nOutput:\n");
	printf("Count of values read = %d\n", value_count);
	printf("fp1 = %f\ti = %d\tj = %d\n",fp1, i, j );
	return 0;
}