#include <stdio.h>

int i, j, n, attendance[31];

int main()
{
	while (i++ < 28)
	{
		scanf("%d", &n);

		++attendance[n];
	}

	while (j++ < 30)
	{
		if (!attendance[j])
		{
			printf("%d\n", j);
		}
	}
}