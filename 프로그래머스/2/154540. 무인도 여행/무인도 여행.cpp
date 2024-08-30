#include <algorithm>

#include <string>

#include <vector>

using namespace std;

int maps_size_y, maps_size_x;

int search(vector<string>& maps, int y, int x)
{
    if (0 > y || y >= maps_size_y || 0 > x || x >= maps_size_x || maps[y][x] == 'X')
    {
        return 0;
    }

    int day(maps[y][x] - '0');

    maps[y][x] = 'X';

    day += search(maps, y + 1, x);

    day += search(maps, y - 1, x);

    day += search(maps, y, x - 1);

    day += search(maps, y, x + 1);

    return day;
}

vector<int> solution(vector<string> maps)
{
    vector<int> answer;

    maps_size_y = maps.size();

    maps_size_x = maps[0].size();

    for (int y(0); y < maps_size_y; ++y)
    {
        for (int x(0); x < maps_size_x; ++x)
        {
            int day(search(maps, y, x));

            if (day)
            {
                answer.push_back(day);
            }
        }
    }

    if (answer.empty())
    {
        answer.push_back(-1);
    }

    else
    {
        sort(answer.begin(), answer.end());
    }

    return answer;
}