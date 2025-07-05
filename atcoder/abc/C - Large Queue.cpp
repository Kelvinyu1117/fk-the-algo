#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <deque>
using namespace std;
int main()
{   
    int n;
    std::cin >> n;
    std::deque<std::pair<long long, long long>> q;
    for(int i = 0; i < n; i++) {
        int op;
        std::cin >> op;
        if (op == 1) {
            long long c, x;
            std::cin >> c >> x;
            q.push_back({c, x});
        } else {
            long long k;
            cin >> k;
            long long sum = 0;
            bool done = false;
            while(!q.empty() && k) {
                auto& [c, x] = q.front();
                if (c <= k) {
                    sum += c * x;
                    q.pop_front();
                    k -= c;
                } else {
                    sum += k * x;
                    c -= k;
                    k = 0;
                }
            }
            std::cout << sum << '\n';
        }
    }
    return 0;
}
