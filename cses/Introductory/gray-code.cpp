#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int target = 1 << n;
    for(int i = 0; i < target; i++) {
        std::string result;
        int g = i ^ (i >> 1);
        for(int j = n - 1; j >= 0; j--) {
            if (g & (1 << j))
                result.push_back('1');
            else 
                result.push_back('0');
        }

        std::cout << result << '\n';
    }

    return 0;
}
