#include <utility>

#include <vector>

using namespace std;

int n, m;

bool find_oil(vector<vector<int>>& land, int y, int x, int& oil, pair<int, int>& x_range)
{
    if (y < 0 || y >= n || x < 0 || x >= m || land[y][x] == 0)
    {
        return false;
    }

    land[y][x] = 0;

    ++oil;

    find_oil(land, y - 1, x, oil, x_range);

    find_oil(land, y + 1, x, oil, x_range);

    if (find_oil(land, y, x - 1, oil, x_range))
    {
        if (x_range.first > x - 1)
        {
            x_range.first = x - 1;
        }
    }

    if (find_oil(land, y, x + 1, oil, x_range))
    {
        if (x_range.second < x + 1)
        {
            x_range.second = x + 1;
        }
    }

    return true;
}

int solution(vector<vector<int>> land)
{
    int answer = 0;

    n = land.size(), m = land[0].size();

    vector<int> oils(m, 0);

    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < m; ++x)
        {
            int oil = 0;

            pair<int, int> x_range(x, x);

            if (find_oil(land, y, x, oil, x_range))
            {
                for (int i = x_range.first; i <= x_range.second; ++i)
                {
                    oils[i] += oil;
                }
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        if (answer < oils[i])
        {
            answer = oils[i];
        }
    }

    return answer;
}