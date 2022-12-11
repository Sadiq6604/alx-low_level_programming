#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	
	int m;

	m = n % 10;
	if(m > 5)
		printf("last digit of %d is %d and is greater than 5\n" n,m);
	if (m == 0)
		print("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
	printf("Last digit of %d is %d and less than 6 not 0\n" , n, m)
