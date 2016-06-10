#include <stdio.h>
float average(float x, float y)
{
	return (x + y) / 2.0f;
}
int main(int argc, char const *argv[])
{
	float value1 = 0.0F;
	float value2 = 0.0F;
	float value3 = 0.0F;

	printf("Enter two floating-point values separated\n");
	scanf("%f %f", &value1, &value2);
	value3 = average(value1, value2);
	printf("The average is: %f\n", value3);
	return 0;
}