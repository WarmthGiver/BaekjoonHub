#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle)
{
    int triangle_size = triangle.size() - 1;
    
    for (int i = 1; i <= triangle_size; ++i)
    {
        triangle[i][0] += triangle[i - 1][0];
        
        triangle[i][i] += triangle[i - 1][i - 1];
    }
    
    for (int i = 2; i <= triangle_size; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            int left = triangle[i - 1][j - 1];
            
            int right = triangle[i - 1][j];
            
            triangle[i][j] += left > right ? left : right;
        }
    }
    
    int answer = 0;
    
    for (int i = 0; i <= triangle_size; ++i)
    {
        if (answer < triangle[triangle_size][i])
        {
            answer = triangle[triangle_size][i];
        }
    }
    
    return answer;
}