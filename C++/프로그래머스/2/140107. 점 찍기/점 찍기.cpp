#include <cmath>

using namespace std;

long long solution(int k, int d)
{
    long long answer = 0;
    
    for (long long x(0); x <= d; x += k)
    {
        int y = sqrt(1ll * d * d - 1ll * x * x);
        
        answer += y / k + 1;
    }
    
    return answer;
}