#include <iostream>

#include <stack>

#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	while (1)
	{
		string sentence;

		getline(cin, sentence);

		if (sentence == ".")
		{
			break;
		}

		char parenthesises[101];

		int top = 0;

		int index = sentence.size();

		while (index--)
		{
			char character = sentence[index];

			if (character == ')' || character == ']')
			{
				parenthesises[top++] = character;
			}

			else if (character == '(')
			{
				if (top-- == 0 || parenthesises[top] != ')')
				{
					top = -1;

					break;
				}
			}

			else if (character == '[')
			{
				if (top-- == 0 || parenthesises[top] != ']')
				{
					top = -1;

					break;
				}
			}
		}

		if (top == 0)
		{
			cout << "yes" << '\n';
		}

		else
		{
			cout << "no" << '\n';
		}
	}
}