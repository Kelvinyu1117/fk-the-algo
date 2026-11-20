#include <iostream>


int main(){
    long long n;
    std::cin >> n;
    
    long long sum = 0;
    for(int i = 0, a = 0, b = 0; i < n; i++) {
        std::cin >> a;
        if(b != 0 && a < b) {
            sum += (b - a);
            a = b;
        }


        b = a;
    }

    std::cout << sum << '\n';
    return 0;
}
