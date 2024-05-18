#include <stdio.h>

int N, v, ns[201];

int main()
{
	scanf("%d %d", &N, &v);

	while (N--)
	{
		++ns[v + 100];

		scanf("%d", &v);
	}

	printf("%d", ns[v + 100]);
}