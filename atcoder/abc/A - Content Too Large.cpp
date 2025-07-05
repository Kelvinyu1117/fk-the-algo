#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    int N, M;
    std::cin >> N >> M;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        int A;
        std::cin >> A;
        sum += A;
    }
    
    if (sum <= M) std::cout << "Yes";
    else std::cout << "No";
    return 0;
}
