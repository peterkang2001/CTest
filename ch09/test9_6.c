#include <stdio.h>
unsigned long factorial(unsigned long);
int main(int argc, char const *argv[])
{
	unsigned long number = 0L;
	printf("Enter an integer value:\n");
	scanf("%lu", &number);
	printf("The factorial of %lu is %lu\n", number, factorial(number));
	return 0;
}
unsigned long factorial(unsigned long n)
{
	if(n < 2L)
		return n;
	return n * factorial(n - 1);
}
