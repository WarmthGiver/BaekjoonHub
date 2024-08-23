#include <algorithm>

#include <string>

#include <vector>

using namespace std;

int to_index(const string& type)
{
    if (type == "code")
    {
        return 0;
    }
    
    if (type == "date")
    {
        return 1;
    }
            
    if (type == "maximum")      
    {
        return 2;
    }
            
    if (type == "remain")
    {
        return 3;
    }
    
    return -1;
}

int compare_by;

bool compare(const vector<int>& a, const vector<int>& b)
{
    return a[compare_by] < b[compare_by];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by)
{
    vector<vector<int>> answer;
    
    int data_size = data.size(), j = to_index(ext);
    
    for (int i = 0; i < data_size; ++i)
    {
        if (data[i][j] < val_ext)
        {
            answer.push_back(data[i]);
        }
    }
    
    compare_by = to_index(sort_by);
    
    sort(answer.begin(), answer.end(), compare);
    
    return answer;
}