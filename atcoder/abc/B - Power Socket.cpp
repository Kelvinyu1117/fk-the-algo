#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 1) {
        std::cout << 0;
        return 0;
    }
    bool done = false;
    int t = a;
    int cnt = 1;
    while(!done) {
        if (t >= b) {
            std::cout << cnt;
            done = true;
        } else {
            t += (a - 1);
            cnt++;
        }
    }    
    
    
    return 0;
}
