#include <iostream>

#include <unordered_map>

using namespace std;

unordered_map<int, int> cards;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, card;

	cin >> N;

	cards.reserve(N << 1 + 1);

	while (N--)
	{
		cin >> card;

		++cards[card];
	}

	cin >> N;

	while (N--)
	{
		cin >> card;

		cout << cards[card] << ' ';
	}
}