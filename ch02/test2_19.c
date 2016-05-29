#include <complex.h>
int main(int argc, char const *argv[])
{
	double complex z1 = 2.0 + 3.0 * I;
	double real_part = creal(z1);
	double imag_part = cimag(z1);

	
	return 0;
}