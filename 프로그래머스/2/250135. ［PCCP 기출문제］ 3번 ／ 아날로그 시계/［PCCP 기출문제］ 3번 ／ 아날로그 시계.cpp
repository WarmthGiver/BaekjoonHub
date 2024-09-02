using namespace std;

int solution(int h1, int m1, int s1, int h2, int m2, int s2) 
{
    int t1 = h1 * 3600 + m1 * 60 + s1;
    
    int t2 = h2 * 3600 + m2 * 60 + s2;
    
    int answer = t2 * 59 / 3600 + t2 * 719 / 43200 - t1 * 59 / 3600 - t1 * 719 / 43200;
    
    if (t1 < 43200 && t2 >= 43200)
    {
        --answer;
    }
    
    if (t1 % 3600 == 0)
    {
        ++answer;
    }
    
    return answer;
}