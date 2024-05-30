#include <iostream>

int main()
{
	int x0, y0, x1, y1, x2, y2;

	std::cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

	std::cout << (x0 ^ x1 ^ x2) << ' ' << (y0 ^ y1 ^ y2);
}