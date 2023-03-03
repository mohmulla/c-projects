// program that triangular any set of numbers

#include <stdio.h>

int main(void)
{
	int	triangularNumber = 0;
	int				       set = 0;
	int		    	  number = 0;
	int			           i = 0;

	printf("enter how many triangular numbers to be calculated : ");
	scanf("%i", &set);
	

	for (int counter = 0; counter < set; counter++)
	{
		printf("which triangular number you want?\n");
		scanf("%i", &number);

		triangularNumber = 0;

			for ( i = 1; i <= number; i++)
			{
				triangularNumber = triangularNumber + i;
			}

			printf("%2i	trig = %5i\n", number, triangularNumber);
	}
	
	return 0;
}
