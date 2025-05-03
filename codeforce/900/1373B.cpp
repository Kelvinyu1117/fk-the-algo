
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    
    while(t--) {
        int cnt0 = 0;
        int cnt1 = 0;
        std::string s;
        cin >> s;
        
        for(auto c: s) {
            if(c == '0')
                cnt0++;
            else
                cnt1++;
        }
        
        if(cnt1 == 0 || cnt0 == 0) {
            std::cout << "NET\n";
        } else if(cnt1 > cnt0) {
            if(cnt0 & 1) {
                std::cout << "DA\n";
            } else {
                std::cout << "NET\n";
            }
            
        } else if(cnt1 < cnt0) {
            if(cnt1 & 1) {
                std::cout << "DA\n";
            } else {
                std::cout << "NET\n";
            }
        } else {
            if(cnt1 & 1) {
                std::cout << "DA\n";
            } else {
                std::cout << "NET\n";
            }
        }
        
    }
    
    
    return 0;
}
