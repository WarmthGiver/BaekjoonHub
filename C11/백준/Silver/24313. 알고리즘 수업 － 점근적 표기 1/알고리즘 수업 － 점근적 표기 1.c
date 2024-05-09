#include <stdio.h>

int main()
{
	int a1, a0, c, n0;

	scanf("%d %d %d %d", &a1, &a0, &c, &n0);

	int res = 1;

	if (a1 > c) res = 0;

	if (a0 > (c - a1) * n0) res = 0;

	printf("%d", res);
}