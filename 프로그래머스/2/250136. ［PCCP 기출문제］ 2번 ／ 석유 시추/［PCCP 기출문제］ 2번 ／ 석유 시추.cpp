#include <algorithm>

#include <stack>

#include <utility>

#include <vector>

using namespace std;

int solution(vector<vector<int>> land)
{
    int y_max = land.size() - 1, x_max = land[0].size() - 1;

    stack<pair<int, int>> nodes;

    vector<int> oils(x_max + 1, 0);

    auto check_oil = [&](int y, int x) -> bool
    {
        if (land[y][x])
        {
            land[y][x] = 0;

            nodes.push({ y, x });

            return true;
        }

        return false;
    };

    for (int y = 0; y <= y_max; ++y)
    {
        for (int x = 0; x <= x_max; ++x)
        {
            if (check_oil(y, x))
            {
                int oil = 0, x_range_min = x, x_range_max = x;

                do
                {
                    auto [node_y, node_x] = nodes.top();

                    nodes.pop();

                    ++oil;

                    if (node_y > 0)
                    {
                        check_oil(node_y - 1, node_x);
                    }

                    if (node_y < y_max)
                    {
                        check_oil(node_y + 1, node_x);
                    }

                    if (node_x > 0)
                    {
                        if (check_oil(node_y, node_x - 1) && x_range_min > node_x - 1)
                        {
                            x_range_min = node_x - 1;
                        }
                    }

                    if (node_x < x_max)
                    {
                        if (check_oil(node_y, node_x + 1) && x_range_max < node_x + 1)
                        {
                            x_range_max = node_x + 1;
                        }
                    }
                }
                while (nodes.size());

                for (int i = x_range_min; i <= x_range_max; ++i)
                {
                    oils[i] += oil;
                }
            }
        }
    }

    return *max_element(oils.begin(), oils.end());
}