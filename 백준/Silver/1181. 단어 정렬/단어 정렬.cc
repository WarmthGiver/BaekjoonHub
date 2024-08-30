#include <iostream>

#include <set>

#include <vector>

#include <algorithm>

using namespace std;

bool Compare(const string& left, const string& right)
{
	if (left.length() == right.length())
	{
		return left < right;
	}

	return left.length() < right.length();
}

set<string> words;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(NULL);

	cout.tie(NULL);

	int n;

	cin >> n;

	while (n--)
	{
		string word;

		cin >> word;

		words.insert(word);
	}

	vector<string> wordsCopy(words.begin(), words.end());

	sort(wordsCopy.begin(), wordsCopy.end(), Compare);

	for (const auto& words : wordsCopy)
	{
		cout << words << '\n';
	}
}