#include <iostream>

int main()
{
	int c[6], i = 6;

	while (i--)
	{
		std::cin >> c[i];
	}

	std::cout << (c[1] ^ c[3] ^ c[5]) << ' ' << (c[0] ^ c[2] ^ c[4]);
}