#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int p = 0;
    int aa[4] = {0, 0, 0, 0};
    for(int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        
        aa[0]++;
        int aat[4];
        std::memcpy(aat, aa, 4 * sizeof(int));
        
        for(int j = 0; j < 4; j++) {
            int t = aat[j];
            aa[j] -= t;
            if (j + a < 4) aa[j + a] += t;
            else p += t;
        }
    }
    
    std::cout << p;
    
    return 0;
}
