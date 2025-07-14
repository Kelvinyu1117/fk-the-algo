#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        std::vector<char> left;
        std::vector<char> right;
    
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if(c == ')') {
                if(!right.empty()) {
                    right.pop_back();
                } else {
                    left.push_back(c);
                }
            } else {
                right.push_back(c);
            }
        }
        
        std::cout << left.size() << '\n';
    }   
    
    return 0;
}
