#include <stdio.h>

int i, n, remainders[42], count;

int main()
{
	while (i++ < 10)
	{
		scanf("%d", &n);

		if (!remainders[n % 42]++)
		{
			++count;
		}
	}

	printf("%d", count);
}