#include <iostream>

#include <cmath>

int main()
{
	int a, b, c, max, sum;

	std::cin >> a >> b >> c;

	max = std::max({ a, b, c });

	sum = a + b + c;

	if (max * 2 >= sum)
	{
		sum = (sum - max) * 2 - 1;
	}

	std::cout << sum;
}