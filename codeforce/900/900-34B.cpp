
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @brief 
 * Greedy approach: as Bob can at most carry m TV sets, implies that he can carry nothing, 
 * and we know that negative prices means the owner will pay Bob (income), and positive prices are costs,
 * so our strategy is to try to collect as many TV sets as possible with the negative prices (< m), and do nothing with the TV sets with positive price
 */

int main()
{
    int n, m;
    cin >> n >> m;
    
    std::vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    std::sort(v.begin(), v.end());
    
    if(v[0] >= 0)
    {
        std::cout << 0;
    }
    else
    {
        int sum = 0;
        for(int i = 0; i < m; i++)
        {
            if(v[i] < 0)
            {
                sum += -v[i];
            }
        }
        
        std::cout << sum;
    }
    return 0;
}
