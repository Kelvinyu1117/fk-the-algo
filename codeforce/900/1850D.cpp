#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        std::vector<int> v(n, 0);
        for(int i = 0; i < n; i++) {
            std::cin >> v[i];
        }
        
        std::sort(v.begin(), v.end());
        
        int cnt = 1;
        int result = 1;
        for(int i = 1; i < n; i++) {
            if(abs(v[i] - v[i - 1]) > k) {
                cnt = 1;
            } else {
                cnt++;
                result = std::max(result, cnt); 
            }
        }
        
        std::cout << n - result << '\n';
    }
    return 0;
}
