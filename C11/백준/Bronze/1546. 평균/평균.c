#include <stdio.h>

int N, i, score, scores[1000];

float max, sum;

int main()
{
	scanf("%d", &N);

	while (i < N)
	{
		scanf("%d", &score);

		scores[i++] = score;

		if (score > max)
		{
			max = score;
		}
	}

	max = 1 / max * 100;

	while (i-- > 0)
	{
		sum += scores[i] * max;
	}

	printf("%f", sum / N);
}