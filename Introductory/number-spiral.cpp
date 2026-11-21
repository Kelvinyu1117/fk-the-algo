#include <iostream>


int main() {
    long long t;
    std::cin >> t;
    
    while(t--) {
        long long x, y;
        std::cin >> y >> x;
        auto n = std::max(x, y);
        auto inner = (n - 1) * (n - 1);
        auto outer = n * n;

        if (n % 2 == 0) {
            if(x == n) {
                std::cout << inner + y << '\n';
            } else{
                std::cout << outer - x + 1 << '\n';
            }
        } else {
            if(y == n) {
                std::cout << inner + x << '\n';
            } else {
                std::cout << outer - y + 1 << '\n';
            }
        }

    }
    return 0;
}
