#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <stdbool.h>

int main()
{
	int wordCount;

	scanf("%d", &wordCount);

	int groupWordCount = wordCount;

	for (int i = 0; i < wordCount; ++i)
	{
		char word[100];

		scanf("%s", word);

		int wordLength = strlen(word);

		char character = '\0';
		
		bool groupWordChecks[26] = { false, };

		for (int j = 0; j < wordLength; ++j)
		{
			if (character != word[j])
			{
				character = word[j];

				if (groupWordChecks[character - 'a'] == true)
				{
					--groupWordCount;

					break;
				}

				groupWordChecks[character - 'a'] = true;
			}
		}
	}

	printf("%d", groupWordCount);
}