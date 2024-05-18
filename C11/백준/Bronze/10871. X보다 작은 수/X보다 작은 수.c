#include <stdio.h>

int N, X, a;

int main()
{
	scanf("%d %d", &N, &X);

	while (N--)
	{
		scanf("%d", &a);

		if (a < X) printf("%d ", a);
	}
}