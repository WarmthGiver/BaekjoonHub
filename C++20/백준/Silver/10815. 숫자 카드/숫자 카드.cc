#include <iostream>

#include <bitset>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N, M, card;

	const int MAX(10000000);

	std::bitset<MAX * 2 + 1> cards;

	std::cin >> N;

	while (N--)
	{
		std::cin >> card;

		cards.set(card + MAX);
	}

	std::cin >> M;

	while (M--)
	{
		std::cin >> card;

		std::cout << cards.test(card + MAX) << ' ';
	}
}