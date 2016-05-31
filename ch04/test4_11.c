#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number = 0;
	int rebmun = 0;
	int temp = 0;

	printf("Enter a positive integer:\n");
	scanf("%d", &number);

	temp = number;

	do
	{
		rebmun = 10 * rebmun + temp % 10;
		temp = temp / 10;
	} while (temp);

	printf("The number %d reversed is %d rebmun ehT\n", number, rebmun);
	return 0;
}