#include <stdio.h>

int N, i, score;

float max, sum;

int main()
{
	scanf("%d", &N);

	while (i++ < N)
	{
		scanf("%d", &score);

		sum += score;

		if (score > max)
		{
			max = score;
		}
	}

	printf("%f", sum / N / max * 100);
}