#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = std::round(double(a)/b);
    
    std::cout << result << endl;
    return 0;
}
