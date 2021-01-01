#include <stdio.h>

void simpleMenu()
{
	printf("\nchoose an option:\n");
	printf("1. add\n");
	printf("2. view\n");
	printf("3. search\n");
	printf("4. exit\n");

	int input;
	scanf("%d", &input);

	if (input == 1)
	{
		printf("its 1 \n");
	}
	else if (input == 2)
	{

		printf("its 2 \n");
	}
	else if (input == 3)
	{

		printf("its 3\n");
	}
	else if (input == 4)
	{

		printf("its 4\n");
	}
	else
	{
		printf("not an option\n");
	}

}