#include <stdio.h>
#include <stdarg.h>
double average(double v1, double v2, ...);	
int main(int argc, char const *argv[])
{
	double val1 = 10.5, val2 = 2.5;
	int num1 = 6, num2 = 5;
	long num3 = 12, num4 = 20;

	printf("Average = %lf\n", average(val1, 3.5, val2, 4.5, 0.0));
	printf("Average = %lf\n", average(1.0, 2.0, 0.0));
	printf("Average = %lf\n", average((double)num2, val2, (double)num1,(double)num4, (double)num3, 0.0));

	return 0;
}
double average(double v1, double v2, ...)
{
	va_list parg;             //Pointer for variable argument list
	double sum = v1 + v2;
	double value = 0;
	int count = 2;

	va_start(parg, v2);       //Initialize argument pointer

	while((value = va_arg(parg, double)) != 0.0)
	{
		sum += value;
		count++;
	}

	va_end(parg);              //End varialbe argument process
	return sum / count;
}