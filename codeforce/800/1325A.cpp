#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while(t--) {
        int x;
        std::cin >> x;
        if(x & 1) {
            std::cout << 1 << " " << x - 1 << '\n';
        } else {
            std::cout << x/2 << " " << x/2 << '\n';
        }
    }
    return 0;
}
