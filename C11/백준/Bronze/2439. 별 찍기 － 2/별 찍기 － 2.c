#include <stdio.h>

int main()
{
	int N, i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; ++i)
	{
		for (j = N; j > 0; --j)
		{
			j > i ? putchar(' ') : putchar('*');
		}

		putchar('\n');
	}
}