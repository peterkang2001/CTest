#include <stdio.h>
int change(int number);

int main(int argc, char const *argv[])
{
	int number = 10;
	int result = 0;
	result = change(number);
	printf("In main, result = %d\tnumber= %d\n", result, number);
	return 0;
}
int change(int number)
{
	number = 2 * number;
	printf("In function change, number = %d\n", number);
	return number;
}