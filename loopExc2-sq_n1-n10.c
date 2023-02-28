// program that squares number from 1 to 10

#include <stdio.h>


int main(void)
{
	int	  n = 0;

	// style
	printf("printing square root of number\n\n");
	printf("n  |   n^2\n");
	printf("-- | -----\n");
	

	for (n = 1; n < 11; n++)
	{
		printf("%2i |   %3i\n", n, n * n);
	}

	printf("\n");
	
	return 0;
}
