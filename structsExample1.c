#include <stdio.h>

typedef struct
{
	int length;
	int width;
} rectangle;
typedef struct
{
	int x;
	int y;
} position;
typedef struct
{
	char owner[30];
	rectangle rectangle;
	position position;
} building;

void structs1()
{
	rectangle myRectangle = { 5, 10 };
	position myRectPosition = { 1, 1 };

	// stuct with structs
	building myHouse = { "me", {7, 21}, { 54, 78} };

	printf("\nLength: %d, Width: %d\n", myRectangle.length, myRectangle.width);
	printf("my rectangle location: x.%d y.%d\n", myRectPosition.x, myRectPosition.y);

	printf("house loc: x.%d y.%d, size %dx%d, owner: %s\n",
		myHouse.position.x,
		myHouse.position.y,
		myHouse.rectangle.length,
		myHouse.rectangle.width,
		myHouse.owner
	);

	// array of structs
	int nbrRects = 3;
	rectangle rectangles[] = { {5,7}, {10,14}, {15,21} };
	printf("\narray of 3 rectangles with length and width:");
	for (int i = 0; i < nbrRects; i++)
	{
		printf("\n%d %d", rectangles[i].length, rectangles[i].width);
	}
	printf("\n");

	// pointer to a struct
	building* structPointer = &myHouse;
	// access with -> arrow syntax
	int yLoc = structPointer->position.y;
	printf("\nx.%i y.%i\n", structPointer->position.x, yLoc);

}