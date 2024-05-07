#include <stdio.h>

#include <string.h>

int main()
{
	char s[100];

	scanf("%s", &s);

	int l = strlen(s) - 1;

	for (int i = l * 0.5; i >= 0; --i)
	{
		if (s[i] != s[l - i])
		{	
			putchar('0');

			return 0;
		}
	}

	putchar('1');
}