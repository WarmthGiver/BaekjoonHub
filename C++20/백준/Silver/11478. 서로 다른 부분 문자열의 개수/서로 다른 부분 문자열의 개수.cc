#include <iostream>

#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	string S, partialString;

	cin >> S;

	set<string> partialStrings;

	int SSize(S.size());

	for (int i = 0; i < SSize; ++i)
	{
		partialString.clear();

		for (int j = i; j < SSize; ++j)
		{
			partialString += S[j];

			partialStrings.insert(partialString);
		}
	}

	cout << partialStrings.size();
}