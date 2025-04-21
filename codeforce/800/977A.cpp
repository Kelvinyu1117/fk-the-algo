#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    
    for(int i = 0; i < k; i++) {
        int d = n % 10;
        
        if(d) {
            n--;
        } else {
            n /= 10;
        }
    }
    
    std::cout << n << '\n';
    
    return 0;
}
