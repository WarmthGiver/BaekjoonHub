#include <iostream>

int N, M, i, j, A[100][100], b;

int main()
{
    std::ios_base::sync_with_stdio(0);

    std::cin.tie(0);

    std::cin >> N >> M;

    for (i = N; i-- > 0;)
    {
        for (j = M; j-- > 0;)
        {
            std::cin >> A[i][j];
        }
    }

    for (i = N; i-- > 0;)
    {
        for (j = M; j-- > 0;)
        {
            std::cin >> b;

            std::cout << A[i][j] + b << ' ';
        }

        std::cout << '\n';
    }
}