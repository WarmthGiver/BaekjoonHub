#include <stdio.h>

int main()
{
	int X, N, a, b;

	scanf("%d %d", &X, &N);

	while (N--)
	{
		scanf("%d %d", &a, &b);

		X -= a * b;
	}

	if (X)
	{
		printf("No");
	}

	else
	{
		printf("Yes");
	}
}