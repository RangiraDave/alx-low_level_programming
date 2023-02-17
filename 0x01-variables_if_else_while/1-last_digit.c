#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 */
int main(void)
{
	int n;
	int L; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n%10;
	if (L > 5)
	{
		printf("Last digut of %i is %i and greater than 5", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %i is %i and is 0", n, L);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, L);
	}
	return (0);
}
