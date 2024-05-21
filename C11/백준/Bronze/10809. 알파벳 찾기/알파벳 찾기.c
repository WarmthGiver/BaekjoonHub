#include <stdio.h>

#include <string.h>

char i = 96, S[];

int main()
{
	scanf("%s", S);

	while (i++ < 122)
	{
		char* chr = strchr(S, i);

		printf("%d ", chr ? chr - S : -1);
	}
}