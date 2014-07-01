#include <stdio.h>
#include <stdlib.h>

unsigned long long fact (unsigned int n)
{
	unsigned long long x = 0;
	if (n == 1) {
		x = 1;
		return(x);
	}
	else {
		/* recursive call */
		x = n * fact(n - 1);
		return x;
	}
}

int main(void)
{
	unsigned long long res;
	unsigned int n;
	
	/* Ask user to input a number */
	printf ("Insert a number\n");
	scanf ("%d", &n);
	res = fact(n);
	
	/* Print result! */
	printf ("fact(%d) = %llu\n", n, res);
	return 0;
}
