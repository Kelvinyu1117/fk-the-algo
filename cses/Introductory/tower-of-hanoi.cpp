#include <iostream>
#include <vector>

void f(std::vector<std::pair<int, int>>& p, int n, int s, int d, int a) {
    if (n == 1) {
        p.push_back({s, d});
        return;
    }

    f(p, n - 1, s, a, d);
    p.push_back({s, d});
    f(p,n - 1,a, d, s);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> p;
    f(p, n, 1, 3, 2);
    std::cout << p.size() << '\n';
    for(auto [s, d]: p) {
        std::cout << s << " " << d << '\n';
    }
}
