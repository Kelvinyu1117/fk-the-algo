#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        std::string s;
        cin >> s;
        
        if (s[0] == s.back()) {
            if (s[0] == 'A') {
                std::cout << "Alice\n";
            } else {
                std::cout << "Bob\n";
            }
        } else if (s[0] == 'A' && s.back() == 'B') {
            if(std::count(s.begin(), s.end(), 'B') == 1) {
                std::cout << "Alice\n";
            } else {
                std::cout << "Bob\n";
            }
        } else {
            if (n == 2) {
                std::cout << "Bob\n";
            } else {
                if (s[n - 2] == 'A') {
                    std::cout << "Alice\n";
                } else {
                    std::cout << "Bob\n";
                }
            }
        }
        
    }
    return 0;
}
