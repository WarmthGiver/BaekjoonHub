#include <iostream>

#include <string.h>

using namespace std;

pair<bool, int> recursion(const char *s, int l, int r)
{
	if (l >= r)
	{
		return { 1, l + 1 };
	}

	else if (s[l] != s[r])
	{
		return { 0, l + 1 };
	}

	else
	{
		return recursion(s, l + 1, r - 1);
	}
}

pair<bool, int> isPalindrome(const char *s)
{
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int T;

	std::cin >> T;

	while (--T >= 0)
	{
		char S[1001];

		cin >> S;

		auto result = isPalindrome(S);

		cout << result.first << ' ' << result.second << '\n';
	}
}