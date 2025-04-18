#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    std::vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    std::cout << abs(v[0] - v[1]) << " " << abs(v[0] - v[n - 1]) << '\n';
    for(int i = 1; i < n - 1; i++) {
        std::cout << std::min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])) << " " << std::max(abs(v[i] - v[n - 1]), abs(v[i] - v[0])) << '\n';
    }
    
    std::cout << abs(v[n - 1] - v[n - 2]) << " " << abs(v[0] - v[n - 1]) << '\n'; 
    
    return 0;
}
