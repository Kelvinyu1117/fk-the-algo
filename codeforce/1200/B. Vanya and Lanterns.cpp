
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    
    std::vector<int> lanterns(n);
    for(int i = 0; i < n; i++)
        std::cin >> lanterns[i];
        
    std::sort(lanterns.begin(), lanterns.end());
    int max_dist = INT_MIN;
    for(int i = 1; i < n; i++) {
        max_dist = std::max(max_dist, abs(lanterns[i] - lanterns[i - 1]));
    }
    
    std::cout << std::setprecision(10) << (std::max({max_dist/2.0, lanterns[0] - 0.0, l * 1.0 - lanterns[n - 1]})) << '\n';
    
    
    return 0;
}
