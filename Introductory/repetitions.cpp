#include <iostream>
#include <string>



int main() {
    std::string s;
    std::cin >> s;
    auto n = s.length();
    
    auto max_cnt = 0ULL, curr_cnt = 0ULL;
    
    for(auto i = 0ULL, j = 0ULL; i < n; i++) {
        if(s[i] == s[j]) {
            curr_cnt++;
        } else {
            max_cnt = std::max(max_cnt, curr_cnt);
            curr_cnt = 1;
            j = i;
        }
    }

    std::cout << std::max(max_cnt, curr_cnt);

    return 0;
}
