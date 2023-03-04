#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Prints text acoording to number
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
	printf("last digit of %d is %d and it is greater than 6\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of %d is %d and it is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and it is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
