#include <iostream>

int main()
{
	int x, y, w, h, minX, minY;

	std::cin >> x >> y >> w >> h;

	minX = x < w - x ? x : w - x;

	minY = y < h - y ? y : h - y;

	std::cout << (minX < minY ? minX : minY);
}