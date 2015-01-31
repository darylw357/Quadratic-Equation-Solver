/* Quadratic Equation Solver */

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 20;
	int c = 5;
	int d = 0;
	double x = 0;
	double complex z = 0;
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	d = b * b - (4 * a * c);
	
	if(d > 0)
	{
	x = (-b+sqrt(b * b -(4 * a * c)))/(2 * a);
	printf("The roots are %.3f and %.3f\n", x, x);	
	}
	else if(d < 0)
	{
	z = (-b+csqrt(b * b -(4 * a * c)))/(2 * a);	
	printf("The roots are complex and %.1f+%.1fi\n", creal(z), cimag(z));
	}	
	else
	{
	x = (-b+sqrt(b * b -(4 * a * c)))/(2 * a);
	printf("The roots are %.3f and %.3f\n", x, x);		
	}
	
	
	getch();
	return 0;
	
}
