#include <iostream>
 
using namespace std;
 
int main()
{
    long long n = 0;
    cin >> n;
    if(n % 2 == 0) {
        std::cout << n/2;
    } else {
        std::cout << (n - 1)/2 - n;
    }
    return 0;
}
