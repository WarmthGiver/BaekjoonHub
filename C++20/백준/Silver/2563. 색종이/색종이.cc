#include <iostream>

int N, x, y, i, j, paper[100][100], area;

int main()
{
    std::ios_base::sync_with_stdio(0);

    std::cin.tie(0);

    std::cin >> N;

    while (N--)
    {
        std::cin >> x >> y;

        for (i = x + 10; i-- > x;)
        {
            for (j = y + 10; j-- > y;)
            {
                if (!paper[i][j]++)
                {
                    ++area;
                }
            }
        }
    }

    std::cout << area;
}