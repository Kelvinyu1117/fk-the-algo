#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    
    std::cout << sum*1.0/n;
 
    return 0;
}
