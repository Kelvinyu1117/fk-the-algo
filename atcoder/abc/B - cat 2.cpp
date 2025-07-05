#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;
int main()
{   
    int N;
    std::cin >> N;
    std::unordered_set<std::string> st;
    std::vector<std::string> v;
    for(int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;
        v.push_back(s);
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if (i == j) continue;
            
            st.insert(v[i] + v[j]);
        }
    }
    
    std::cout << st.size();
    return 0;
}
