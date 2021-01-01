#include <stdio.h>

int recursive( int count ) {

	if (count != 0)
	{
		printf("%d ", count);
		return count + recursive(count - 1);
	}
	else
	{
		printf("\n");
		return count;
	}
}