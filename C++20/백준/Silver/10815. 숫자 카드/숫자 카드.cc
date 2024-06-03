#include <iostream>

#include <set>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N, M, card;

	std::set<int> cards;

	std::cin >> N;

	while (N--)
	{
		std::cin >> card;

		cards.insert(card);
	}

	std::cin >> M;

	while (M--)
	{
		std::cin >> card;

		std::cout << (cards.find(card) != cards.end()) << ' ';
	}
}