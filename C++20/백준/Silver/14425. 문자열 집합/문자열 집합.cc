#include <iostream>

#include <unordered_set>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N, M, intersectionCount(0);

	std::cin >> N >> M;

	std::string inputString;

	std::unordered_set<std::string> S;

	while (N--)
	{
		std::cin >> inputString;

		S.insert(inputString);
	}

	while (M--)
	{
		std::cin >> inputString;

		intersectionCount += S.count(inputString);
	}

	std::cout << intersectionCount;
}