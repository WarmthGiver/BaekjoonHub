#include <iostream>

char words[5][16];

int main()
{
    std::ios_base::sync_with_stdio(0);

    std::cin.tie(0);

    int i, j;

    for (i = 0; i < 5; ++i)
    {
        std::cin >> words[i];
    }

    for (i = 0; i < 15; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            if (words[j][i] != '\0')
            {
                std::cout << words[j][i];
            }
        }
    }
}