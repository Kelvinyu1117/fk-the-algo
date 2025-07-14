#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    int ans = -1;
    for(int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] > 1)
        {
            ans = v[i - 1] + 1; 
        }
    }
    
    
    if (ans == -1)
        std::cout << v[n - 1] + 1;
    else
        std::cout << ans;
    
    
    return 0;
}
