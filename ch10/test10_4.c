#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;

	printf("Input:\n");
	n = scanf("%d %x %o", &i, &j, &k);
	printf("Output:\n");
	printf("i = %d j = %d k = %d\n", i, j, k);
	return 0;
}