#include <iostream>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    std::vector<bool> v(n + 1, false);    
    for(int i = 0; i < n - 1; i++) {
        int idx;
        std::cin >> idx; 
        v[idx] = true; 
    }
    bool done = false;
    for(int i = 1; i <= n && not done; i++) {
        if(not v[i]) {
            std::cout << i;
        }
    }   

    return 0;
}
