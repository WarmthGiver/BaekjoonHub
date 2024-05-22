#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);

	std::cin.tie(0);

	std::string word;

	std::cin >> word;

	int time = 0, dial[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	for (const auto& c : word)
	{
		time += dial[c - 65];
	}

	std::cout << time;
}