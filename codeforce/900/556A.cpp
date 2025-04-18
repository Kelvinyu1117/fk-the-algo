#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int ones = 0;
    int zeros = 0;
    for(int i = 0; i < n; i++) {
        char a; cin >> a;
        if(a == '1') ones++;
        else zeros++;
    }
    
    if(ones == zeros) std::cout << 0;
    else if(ones > zeros) std::cout << ones - zeros;
    else std::cout << zeros - ones;
    return 0;
}
