#include <iostream>

#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	string S;

	cin >> S;

	int SSize(S.size()), partialStringCount{}, i, j;

	for (i = SSize; i > 0 ; --i)
	{
		unordered_set<string> partialStrings;

		for (j = SSize - i; j >= 0 ; --j)
		{
			partialStrings.insert(S.substr(j, i));
		}

		partialStringCount += partialStrings.size();
	}

	cout << partialStringCount;
}