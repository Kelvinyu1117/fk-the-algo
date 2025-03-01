#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <string>
#include <map>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    
    int cnt = 0;
    std::map<std::pair<int, int>, int> mp;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if(u == v) {
            cnt++;
        } else {
            if(u > v) std::swap(u, v);
            mp[{u, v}]++;
        }
    }
    
    for(auto [k, v]: mp) {
        cnt += (v - 1);
    }
    std::cout << cnt;
    return 0;
}
