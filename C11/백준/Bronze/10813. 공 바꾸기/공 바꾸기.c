#include <stdio.h>

int N, M, i, j, k, baskets[101];

int main()
{
	scanf("%d %d", &N, &M);

	while (i++ < N)
	{
		baskets[i] = i;
	}

	while (M--)
	{
		scanf("%d %d", &i, &j);

		k = baskets[i];

		baskets[i] = baskets[j];

		baskets[j] = k;
	}

	for (i = 0; i++ < N;)
	{
		printf("%d ", baskets[i]);
	}
}