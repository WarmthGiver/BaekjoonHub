#include <stdio.h>

#include <string.h>

int main()
{
	char word[100];

	scanf("%s", &word);

	int wordLength = strlen(word) - 1;

	for (int i = wordLength * 0.5; i >= 0; --i)
	{
		if (word[i] != word[wordLength - i])
		{	
			putchar('0');

			return 0;
		}
	}

	putchar('1');
}