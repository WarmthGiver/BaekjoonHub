#include <stdio.h>

#include <string.h>

int main()
{
	char word[1000000];

	scanf("%s", &word);

	int counts[26];

	for (int i = strlen(word); i >= 0; --i)
	{
		for (int j = 0; j < 26; ++j)
		{
			if (word[i] == 'A' + j || word[i] == 'a' + j)
			{
				++counts[j];

				break;
			}
		}
	}

	int maxCount = 0;

	char most;

	for (int i = 0; i < 26; ++i)
	{
		if (counts[i] > maxCount)
		{
			maxCount = counts[i];

			most = 'A' + i;
		}

		else if (counts[i] == maxCount)
		{
			maxCount = counts[i];

			most = '?';
		}
	}

	putchar(most);
}