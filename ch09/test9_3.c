#include <stdio.h>
int sum(int, int);
int product(int, int);
int difference(int, int);
int any_function(int(*pfun)(int, int), int x, int y);
int main(int argc, char const *argv[])
{
	int a = 10;
	int b = 5;
	int result = 0;
	int (*pf)(int, int) = sum;

	result = any_function(pf, a, b);
	printf("result = %d\n", result);

	result = any_function(product, a, b);
	printf("result = %d\n", result);
	printf("result = %d\n", any_function(difference, a, b));

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
int any_function(int (*pfun)(int a, int b), int x, int y)
{
	return pfun(x, y);
}