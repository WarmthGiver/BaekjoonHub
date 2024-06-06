#include <iostream>

#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	string S;

	cin >> S;

	set<string> partialStrings;

	int SSize(S.size()), i, j;

	for (i = SSize; --i >= 0;)
	{
		for (j = SSize - i; j > 0; --j)
		{
			partialStrings.insert(S.substr(i, j));
		}
	}

	cout << partialStrings.size();
}