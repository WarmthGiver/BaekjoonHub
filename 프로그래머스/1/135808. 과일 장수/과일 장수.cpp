#include <vector>

#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    sort(score.rbegin(), score.rend());
    
    int result(0), size(score.size());
    
    for (int i(m - 1); i < size; i += m)
    {
        result += m * score[i];
    }
    
    return result;
}