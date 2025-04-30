#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    std::vector<long long> a(n);
    std::vector<long long> b(m);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    std::vector<long long> result_a(n);
    std::vector<long long> result_b(m);
    
    for(int i = 1, p = 0, q = 0; i <= n + m; i++) {
        if(p < n && q < m) {
            if(a[p] < b[q]) {
                result_a[p++] = i;
            } else {
                result_b[q++] = i;
            }
        } else {
            if(p < n) {
                result_a[p++] = i;
            }
        
            if (q < m) {
                result_b[q++] = i;
            }
        }
    }
    
    for(auto i: result_a) {
        cout << i << ' ';
    }
    std::cout << '\n';
    for(auto i: result_b) {
        cout << i << ' ';
    }
    
    return 0;
}
