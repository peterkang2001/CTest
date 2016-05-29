#include "stdio.h"

int main(int argc, char const *argv[])
{
	float radius = 0.0f;
	float diameter = 0.0f;
	const float Pi = 3.14159f;

	printf("Input the diameter of the table:\n");
	scanf("%f", &diameter);
	radius = diameter / 2.0f;
	printf("The cirecumference is %.2f\n", 2.0f * Pi * radius);
	printf("The area is %.2f\n", Pi * radius * radius);
	return 0;
}