#include <iostream>

using namespace std;

class AscendingArray
{
private:

	int datas[1001] = { 0 };

	int size = 0;

public:

	void Insert(int data)
	{
		int i = 0;

		for (; i < size; ++i)
		{
			if (data < datas[i])
			{
				for (int j = size; j > i; --j)
				{
					datas[j] = datas[j - 1];
				}

				break;
			}
		}

		datas[i] = data;

		++size;
	}

	int operator[](int index)
	{
		return datas[index];
	}
};

AscendingArray integers;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n = 5, sum = 0;

	for (int i = n; i--;)
	{
		int integer;

		cin >> integer;

		integers.Insert(integer);

		sum += integer;
	}

	cout << sum / n << '\n' << integers[n * 0.5];
}