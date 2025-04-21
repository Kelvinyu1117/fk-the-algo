#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        std::cin >> v[i];
    }
    
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(v[i] >= v[k] && v[i] > 0) cnt++;
    }
    std::cout << cnt;
 
    return 0;
}
