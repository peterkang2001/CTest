#include <stdio.h>
int main(int argc, char const *argv[])
{
	const float Revenue_Per_150 = 4.5f;
	short JanSold = 23500;
	short FebSold = 19300;
	short MarSold = 21600;
	float RevQuarter = 0.0f;

	// short QuarterSold = JanSold + FebSold + MarSold;
	long QuarterSold = JanSold + FebSold + MarSold;

	printf("Stock sold in\n JanL %d\nFeb: %d\nMar: %d\n",JanSold, FebSold, MarSold );
	printf("Total stock sold in first quarter: %ld\n", QuarterSold);

	RevQuarter = (float)QuarterSold/150 * Revenue_Per_150;
	printf("Sales revenue this quarter is:$%.2f\n", RevQuarter);
	return 0;
}