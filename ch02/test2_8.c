#include "stdio.h"
int main(int argc, char const *argv[])
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;
	float Pi = 3.14159265f;

	printf("Input the diameter of the table:\n");
	scanf("%f", &diameter);
	radius = diameter / 2.0f;
	circumference = 2.0f * Pi * radius;
	area = Pi * radius * radius;

	printf("\nThe circumference is %.2f\n", circumference);
	printf("The area is %.2f\n", area);
	return 0;
}