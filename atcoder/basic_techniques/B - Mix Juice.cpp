#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    int sum = std::accumulate(v.begin(), v.begin() + k, 0);
    
    std::cout << sum;
    
    return 0;
}
