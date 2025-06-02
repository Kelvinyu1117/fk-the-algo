#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while(t--) {
      long long l, r;
      std::cin >> l >> r;
      if(2 * l > r) {
          std::cout << -1 << " " << -1 << '\n';
      } else {
          std::cout << l << " " << 2 * l << '\n';
      }
    }
    return 0;
}
