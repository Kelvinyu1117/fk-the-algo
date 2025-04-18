#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n = 0;
        cin >> n;
        std::string s;
        cin >> s;
        int res = 1;
        int len = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) len = 1;
            else len++;
            
            res = std::max(res, len);
        }
        
        std::cout << res + 1 << '\n';
        
    }
 
    return 0;
}
