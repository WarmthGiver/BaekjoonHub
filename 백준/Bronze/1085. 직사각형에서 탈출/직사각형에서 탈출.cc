#include <iostream>

#include <cmath>

int main()
{
	int x, y, w, h;

	std::cin >> x >> y >> w >> h;

	std::cout << std::min({ x, w - x, y, h - y });
}