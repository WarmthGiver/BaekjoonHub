#include <iostream>

#include <string>

using namespace std;

string fibonacci(short n)
{
	string current{ '0' }, current_old, increment{ '1' };

	while (--n >= 0)
	{
		current_old = current;

		int current_length(current.length()), carry(0);

		for (int i = 0; i < current_length; ++i)
		{
			int sum = carry + current[i] + increment[i] - 96;

			carry = sum >= 10;

			current[i] = 48 + sum % 10;
		}

		increment = current_old;

		if (carry)
		{
			current.reserve(current_length + 1);

			current.push_back('1');

			increment.reserve(current_length + 1);

			increment.push_back('0');
		};
	}

	reverse(current.begin(), current.end());

	return current;
}

int main()
{
	short N;

	cin >> N;

	cout << fibonacci(N);
}