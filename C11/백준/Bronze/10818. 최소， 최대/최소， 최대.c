#include <stdio.h>

int main()
{
	int N, n, min = 1000000, max = -min;

	scanf("%d", &N);

	while (N--)
	{
		scanf("%d", &n);

		if (n < min) min = n;

		if (n > max) max = n;
	}

	printf("%d %d", min, max);
}