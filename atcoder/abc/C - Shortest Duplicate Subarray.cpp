#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;


int main()
{
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int result = INT_MAX;
    std::unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        if(mp.find(v[i]) != mp.end()) {
            result = std::min(result, i - mp[v[i]] + 1);
        }
        
        mp[v[i]] = i;
    }
    
    if(result == INT_MAX)
        std::cout << -1;
    else
        std::cout << result;
    return 0;
}
