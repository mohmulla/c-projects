// program that reverses entered number


#include <stdio.h>
#include <SDL.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)

int main(int argc, char* argv[])
{
	int number = 0;
	int display = 0;

	printf("enter number: ");
	scanf("%i", &number);


	printf("number %i reversed is ", number);

	while (number > 0)
	{
		display = number % 10;
		printf("%i", display);
		number = number / 10;

	}

	printf("\n");


	
	
	SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "system", "hello", NULL);

	

	return 0;
}
