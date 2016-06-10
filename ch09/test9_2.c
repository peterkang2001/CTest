#include <stdio.h>
int sum(int, int);
int product(int, int);
int difference(int, int);

int main(int argc, char const *argv[])
{
	int a = 10;
	int b = 5;
	int result = 0;
	int (*pfun[3])(int, int);

	pfun[0] = sum;
	pfun[1] = product;
	pfun[2] = difference;

	for(int i = 0; i < 3; i++)
	{
		result = pfun[i](a, b);
		printf("result = %d\n", result);
	}

	result = pfun[1](pfun[0](a,b), pfun[2](a, b));
	printf("\nThe product of the sum and difference = %d\n", result);
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
int product(int a, int b)
{
	return a * b;
}
int difference(int a, int b)
{
	return a - b;
}