#include <iostream>
 
using namespace std;
 
int main()
{
    int n = 0;
    cin >> n;
    int max_cnt = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cnt += b - a;
        max_cnt = std::max(max_cnt, cnt);
    }
    
    std::cout << max_cnt;
    return 0;
}
