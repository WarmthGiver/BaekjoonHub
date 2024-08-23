#include <string>

#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks)
{
    int currnet_health = health;
    
    int attacks_size = attacks.size(), time = 0;
    
    for (int i = 0; i < attacks_size; ++i)
    {
        time = attacks[i][0] - time - 1;
        
        currnet_health += bandage[1] * time;
        
        if (bandage[0] <= time)
        {
            currnet_health += time / bandage[0] * bandage[2];
        }
        
        if (currnet_health > health)
        {
            currnet_health = health;
        }
        
        currnet_health -= attacks[i][1];
        
        if (currnet_health <= 0)
        {
            return -1;
        }
        
        time = attacks[i][0];
    }
    
    return currnet_health;
}