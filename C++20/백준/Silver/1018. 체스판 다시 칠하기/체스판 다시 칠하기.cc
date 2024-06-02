#include <iostream>

using namespace std;

int main()
{
	int N, M, sum, min = 32, i, j, k, l;

	char color;

	bool board[50][50]{}, isWhite;

	cin >> N >> M;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			cin >> color;

			if (color == 'W')
			{
				board[i][j] = 1;
			}
		}
	}

	for (i = 7; i < N; ++i)
	{
		for (j = 7; j < M; ++j)
		{
			isWhite = 0;

			sum = 0;

			for (k = i - 7; k <= i; ++k)
			{
				for (l = j - 7; l <= j; ++l)
				{
					if (board[k][l] != isWhite)
					{
						++sum;
					}

					isWhite = !isWhite;
				}

				isWhite = !isWhite;
			}

			if (sum > 32)
			{
				sum = 64 - sum;
			}

			if (sum < min)
			{
				min = sum;
			}
		}
	}

	cout << min;
}