#include <iostream>

#include <set>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N, M, intersectionCount(0);

	std::cin >> N >> M;

	std::string inputString;

	std::set<std::string> S;

	while (N--)
	{
		std::cin >> inputString;

		S.insert(inputString);
	}

	while (M--)
	{
		std::cin >> inputString;

		intersectionCount += S.find(inputString) != S.end();
	}

	std::cout << intersectionCount;
}