#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <string>
using namespace std;


int main()
{
    std::string s;
    cin >> s;
    int n = s.length();
    
    if(n <= 1) {
        std::cout << s;
        return 0;
    }
    
    std::vector<char> v(n);
    v[n - 1] = s[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        if(s[i] == 'W' && v[i + 1] == 'A')
        {
            v[i + 1] = 'C';
            v[i] = 'A';
        } else {
            v[i] = s[i];
        }
    }
    
    for(auto c: v) {
        std::cout << c;
    }
    
    return 0;
}
