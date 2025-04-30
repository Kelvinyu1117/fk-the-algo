#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    std::vector<long long> psum(n + 1);
    psum[0] = 0;
    for(int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        
        psum[i] = a + psum[i - 1];
    }
    
    long long x;
    cin >> x;
    
    long long cnt = n * (x / psum[n]);
    long long r = x % psum[n];
    
    long long i = 1;
    for(; i <= n; i++) {
        if(psum[i] > r) {
            break;
        }
    }
    
    std::cout << cnt + i;
    return 0;
}
