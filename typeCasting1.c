#include <stdio.h>

void casting1()
{

	int slices = 17;
	int people = 2;
	double halfPizza = slices / (double)people; //explicit typecasting
	// casting is just like another type of operator
	// (double) is a unary operator

	double halfPizza2 = (double)slices / people; // will double affect both 'slices / people' or just 'slices', (double is unary) and has precedence over the division / operator
	printf("'(double) slices / people' = %f\n", halfPizza2);

	double halfPizza3 = (double)(slices / people);
	printf("'(double) (slices / people)' = %f\n", halfPizza3);

	double c = 25 / 2 * 2;
	double e = 25 / 2 * 2.0; // stored as double so 2 vs 2.0 doesnt matter
	printf("'c = 25/2 * 2': %f\n", c);
	printf("'e = 25/2 * 2.0': %f\n", e);
	// arithmetic does allways have the same datatype numbers

}