// program that solves quadratic equation

#include <stdio.h>

int main(void)
{
	float a = 0;
	float b = 0;
	float c = 0;
	float x1 = 0;
	float x2 = 0;

	float discriminant = 0;

	float findDiscriminant(float a, float b, float c);

	float findSolutionX1(float a, float b, float c);
	float findSolutionX2(float a, float b, float c);

	float squarRoot(float x);
	float absoluteValue(float x);
	


	//1. take a, b, and c from user
	printf("enter\n");

	printf("a: ");
	scanf("%f", &a);

	printf("b: ");
	scanf("%f", &b);

	printf("c: ");
	scanf("%f", &c);

	//2. find discriminiant 
	discriminant = findDiscriminant(a, b, c);
	printf("%f\n", discriminant);

	//3. if discriminiant < 0 return "numbers are imaginary"
	if (discriminant < 0)
	{
		printf("numbers are imaginary\n");
	}
	else
	{
		printf(" finding solution\n");

		x1 = findSolutionX1(a, b, c);
		x2 = findSolutionX2(a, b, c);

		printf("x1 = %f\n", x1);
		printf("x2 = %f\n", x2);

	}

	return 0;
}

float findDiscriminant(float a, float b, float c)
{
	return (b * b) - (4 * a * c);
}

float findSolutionX1(float a, float b, float c)
{
	float squarRoot(float x);

	return ( -b + (squarRoot((b * b) - (4 * a * c))) ) / (2 * a);
}

float findSolutionX2(float a, float b, float c)
{
	float squarRoot(float x);

	return (-b - (squarRoot((b * b) - (4 * a * c)))) / (2 * a);
}

float squarRoot(float x)
{
	const float epsilion = 0.00001;
	float guess = 1.0;
	float absoluteValue(float x);

	while (absoluteValue(guess * guess - x) >= epsilion)
	{
		guess = (x / guess + guess) / 2.0;
	}

	return guess;
}

float absoluteValue(float x)
{
	if (x < 0)
	{
		x = -x;
	}

	return x;
}

