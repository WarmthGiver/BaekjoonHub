#include <iostream>

#include <iomanip>

using namespace std;

void fibonacci(short n)
{
	const int size_max(233), carry_max(1000000000);

	int current[size_max]{ 0 }, current_old[size_max], increment[size_max]{ 1 }, size(1);

	while (--n >= 0)
	{
		copy(current, current + size, current_old);

		int carry(0);

		for (int i = 0; i < size; ++i)
		{
			current[i] += increment[i] + carry;

			carry = current[i] / carry_max;

			current[i] %= carry_max;
		}

		copy(current_old, current_old + size, increment);

		if (carry > 0)
		{
			current[size] = carry;

			increment[size] = 0;

			++size;
		}
	}

	cout << current[--size];

	while (--size >= 0)
	{
		cout << setfill('0') << setw(9) << current[size];
	}
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	short N;

	cin >> N;

	fibonacci(N);
}