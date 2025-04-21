#include <iostream>
using namespace std;
int main()
{
    unsigned long long n;
    cin >> n;
    int cnt4 = 0;
    int cnt7 = 0;
    int non = 0;
    while(n) {
        auto digit = n % 10;
        if(digit == 4) cnt4++;
        else if(digit == 7) cnt7++;
        else {
            non++;
        }
        
        n /= 10;
    }
    
    if(cnt4 + cnt7 == 4 || cnt4 + cnt7 == 7)
        std::cout << "YES";
    else
        std::cout << "NO";
    
    
    return 0;
}
