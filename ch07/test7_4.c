#include <stdio.h>
int main(int argc, char const *argv[])
{
	char multiple[] = "My String";
	char *p = &multiple[0];
	printf("The address of the first array element: %p\n", p);

	p = multiple;
	printf("The address of obtained from the array name:%p\n", p);

	return 0;
}