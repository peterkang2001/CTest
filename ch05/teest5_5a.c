#include <stdio.h>
int main(int argc, char const *argv[])
{
	double value = 1.0;
	printf("%lu\n", sizeof(value));
	printf("%lu\n", sizeof value);
	printf("%lu\n", sizeof(long));
	return 0;
}