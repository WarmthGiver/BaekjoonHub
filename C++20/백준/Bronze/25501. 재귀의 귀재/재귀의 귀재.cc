#include <iostream>

#include <cstring>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int T;

	std::cin >> T;

	while (--T >= 0)
	{
		char S[1001];

		std::cin >> S;

		int i(0), j(strlen(S) - 1);

		for (; i < j && S[i] == S[j]; ++i, --j);

		std::cout << (i >= j) << ' ' << i + 1 << '\n';
	}
}