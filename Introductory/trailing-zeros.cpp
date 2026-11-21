#include <iostream>


int main (int argc, char *argv[]) {
    unsigned long long n;
    unsigned long long sum = 0;
    unsigned long long base = 5;
    
    std::cin >> n;
    while(n / base > 0) {
        sum += n / base;
        base *= 5;
    }

    std::cout << sum;

    return 0;
}
