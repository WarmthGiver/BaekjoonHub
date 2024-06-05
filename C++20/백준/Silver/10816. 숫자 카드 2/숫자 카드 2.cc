#include <iostream>

using namespace std;

const int CARD_MAX(10000000);

int cards[CARD_MAX << 1 + 1];

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, card;

	cin >> N;

	while (N--)
	{
		cin >> card;

		++cards[card + CARD_MAX];
	}

	cin >> N;

	while (N--)
	{
		cin >> card;

		cout << cards[card + CARD_MAX] << ' ';
	}
}