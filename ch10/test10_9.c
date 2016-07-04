#include <stdio.h>
int main(int argc, char const *argv[])
{
	int k = 678;
	printf("%%d %%o %%x %%X\n");
	printf("%d %o %x %X\n", k, k, k, k);

	printf("\n%%8d %%-8d %%+8d %%08d %%-+8d\n");
	printf("%8d %-8d %-+8d %08d %-+8d\n", k, k, k, k, k);
	return 0;
}