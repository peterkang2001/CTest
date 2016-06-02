#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number = 0;
	int *pointer = NULL;
	number = 10;

	printf("number's address: %p\n", &number);
	printf("number's value: %d\n", number);

	pointer = &number;

	printf("pointer's address: %p\n", &pointer);
	printf("pointer's size: %d bytes\n", sizeof(pointer));

	printf("value pointed to:%d\n", *pointer);
	return 0;
}