/* Quadratic Equation Solver */

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double x1 = 0;
	double x2 = 0;
	double complex z1 = 0;
	double complex z2 = 0;
	
	printf("This program solves quadratic equations.\n");
	printf("Please enter 3 integers a, b and c to solve.\n");
	printf("\nRemember to hit return after each value entered.\n");
	
	scanf("%d\n%d\n%d", &a, &b, &c);
	
	printf("You have entered the following equation.\n");
	printf("%dx^2%+dx%+d\n", a, b, c);
	
	d = b * b - (4 * a * c);
	
	if(d > 0)
	{
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	printf("The roots are %.3f and %.3f\n", x1, x2);	
	}
	else if(d < 0)
	{
	z1= (-b +csqrt(d)) / (2 * a);
	z2 = (-b - csqrt(d)) / (2 *a);
	printf("The roots are complex %.1f%+.1fi and %.1f%+.1fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
	}	
	else
	{
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
		if(x1 == x2)
		{
		printf("There is a repeated root and it is %.3f\n", x1);	
		}
	}
	
	printf("Press return to exit.");
	
	getch();
	return 0;
}
