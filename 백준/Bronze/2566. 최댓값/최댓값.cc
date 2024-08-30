#include <iostream>

int i, j, n, m, x, y;

int main()
{
    std::ios_base::sync_with_stdio(0);

    std::cin.tie(0);

    for (i = 0; i < 9; ++i)
    {
        for (j = 0; j < 9; ++j)
        {
            std::cin >> n;

            if (n >= m)
            {
                m = n;

                x = i;

                y = j;
            }
        }
    }

    std::cout << m << '\n' << x + 1 << ' ' << y + 1;
}