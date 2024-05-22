#include <iostream>

#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);

	std::cin.tie(0);

	int N = 100;

	while (N--)
	{
		std::string S;

		getline(std::cin, S);

		std::cout << S << '\n';
	}
}