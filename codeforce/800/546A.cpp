#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    
    int cost = 0;
    for(int i = 1; i <= w; i++)
    {
        cost += k * i;
    }    
    
    if(cost > n)
        std::cout << cost - n << '\n';
    else
        std::cout << 0 << '\n';
    return 0;
}
