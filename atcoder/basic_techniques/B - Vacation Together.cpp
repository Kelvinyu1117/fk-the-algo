#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, d;
    std::cin >> n >> d;
    std::vector<int> v(d, 0);
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        
        for(int j = 0; j < d; j++) {
            if (s[j] == 'x')
                v[j]++;
        }
    }
    
    int result = 0;
    int i = 0;
    while(i < d) {
        if (v[i] != 0) {
            i++;
            continue;
        }
        
        int j = i + 1;
        while(j < d && v[j] == 0) {
            j++;
        }
        
        result = std::max(result, j - i);
        
        i = j;
    }
    
    std::cout << result << '\n';
    
    return 0;
}
