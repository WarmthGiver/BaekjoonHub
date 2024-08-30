#include <iostream>

#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);

	std::cin.tie(0);

	std::string S;

	getline(std::cin, S);

	int count = 1;

	for (char c : S)
	{
		if (c == ' ')
		{
			++count;
		}
	}

	if (S.front() == ' ')
	{
		--count;
	}

	if (S.back() == ' ')
	{
		--count;
	}

	std::cout << count;
}