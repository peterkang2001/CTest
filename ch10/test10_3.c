#include <stdio.h>
int main(int argc, char const *argv[])
{
	float fp1 = 0.0f;
	float fp2 = 0.0f;
	float fp3 = 0.0f;

	int value_count = 0;
	printf("Input:\n");
	value_count = scanf("%f %f %f", &fp1, &fp2, &fp3);

	printf("Output:\n");
	printf("Return value = %d\n", value_count);
	printf("fp1 = %f fp2 = %f fp3 = %f\n", fp1, fp2, fp3);
	return 0;
}