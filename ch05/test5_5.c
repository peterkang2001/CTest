#include <stdio.h>
int main(int argc, char const *argv[])
{
	long a = 1L;
	long b = 2L;
	long c = 3L;

	double d = 4.0;
	double e = 5.0;
	double f = 6.0;

	printf("A variable of type long occupies %d bytes.\n", sizeof(long));
	printf("Here are the addresses of some variables of type long:\n");
	printf("The address of a is: %p The address of b is: %p", &a, &b);
	printf("The address of c is: %p\n", &c);
	printf("\n\nA variable of type double occupies %d bytes.\n", sizeof(double));
	printf("The address of a is: %p The address of b is: %p", &d, &e);
	printf("The address of c is: %p\n", &f);
	return 0;
}