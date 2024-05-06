#include <stdio.h>

void PrintStars(int blankCount, int starCount)
{
	for (; blankCount > 0; --blankCount)
	{
		putchar(' ');
	}

	for (; starCount > 0; --starCount)
	{
		putchar('*');
	}

	putchar('\n');
}

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i < n; ++i)
	{
		PrintStars(n - i, i + i - 1);
	}

	for (int i = n; i > 0; --i)
	{
		PrintStars(n - i, i + i - 1);
	}
}