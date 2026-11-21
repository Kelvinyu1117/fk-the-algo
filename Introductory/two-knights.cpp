#include <iostream>


int main() {
    unsigned long long k;
    std::cin >> k;
    for(unsigned long long i = 1; i <= k; i++) {
        std::cout << i*i * (i*i - 1)/2 - 4 * (i - 1) * (i - 2) << '\n';
    }

    return 0;
}
