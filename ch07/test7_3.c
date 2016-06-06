#include <stdio.h>
int main(int argc, char const *argv[])
{
	int value =0;
	int *pvalue = NULL;
	pvalue = &value;

	printf("Input an integer:\n");
	scanf("%d", pvalue);

	printf("You entered %d\n", value);
	return 0;
}