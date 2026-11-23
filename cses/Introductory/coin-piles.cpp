#include <iostream>


int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long a, b;
        std::cin >> a >> b;
        
        long long sum = a + b;
        if (a == 0 && b == 0) {
            std::cout << "YES\n";
            continue;
        }

        if (a < 1 || b < 1 || sum % 3 != 0) {
            std::cout << "NO\n";
            continue;
        }
        
        if (a < b) std::swap(a, b);
        if (a > 2 * b) {
            std::cout << "NO\n";
            continue;
        }
        
        std::cout << "YES\n";
        // [1, 4 < 5] -> failed
        // [3, 3]. /2 = 1, mod 2 = 1
        // [1, 3-1] -> true
        // [2, 2], /2 = 1, mod 2 = 0
        // [0, 1], -> failed
        // 
    }

    return 0;
}
