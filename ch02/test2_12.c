#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Variables of type char occupy %d bytes\n", sizeof(char));
	printf("Variables of type short occupy %d bytes\n", sizeof(short));
	printf("Variables of type int %d bytes\n", sizeof(int));
	printf("Variables of type long %d bytes\n", sizeof(long));
	printf("Variables of type float %d bytes\n", sizeof(float));
	printf("Variables of type double %d bytes\n", sizeof(double));
	printf("Variables of type long double %d bytes\n", sizeof(long double));

	return 0;
}