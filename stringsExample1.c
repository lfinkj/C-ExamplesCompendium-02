#include <stdio.h>

void strings1()
{
	char stringOfChars[30];

	printf("\nplease type a word:\n");
	scanf("%29s", stringOfChars);
	printf("you typed: %s\n", stringOfChars);

	int charCount = 0;
	while (stringOfChars[charCount] != '\0') // print character until EOL code is reached '\0'
	{
		charCount++;
	}
	printf("total chars= %d", charCount);

}