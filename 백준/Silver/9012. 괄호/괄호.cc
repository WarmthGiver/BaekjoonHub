#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int inputCount;

	cin >> inputCount;

	while (inputCount--)
	{
		string parenthesis;

		cin >> parenthesis;

		const int parenthesisSize = parenthesis.size();

		if (parenthesisSize % 2 == 0)
		{
			int layerCount = 0;

			const int layerCountLimit = parenthesisSize * 0.5;

			int index = parenthesisSize;

			while(index--)
			{
				if (parenthesis[index] == '(')
				{
					if (--layerCount < 0)
					{
						break;
					}
				}

				else if (parenthesis[index] == ')')
				{
					if (++layerCount > layerCountLimit)
					{
						break;
					}
				}
			}

			if (layerCount == 0)
			{
				cout << "YES" << '\n';

				continue;
			}
		}

		cout << "NO" << '\n';
	}
}