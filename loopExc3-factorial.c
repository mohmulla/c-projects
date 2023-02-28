// program that factorails number

#include <stdio.h>

int main(void)
{
	int			n = 0;
	int factorial = 0;
	int			i = 0;

	// style
	printf("printing factorial\n");
	printf("n  |   !n \n");
	printf("-- | -----\n");
	

	for (n = 1; n < 11; n++)
	{
		factorial = 1;

		for (i = n; i > 0; i--)
		{
			factorial = factorial * i;
		}

		printf("%2i | %7i\n", n, factorial);
	}

	printf("\n");
	
	return 0;
}
