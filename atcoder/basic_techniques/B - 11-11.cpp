#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

bool all_digit_same(int n) {
    int d = n % 10;
    while(n) {
        int dd = n % 10;
        if (dd != d) return false;
        d = dd;
        n /= 10;
    }
    
    return true;
}


int main()
{
    int n;
    std::cin >> n;
    int result = 0;
    for(int i = 1; i <= n; i++) {
        int d;
        std::cin >> d;
        
        if(i >= 10 && !all_digit_same(i)) continue; 
        
        int t1 = i % 10;
        int t2 = t1 * 10 + t1;
        if (d >= t1)
            result++;
        
        if(d >= t2)
            result++;
            
        // std::cout << i << " " << result << " " << d << " " << t1 << " " << t2 << '\n';
    }
    
    std::cout << result;
    return 0;
}
