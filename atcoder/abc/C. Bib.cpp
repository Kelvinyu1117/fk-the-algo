#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <string>
#include <map>
using namespace std;


int main()
{
    int n;
    cin >> n;
    std::vector<int> p(n + 1);
    std::vector<int> q(n + 1);
    std::vector<int> q1(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> p[i];        
    }
    
    for(int i = 0; i < n; i++) {
        int qq;
        cin >> qq;
        q[qq] = i + 1;
        q1[i + 1] = qq;
    }
    
    for(int i = 1; i <= n; i++) {
        std::cout << q1[p[q[i]]] << ' ';
    }
    
    return 0;
}
