#include <stdio.h>
#include <stdlib.h>

void mallocArray()
{
	int n = 5;
	int* a = (int*)malloc(n * sizeof(int));
	printf("malloc uninitialized: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d : %u\n", a[i], &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	printf("malloc 1++ loop initialized: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d : %u\n", a[i], &a[i]);
	}
	free(a);
	printf("malloc array memory after free()\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d : %u\n", a[i], &a[i]);
	}

}