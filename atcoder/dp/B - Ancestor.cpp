#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    std::vector<int> mp(n + 3, 0);
    for(int i = 2; i <= n; i++) {
        cin >> mp[i];
    }
    
    int cnt = 0;
    while(n != 1) {
        n = mp[n];
        cnt++;
    }
    
    std::cout << cnt;
    
    
    return 0;
}
