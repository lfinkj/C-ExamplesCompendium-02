#include <stdio.h>
#include "mainh.h"

int main()
{

	// printNumber.c
	printf("----> printNumber.c:\n");
	int number1 = 14;
	printNumber( number1 );

	// printString.c
	printf("\n----> printString.c:\n");
	char string1[] = "message hello";
	printString( string1 );

	// recursive.c
	printf("\n----> recursive.c:\n");
	int recurseCount, recurseResult;
	recurseCount = 21;
	recurseResult = recursive( recurseCount );
	printf("%d\n", recurseResult);

	// pointers1.c
	printf("\n----> pointers1.c:");
	pointers1();

	// pointers2.c
	printf("\n----> pointers2.c:");
	pointers2();

	// simpleMenu.c
	printf("\n\n----> simpleMenu.c:");
	simpleMenu();

	// mallocExample.c
	printf("\n----> mallocExample.c:\n");
	mallocArray();

	// stringsExample.c
	printf("\n----> stringsExample.c:");
	strings1();

	// structsExample1.c
	printf("\n\n----> structsExample.c:");
	structs1();

	// typeCasting1.c
	printf("\n----> typeCasting1.c:\n");
	casting1();
	
	// simpleTernaryExample1.c
	printf("\n----> simpleTernaryExample1.c:\n");
	ternary1();

	return 0;
}