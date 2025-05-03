
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while(t--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::string r;
        std::cin >> s;
        r = s;
        std::reverse(r.begin(), r.end());
        if(k == 0 && s >= r) {
            std::cout << "NO\n";
            continue;
        }
        
        std::unordered_map<int, int> mp;
        for(auto c: s) {
            mp[c]++;
        }
        
        if(mp.size() == 1) {
            std::cout << "NO\n";
            continue;
        }
        
        std::cout << "YES\n";
    }
    
    return 0;
}
