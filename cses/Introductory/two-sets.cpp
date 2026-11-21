#include <iostream>
#include <vector>

int main() {
    long long n;
    std::cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum & 1) {
        std::cout << "NO\n";
    } else {
        std::vector<long long> a;
        std::vector<long long> b;
        auto target = sum/2;
        for(long long i = n; i >= 1; i--) {
            if (target >= i) {
                a.push_back(i);
                target -= i;
            } else {
                b.push_back(i);
            }
        }

        std::cout << "YES\n";
        std::cout << a.size() << '\n';
        for(auto i: a) {
            std::cout << i << ' ';
        }
        std::cout << '\n';
        std::cout << b.size() << '\n';
        for(auto i: b) {
            std::cout << i << ' ';
        }
    }

    return 0;
}
