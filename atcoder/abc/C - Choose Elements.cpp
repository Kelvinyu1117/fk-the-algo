
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    std::vector<long long> a(n + 1), b(n + 1);
    std::vector<bool> dp1(n + 1, false), dp2(n + 1, false);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    dp1[1] = true;
    dp2[1] = true;
    
    for(int i = 2; i <= n; i++) {
        if(dp1[i - 1]) {
            if(abs(a[i - 1] - a[i]) <= k) dp1[i] = true;
            if(abs(a[i - 1] - b[i]) <= k) dp2[i] = true;
        }
        
        if(dp2[i - 1]) {
            if(abs(b[i - 1] - a[i]) <= k) dp1[i] = true;
            if(abs(b[i - 1] - b[i]) <= k) dp2[i] = true;
        }
    }
    
    if(dp1[n] || dp2[n]) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}
