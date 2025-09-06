#include <iostream>
using namespace std;
 
int main()
{
    long long n, k, t;
    std::cin >> t;
    while(t--) {
        cin >> n >> k;
        long long lo = 1;
        long long hi = k * n;
        while(lo <= hi) {
            long long mid = (lo + hi)/2;
            long long cnt = mid - mid/n;
            
            if(cnt >= k)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        
        std::cout << lo << '\n';
    }
  
    
    
    return 0;
}
