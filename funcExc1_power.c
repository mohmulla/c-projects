// program that raises x to the power of n

#include <stdio.h>

int main(void)
{
	int x = 0;
	int n = 0;
	long int result = 0;

	long int x_to_the_n(int x, int n);

	// take x
	printf("x:");
	scanf("%i", &x);

	// take n
	printf("n:");
	scanf("%i", &n);

	result = x_to_the_n(x, n);

	printf("%li", result);

	return 0;
}

long int x_to_the_n(int x, int n)
{
	if (n == 1)
		return x;
	else
		return x * x_to_the_n(x, n - 1);
}
