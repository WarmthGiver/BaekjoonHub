#include <iostream>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N, i(1);

	std::cin >> N;

	for (; i * i <= N; ++i);

	std::cout << i - 1;
}