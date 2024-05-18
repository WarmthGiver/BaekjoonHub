#include <stdio.h>

int i, n, max, num;

int main()
{
	for (i = 1; i <= 9; ++i)
	{
		scanf("%d", &n);

		if (n > max)
		{
			max = n;

			num = i;
		}
	}

	printf("%d %d", max, num);
}