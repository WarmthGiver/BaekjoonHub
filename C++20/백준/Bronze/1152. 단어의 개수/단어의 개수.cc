#include <iostream>

#include <string>

using namespace std;

int main()
{
	string S;

	getline(cin, S);

	int count = 1;

	if (S.front() == ' ')
	{
		--count;
	}

	if (S.back() == ' ')
	{
		--count;
	}

	for (char c : S)
	{
		if (c == ' ')
		{
			++count;
		}
	}

	cout << count;
}