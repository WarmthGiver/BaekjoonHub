#include <stdio.h>

#include <string.h>

int main()
{
	char word[100];

	scanf("%s", &word);

	int count = 0;

	for (int i = strlen(word) - 1; i >= 0; --i)
	{
		switch (word[i])
		{
		case '=':

			if (word[i - 1] == 'z' && word[i - 2] == 'd')
			{
				i -= 2;

				break;
			}

		case '-':

			--i;

			break;

		case 'j':

			if (word[i - 1] == 'l' || word[i - 1] == 'n')
			{
				--i;
			}

			break;
		}

		++count;
	}

	printf("%d", count);
}