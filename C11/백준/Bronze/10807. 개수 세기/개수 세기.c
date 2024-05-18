#include <stdio.h>

int N, v, ns[201];

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		scanf("%d", &v);

		++ns[v + 100];
	}

	scanf("%d", &v);

	printf("%d", ns[v + 100]);

	return 0;
}