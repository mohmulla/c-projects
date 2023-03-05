// simpla calculator program

#include <stdio.h>

int main(void)
{
	float n = 0;
	float S = 0;
	char op = ' ';

	printf(" Begin calculation\n");
	printf(" -----------------\n");

	while (op != 'S')
	{
		printf("enter number and S\n");
		scanf("%f %c", &S, &op);
	}

	while (op != 'E')
	{
		printf("\n");
		printf("enter number and operator\n");
		scanf("%f %c", &n, &op);

		switch (op)
		{
		case '+':
			S = S + n;
			printf("= %f", S );
			break;

		case '-':
			S = S - n;
			printf("= %f", S );
			break;

		case '/':
			if (n == 0)
			{
				n = 1;
			}

			S = S / n;
			printf("= %f", S );
			break;

		case '*':
			S = S * n;
			printf("= %f", S );
			break;
		}
	}

	return 0;
}
