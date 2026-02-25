#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
using namespace std;

// greedy on distances, min capacity = std::max(d1, ..., d_n - 1, d_n * 2), the last one for round trip.
int main()
{
    int t;
    std::cin >> t;
    while(t--) {
        int n, x;
        std::cin >> n >> x;
        std::vector<int> v(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        std::vector<int> dist(n + 1, 0);
        dist[0] = v[0];
        for(int i = 1; i < n; i++){
            dist[i] = v[i] - v[i - 1];
        }
        
        dist[n] = (x - v[n - 1]) * 2;
        
        std::cout << *std::ranges::max_element(dist) << '\n';
    }

    return 0;
}
