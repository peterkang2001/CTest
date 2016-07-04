#include <stdio.h>

int main(int argc, char const *argv[])
{
	long num1 = 0L;
	long num2 = 0L;
	long *pnum = NULL;

	pnum = &num1; 
	*pnum = 2; //num1 = 2
	++num2; //num2 = 1
	num2 += *pnum; //num2 = 3

	pnum = &num2;  
	++*pnum; //num2 = 4
	printf("num1 = %ld num2 = %ld *pnum = %ld * pnum + num2 = %ld\n", 
		num1, num2, *pnum, *pnum + num2);
// num1 = 2, num2=4, *pnum = 4, *pnum + num2 = 8
	return 0;
}