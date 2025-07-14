
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    // all use a
    // all use b
    // use some a and b
    
    int c_a = n * a;
    int c_b = std::ceil(n * 1.0/m) * b;
    int c_c = 0;
    auto r = n % m;
    auto q = n / m;
    
    c_c = q * b + r * a;
    
    std::cout << std::min({c_a, c_b, c_c}) << '\n';
    
    
    return 0;
}
