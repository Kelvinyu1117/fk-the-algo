
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    
    while(t--) {
        int n, q;
        std::cin >> n >> q;
        std::vector<int> psum(n + 1);
        psum[0] = 0;
        
        for(int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            psum[i] = a + psum[i - 1];
        }
        
        for(int i = 0; i < q; i++) {
            int l, r, a;
            std::cin >> l >> r >> a;
           
            long long sum = psum[n] - (psum[r] - psum[l - 1]) + a * (r - l + 1);
            if(sum & 1) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        }
    }
    
    return 0;
}
