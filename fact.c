#include <stdio.h>
#include <stdlib.h>

long long fact (int n)
{
	long long x = 0;
	if (n == 1) {
		x = 1;
		return(x);
	}
	else {
		x = n * fact(n - 1);
		return x;
	}
}

int main(void)
{
	long long res;
	int n;
	printf ("Insert a number\n");
	scanf ("%d", &n);
	res = fact(n);
	printf ("fact(%d) = %llu\n", n, res);
	return 0;
}
