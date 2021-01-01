#include <stdio.h>

void ternary1()
{

	double money = 26;
	double cost = 25;

	printf("money > cost ? print(sold) : print(nosale)\n");
	printf("results of code: ");
	money > cost ? printf("sold\n") : printf("no sale bud\n");

	/* same result from if statement
	if( money > cost )
	{
		printf("sold!\n");
	} else
	{
		printf("no cash bud\n",);
	}
	*/

}