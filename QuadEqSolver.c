/* Quadratic Equation Solver */

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 2;
	int c = 2;
	double complex x = 0;
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	x = (-b+csqrt(b * b -(4 * a * c)))/(2 * a);
	printf("The positive root is %.1f%+.1fi\n", creal(x), cimag(x));
	getch();
	return 0;
	
}
