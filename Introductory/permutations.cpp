#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    // note that n <= 3, has no solution (just list the examples out)
    // 1 2 3 4 5, 3 1 4 2 5
    // 1 2 3 4 5 6, 4 1 5 2 6 3
    // 1 2 3 4,  3 1 4 2
    if (n > 1 and n <= 3) {
        std::cout << "NO SOLUTION\n";
    } else {
        auto mid = n/2 + 1;
        for(int i = 1, j = mid; j <= n; i++) {
            if (j <= n) {
                std::cout << j << " ";
            }

            if (i < mid) {
                std::cout << i << " ";
            }
            j++;
        }
    }


    return 0;
}
