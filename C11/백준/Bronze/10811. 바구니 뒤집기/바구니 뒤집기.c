#include <stdio.h>

int N, M, i, j, k, l, baskets[101];

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

		do
		{
			k = baskets[i];

			baskets[i] = baskets[j];

			baskets[j] = k;

			++i;

			--j;
		} while (i < j);
	}

	while (l++ < N)
	{
		printf("%d ", baskets[l]);
	}
}