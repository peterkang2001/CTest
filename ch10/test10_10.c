#include <stdio.h>
int main(int argc, char const *argv[])
{
	float fp1 = 345.678f;
	float fp2 = 1.234E6f;
	double fp3 = 2345678898.0;
	double fp4 = 11.22334455e-6;

	printf("%f %+f %-10.4f %6.f\n", fp1, fp2, fp1, fp2);
	printf("%e %+E\n", fp1, fp2);
	printf("%f %g %#+f %8.4f %10.4g\n", fp3, fp3, fp3, fp3, fp4);
	return 0;
}