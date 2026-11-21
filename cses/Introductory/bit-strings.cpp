#include <iostream>
#include <math.h>

int main() {
    unsigned long long n;
    
    std::cin >> n;
    long long mod = 1e9 + 7;
    long long res = 1;
    long long base = 2;
    
    while(n > 0) {
        if(n & 1) {
            res = res * base % mod;
        }
        
        base = base * base % mod;
        n >>= 1;
    }
    
    std::cout << res << '\n';

    return 0;
}
