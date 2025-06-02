#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;
    std::vector<int> dgs(d + 1, 0);
    for(int i = k; i <= d; i += k) {
        dgs[i]++;    
    }
    for(int i = l; i <= d; i += l) {
        dgs[i]++;    
    }
    for(int i = m; i <= d; i += m) {
        dgs[i]++;    
    }
    for(int i = n; i <= d; i += n) {
        dgs[i]++;    
    }
    
    int cnt = 0;
    for(int i = 1; i <= d; i++) {
        if(dgs[i])
            cnt++;
    }
    
    std::cout << cnt;
 
    return 0;
}
