#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", !(n % 100 ? n % 4 : n % 400));
}