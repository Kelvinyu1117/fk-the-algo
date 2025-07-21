#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    std::string s;
    std::cin >> s;
    
    std::ranges::sort(s);
    
    std::cout << s;
    
    return 0;
}
