#include<iostream>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int N;

	std::cin >> N;

	std::cout << (1 << N);
}