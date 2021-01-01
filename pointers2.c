#include <stdio.h>

void pointers2()
{
	int a = 5;
	int b = 10;
	float c = 7.1;

	printf("\naddress of int a: %u \n", &a);
	printf("address of int b: %u \n", &b);
	printf("address of float c: %u \n\n", &c);

	int d = 0;
	int* pd = &d;

	printf("address of d: %u\n", pd);
	printf("value of d = %i\n\n", d);

	int* p1;
	p1 = &a;

	printf("address of a: %u \n", p1);
	printf("value of a: %d \n\n", *p1);

	int* p2 = &b;

	printf("address of b: %u \n", p2);
	printf("value of b: %d \n\n", *p2);

	float* p3 = &c;

	printf("address of c: %u \n", p3);
	printf("value of c: %f \n\n", *p3);

	int* p4 = &d;
	d = 23;

	printf("address of d: %u\n", p4);
	printf("d changed, now = %i\n\n", d);

	int pResult = *p1 + *p2;

	printf("*p1 + *p2 = %i", pResult);

}