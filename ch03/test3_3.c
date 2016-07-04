#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
	long test = 0L;
	printf("Enter an integer less than %ld:\n", LONG_MAX);
	scanf("%ld", &test);

	if (test % 2L == 0L)
	{
		printf("The number %ld is even\n", test);
		if ((test / 2L) % 2L == 0L)
		{
			printf("Half of %ld is also even\n", test);
			printf("That's interesting isn't it?\n");
		}
	}
	else
	{
		printf("The number %ld is odd\n", test);
	}
	return 0;
}