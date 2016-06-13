#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 15;
	int j = 345;
	int k = 4567;
	long li = 56789L;
	long lj = 678912L;
	long lk = 23456789L;

	printf("i = %d j = %d k = %d i = %6.3d j = %6.3d k = %6.3d\n", i, j, k, i, j, k);
	printf("i = %-d j = %+d k = %-d i = %-6.3d j = %-6.3d k = %-6.3d\n", i, j, k, i, j, k);
	printf("li = %d lj = %d lk = %d \n", li, lj, lk);
	printf("li = %ld lj = %ld lk = %ld\n", li, lj, lk);
	return 0;
}