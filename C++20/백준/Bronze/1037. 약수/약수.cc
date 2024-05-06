#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int divisorsCount;

	cin >> divisorsCount;

	int divisorMin = 1000000;

	int divisorMax = 1;

	while(divisorsCount--)
	{
		int divisor;

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