// program to use basics of strings

#include <stdio.h>


int main(void)
{
	void printString(const char string[], int numberOFLetters);
	void scanString(char string[], int numberOfLetters);

	const char theString[5] = { 'h','e','l','l','o' };
	const char string2[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	const char string3[] = "hello";
	char string4[81];

	printString(theString, 5);
	printString(string2, 5);
	printString(string3, 5);

	printf("%s\n", string3);

	
	scanString(string4, 81);

	printString(string4, 81);


	return 0;
}

void printString(const char string[], int numberOfLetters)
{
	for (int i = 0; i < numberOfLetters; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}

		printf("%c", string[i]);

	}
	printf("\n");
}

void scanString(char string[], int numberOfLetters)
{


	for (int i = 0; i < numberOfLetters; i++)
	{
		string[i] = getchar();

		if (string[i] == '\n')
		{
			string[i] = '\0';
			break;
		}
	}
	string[numberOfLetters-1] = '\0';
}
