#include <iostream>

#include <queue>

using namespace std;

queue<pair<int, int>> documents;

priority_queue<int> prioritys;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int testCaseCount;

	cin >> testCaseCount;

	while (testCaseCount--)
	{
		int n, m;

		cin >> n >> m;

		for (int number = 0; number < n; ++number)
		{
			int priority;

			cin >> priority;

			documents.push({ number, priority });

			prioritys.push(priority);
		}

		int printCount = 0;

		for (;;)
		{
			auto document = documents.front();

			documents.pop();

			if (document.second == prioritys.top())
			{
				prioritys.pop();

				++printCount;

				if (document.first == m)
				{
					break;
				}

				continue;
			}

			documents.push(document);
		}

		cout << printCount << '\n';

		documents = queue<pair<int, int>>();

		prioritys = priority_queue<int>();
	}
}