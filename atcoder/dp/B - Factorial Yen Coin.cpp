#include <iostream>

using namespace std;
int main()
{
    int f[11] = {0};
    f[0] = 1;
    for(int i = 1; i <= 10; i++) {
        f[i] = i * f[i - 1];
    }
    
    int p;
    std::cin >> p;
    
    int cnt = 0;
    for(int i = 10; i >= 1; i--) {
        while(p >= f[i]) {
            cnt++;
            p -= f[i];
        }
    }
    
    std::cout << cnt;
    
    
    return 0;
}
