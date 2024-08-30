#include <vector>

using namespace std;

vector<int> solution(int n, int s)
{
    if (n > s)
    {
        return {-1};
    }
    
    vector<int> answer(n, s / n);
    
    for (int i(n - s % n); i < n; ++i)
    {
        ++answer[i];
    }
    
    return answer;
}