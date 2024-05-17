#include <stdio.h>

int main()
{
	int T, A, B, i;

	scanf("%d", &T);

	for (i = 0; i++ < T;)
	{
		scanf("%d %d", &A, &B);

		printf("%d\n", A + B);
	}
}