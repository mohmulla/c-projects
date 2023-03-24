// program of prime function

#include <stdio.h>

int main(void)
{
	int number = 0;
	int result = 0;

	int Prime(int x);

	//1. take input
	printf("enter number: ");
	scanf("%i", &number);

	//2. function prime
	result = Prime(number);

	//3. display
	printf("%i", result);

	return 0;
}

int Prime(int x)
{
	//1. check for even
	if (x % 2 == 0)
	{
		return 0;
	}

	//2. check for odd
	for (int i = 3; i < x; i= i+2)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}

	return 1;

}
