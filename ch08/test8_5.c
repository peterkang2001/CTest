#include <stdio.h>
int change(int *pnumber);

int main(int argc, char const *argv[])
{
	int number = 10;
	int *pnumber = &number;
	int result;

	result = change(pnumber);
	printf("In main, result = %d\tnumber = %d\n", result, number);
	return 0;
}
int change(int *pnumber)
{
	*pnumber *= 2;
	printf("In function change, *pnumber = %d\n", *pnumber);
	return *pnumber;
}