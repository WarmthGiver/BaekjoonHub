#include<iostream>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int a, b, c;

	std::cin >> a >> b >> c;

	if (a >= b + c)
	{
		a = b + c - 1;
	}

	else if (b >= c + a)
	{
		b = c + a - 1;
	}

	else if (c >= a + b)
	{
		c = a + b - 1;
	}

	std::cout << a + b + c;
}