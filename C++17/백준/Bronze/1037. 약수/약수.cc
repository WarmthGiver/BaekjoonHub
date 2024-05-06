#include <iostream>

using namespace std;

int main()
{
	int divisorsCount;

	cin >> divisorsCount;

	int divisorMin = 1000000;

	int divisorMax = 1;

	int divisor;

	for (int i = divisorsCount; i > 0; --i)
	{
		cin >> divisor;

		if (divisor < divisorMin)
		{
			divisorMin = divisor;
		}

		if(divisor > divisorMax)
		{
			divisorMax = divisor;
		}
	}

	cout << divisorMin * divisorMax;
}