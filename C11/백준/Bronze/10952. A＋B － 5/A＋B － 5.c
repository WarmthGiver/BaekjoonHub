#include <stdio.h>

int main()
{
	int A, B;

	while (scanf("%d %d", &A, &B), A && B)
	{
		printf("%d\n", A + B);
	}
}