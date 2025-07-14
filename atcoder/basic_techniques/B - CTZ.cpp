#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; ; i++) {
        if (n & (1 << i)) {
            std::cout << i;
            return 0;
        }
    }
    
    
    
    return 0;
}
