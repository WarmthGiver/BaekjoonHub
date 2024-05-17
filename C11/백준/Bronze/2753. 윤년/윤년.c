#include <stdio.h>

int main()
{
	int y;

	scanf("%d", &y);

	printf("%d", !(y % 100 ? y % 4 : y % 400));
}