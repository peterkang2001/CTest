#include <complex.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double complex cx = 1.0 + 3.0 * I;
	double complex cy = 1.0 - 4.0 * I;
	printf("Working with complex numbers:\n");
	printf("Strarting values:cx = %.2f%+.2fi cy= %.2f%+.2fi\n",creal(cx), cimag(cx), creal(cy), cimag(cy) );
	double complex sum = cx + cy;
	printf("\n\nThe sum cx + cy = %.2f%+.2fi", creal(sum), cimag(sum));

	double complex difference = cx - cy;
	printf("\n\nThe difference cx - cy = %.2f%+.2fi", creal(difference), cimag(difference));

	double complex product = cx * cy;
	printf("\n\nThe product cx * cy = %.2f%+.2fi", creal(product), cimag(product));

	double complex quotient = cx / cy;
	printf("\n\nThe quotient cy / cy = %.2f%+.2fi", creal(quotient), cimag(quotient));

	double complex conjugate = conj(cx);
	printf("\n\nThe conjugate of cx = %.2f%+.2fi\n", creal(conjugate), cimag(conjugate));
	return 0;
}