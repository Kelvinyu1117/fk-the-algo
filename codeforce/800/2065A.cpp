#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while(t--) {
        std::string s;
        std::cin >> s;
        int n = s.size();
        for(int i = 0; i < n - 2; i++) {
            std::cout << s[i];
        }
        std::cout << 'i' << '\n';
    }
    return 0;
}
