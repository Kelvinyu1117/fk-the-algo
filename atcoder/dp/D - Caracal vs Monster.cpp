#include <iostream>
#include <unordered_map>
using namespace std;
long long solve(long long h, std::unordered_map<long long, long long>& dp) {
    if(auto it = dp.find(h); it != dp.end()) return it->second;
    if(h == 1) return dp[1] = 1;
    if(h == 2) return dp[2] = 3;
    return dp[h] = solve(h/2, dp) + solve(h/2, dp) + 1;
}
int main()
{
    long long h;
    cin >> h;
    std::unordered_map<long long, long long> dp;
    std::cout << solve(h, dp);
    
    return 0;
}
