#include <vector>

using namespace std;

vector<int> solution(int n, int s)
{
    vector<int> answer(n, s / n);
    
    if (n > s)
    {
        return {-1};
    }
    
    int remain(s % n);
    
    for (int i(n - remain); i < n; ++i)
    {
        ++answer[i];
    }
    
    return answer;
}