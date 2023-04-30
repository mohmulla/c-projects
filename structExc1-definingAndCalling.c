// program that defines structures and uses them

#include <stdio.h>

struct number
{
	int a;
	int serial[3];
};

int main(void)
{
	struct number x;

	struct number incrementer(struct number n1);

	// asign values
	x.a = 0;
	x.serial[0] = 0;
	x.serial[1] = 1;
	x.serial[2] = 2;

	printf("%i : %i %i %i\n", x.a, x.serial[0], x.serial[1], x.serial[2]);

	x = incrementer(x);

	printf("%i : %i %i %i\n", x.a, x.serial[0], x.serial[1], x.serial[2]);

	return 0;

}

struct number incrementer(struct number n1)
{
	n1.a++;
	n1.serial[0]++;
	n1.serial[1]++;
	n1.serial[2]++;

	return n1;
}
