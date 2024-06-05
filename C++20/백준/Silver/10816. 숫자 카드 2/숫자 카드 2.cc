#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int N, card;
	
	cin >> N;

	vector<int> cards(N);

	while (N--)
	{
		cin >> cards[N];
	}

	sort(cards.begin(), cards.end());

	cin >> N;
	
	while (N--)
	{
		cin >> card;

		auto range = equal_range(cards.begin(), cards.end(), card);

		cout << range.second - range.first << ' ';
	}
}