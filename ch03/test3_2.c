#include <stdio.h>
int main(int argc, char const *argv[])
{
	const double unit_price = 3.5;
	int quantity = 0;
	printf("Enter ther number that you want to buy:\n");
	scanf("%d", &quantity);

	if (quantity > 10)
	{
		printf("The price for %d is $%.2f\n", quantity, quantity * unit_price * 0.95);
	}
	else
	{
		printf("The price for %d is $%.2f\n", quantity, quantity * unit_price);
	}
	return 0;
}