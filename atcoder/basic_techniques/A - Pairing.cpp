#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n = 4;
    std::unordered_map<int, int> mp;
    for(int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    
    bool done = false;
    int cnt = 0;
    while(!done)
    {
        done = true;
        for(auto& [k, v]: mp) {
            if (v >= 2) {
                v -= 2;
                cnt++;
                done = false;
            }
        }
    }
    
    std::cout << cnt;
    
    return 0;
}
