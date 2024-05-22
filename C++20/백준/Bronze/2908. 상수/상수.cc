#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);

	std::cin.tie(0);

	std::string A, B;

	std::cin >> A >> B;

	std::reverse(A.begin(), A.end());

	std::reverse(B.begin(), B.end());

	std::cout << (A > B ? A : B);
}