#include <stdio.h>

int main()
{
	int T, i, A, B;

	scanf("%d", &T);

	for (i = 1; i <= T;)
	{
		scanf("%d %d", &A, &B);

		printf("Case #%d: %d\n", i++, A + B);
	}
}