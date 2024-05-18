#include <stdio.h>

int i, n, max, num;

int main()
{
	while (++i <= 9)
	{
		scanf("%d", &n);

		if (n > max)
		{
			max = n;

			num = i;
		}
	}

	printf("%d\n%d", max, num);
}