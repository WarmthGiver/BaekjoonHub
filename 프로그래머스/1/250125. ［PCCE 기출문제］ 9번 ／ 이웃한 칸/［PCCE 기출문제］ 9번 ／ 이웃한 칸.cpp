#include <string>

#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w)
{
    int answer = 0, n = board.size() - 1;
    
    if (h > 0 && board[h][w] == board[h - 1][w])
    {
        ++answer;
    }
    
    if (w > 0 && board[h][w] == board[h][w - 1])
    {
        ++answer;
    }
    
    if (h < n && board[h][w] == board[h + 1][w])
    {
        ++answer;
    }
    
    if (w < n && board[h][w] == board[h][w + 1])
    {
        ++answer;
    }
    
    return answer;
}