#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0){
		printf ("%i", n);
		printf (" is zero\n");
	}
	else if (n > 0){
		printf ("%i", n);
		printf (" is positive\n");
	}
	else{
		printf ("%i", n);
		printf (" is negative\n");
	}
	return (0);
}
