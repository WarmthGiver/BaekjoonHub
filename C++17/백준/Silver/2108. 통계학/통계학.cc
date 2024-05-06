#include <iostream>

#include <algorithm>

#include <cmath>

using namespace std;

int numbers[500001];

int numbersSum = 0;

int numberCounts[8001] = { 0, };

int mostNumberCount = 0;

int firstMostNumber;

int secondMostNumber;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int numbersCount;

	cin >> numbersCount;

	for (int i = numbersCount - 1; i >= 0; --i)
	{
		int number;

		cin >> number;

		numbers[i] = number;

		numbersSum += number;

		int numberCount = ++numberCounts[number + 4000];

		if (numberCount > mostNumberCount)
		{
			mostNumberCount = numberCount;

			firstMostNumber = number;

			secondMostNumber = 4001;
		}

		else if (numberCount == mostNumberCount)
		{
			if (number < firstMostNumber)
			{
				secondMostNumber = firstMostNumber;

				firstMostNumber = number;
			}

			else if (number < secondMostNumber)
			{
				secondMostNumber = number;
			}
		}
	}

	sort(numbers, numbers + numbersCount);

	cout << round((double)numbersSum / numbersCount) + 0.0 << '\n';

	cout << numbers[numbersCount / 2] << '\n';

	cout << (secondMostNumber == 4001 ? firstMostNumber : secondMostNumber) << '\n';

	cout << numbers[numbersCount - 1] - numbers[0];
}