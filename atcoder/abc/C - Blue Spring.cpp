#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;


int main()
{
    unsigned long long n, d, p;
    std::cin >> n >> d >> p;
    std::vector<unsigned long long> fs(n);
    for(int i = 0; i < n; i++) {
        std::cin >> fs[i];
    }
    
    std::sort(fs.begin(), fs.end());
    std::vector<unsigned long long> psum(n, 0);
    psum[0] = fs[0];
    for(int i = 1; i < n; i++) {
        psum[i] = psum[i - 1] + fs[i];
    }
    
    // 5 /2 => 3 
    // [1, 3, 6, 6, 7]
    // [1, 4. 10, 16, 23]
    // 0: cost = 23
    // 1: cost = 1 * 10 + 13 = 20
    // 2: cost = 2 * 10 + 1 = 21
    
    unsigned long long max_day_passes = std::ceil(n * 1.0/d);
    unsigned long long result = max_day_passes * p;
    for(auto i = 0ULL; i <= max_day_passes; i++) {
        long long j = n - 1 - i * d;
        if(j >= 0)
            result = std::min(result, i * p + psum[j]);   
        else
            result = std::min(result, i * p);
    }
    
    std::cout << result;
    
    
    return 0;
}
