#include <iostream>
#include <array>
int main() {
    std::array<int, 26> mp;
    mp.fill(0);
    int odd = 0;
    int even = 0;
    
    std::string s;
    std::cin >> s;
    for(auto c: s) {
        mp[c - 'A']++;
    }
    
    for(int i = 0; i < mp.size(); i++) {
        auto c = mp[i];
        if (c != 0) {
            if (c & 1) {
                odd++;
            } else {
                even++;
            }
        }
    }
    
    if(odd > 1) {
        std::cout << "NO SOLUTION";
    } else {
        std::string result;
        int odd_index = -1;
        for(int i = 0; i < mp.size(); i++) {
            auto c = mp[i];
            if (c != 0) {
                if (c & 1) {
                    odd_index = i;
                } else {
                    int cnt = c/2;
                    for(auto j = 0; j < cnt; j++) {
                        result.push_back('A' + i);
                    }
                }
            }
        }
        
        int odd_cnt = odd_index == -1? 0: mp[odd_index];
        for(int i = 0; i < odd_cnt; i++) {
            result.push_back('A' + odd_index);
        }
        for(int i = result.size() - odd_cnt - 1; i >= 0; i--) {
            result.push_back(result[i]);
        }
        std::cout << result << '\n';

    }

    
    return 0;
}
