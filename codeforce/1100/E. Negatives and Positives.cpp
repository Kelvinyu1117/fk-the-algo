#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
#include <algorithm>
 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        std::vector<int> v(n);
        long long sum = 0;
        int negs = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < 0) {
                negs++;
                v[i] = -v[i];
            }
            
            sum += v[i];
        }
        
        sort(v.begin(), v.end());
        if(negs % 2) sum -= 2 * v[0];
        
        std::cout << sum << '\n';
    }
 
    return 0;
}
