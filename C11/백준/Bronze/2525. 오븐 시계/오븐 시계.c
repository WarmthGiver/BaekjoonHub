#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	B += C;

	printf("%d %d", (A + B / 60) % 24, B % 60);
}