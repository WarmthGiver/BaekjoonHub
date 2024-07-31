#include <algorithm>

#include <queue>

#include <vector>

using namespace std;

struct cmp
{
    bool operator()(vector<int> a, vector<int> b)
    {
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>> jobs)
{
    int answer(0), jobs_size(jobs.size()), time(0);

    sort(jobs.begin(), jobs.end());

    priority_queue<vector<int>, vector<vector<int>>, cmp> pq;

    for (int i(0); i < jobs_size || !pq.empty();)
    {
        if (i < jobs_size && jobs[i][0] <= time)
        {
            pq.push(jobs[i++]);

            continue;
        }

        if (!pq.empty())
        {
            time += pq.top()[1];

            answer += time - pq.top()[0];

            pq.pop();
        }
        
        else
        {
            time = jobs[i][0];
        }
    }

    answer /= jobs_size;

    return answer;
}