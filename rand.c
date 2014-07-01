#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int n, x, it = 0;
	const int MAX = 100, MIN = 1;

	srand(time(NULL));
	n = (rand() % (MAX - MIN + 1)) + MIN;

	do {
		printf("Enter a number ? ");
		scanf("%d", &x);
		it++;
		if (x < n) {
			printf("Too small !\n\n");
		}
		else if (x > n) {
			printf("Too large !\n\n");
		}
		else {
			printf ("Yepee, you win after %d iteration(s)!\n", it);
		}
	} while (x != n);
}
