#include <iostream>
#include <string>
using namespace std;
int main()
{
    // construction: [0, 0, ..., m, ...0]
    int t;
    std::cin >> t;
    while(t--) {
        long long n, m;
        std::cin >> n >> m;
        if(n == 1) {
            std::cout << 0 << '\n';
        } else if(n == 2){
            std::cout << m << '\n';
        } else {
            std::cout << 2 * m << '\n';
        }
    }
    return 0;
}
