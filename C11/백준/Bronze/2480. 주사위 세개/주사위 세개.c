#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		d = 10000 + a * 1000;
	}

	else if (a == b || a == c)
	{
		d = 1000 + a * 100;
	}

	else if (b == c)
	{
		d = 1000 + b * 100;
	}

	else
	{
		d = (a > b ? (a > c ? a : c) : (b > c ? b : c)) * 100;
	}

	printf("%d", d);
}