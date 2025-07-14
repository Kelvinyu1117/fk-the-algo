 
#include <iostream>
using namespace std;
 
int main()
{
    std::string s;
    std::cin >> s;
    
    if (s[0] >= '5' && s[0] < '9')
        std::cout << ('9' - s[0]);
    else
        std::cout << s[0];
    
    for(int i = 1; i < s.length(); i++) {
        if(s[i] >= '5' && s[i] <= '9')
            std::cout << ('9' - s[i]);
        else
            std::cout << s[i];
    }
    
    
    return 0;
}
