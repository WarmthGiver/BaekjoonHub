#include <string>

#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks)
{
    const int health_max = health;
    
    int attacks_size = attacks.size(), time = 0;
    
    for (int i = 0; i < attacks_size; ++i)
    {
        time = attacks[i][0] - time - 1;
        
        health += bandage[1] * time;
        
        if (bandage[0] <= time)
        {
            health += time / bandage[0] * bandage[2];
        }
        
        if (health > health_max)
        {
            health = health_max;
        }
        
        health -= attacks[i][1];
        
        if (health <= 0)
        {
            return -1;
        }
        
        time = attacks[i][0];
    }
    
    return health;
}