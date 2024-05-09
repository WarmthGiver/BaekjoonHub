#include <iostream>

#include <unordered_map>

#include <vector>

#include <algorithm>

using namespace std;

bool Compare(const pair<string, int>& left, const pair<string, int>& right)
{
	if (left.second == right.second)
	{
		if (left.first.length() == right.first.length())
		{
			return left.first < right.first;
		}

		return left.first.length() > right.first.length();
	}

	return left.second > right.second;
}

unordered_map<string, int> wordCounts;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n, m;

	cin >> n >> m;

	while (n--)
	{
		string word;

		cin >> word;

		if (word.size() >= m)
		{
			++wordCounts[word];
		}
	}

	vector<pair<string, int>> wordCountsCopy(wordCounts.begin(), wordCounts.end());

	sort(wordCountsCopy.begin(), wordCountsCopy.end(), Compare);

	for (const auto& wordCount : wordCountsCopy)
	{
		cout << wordCount.first << '\n';
	}
}