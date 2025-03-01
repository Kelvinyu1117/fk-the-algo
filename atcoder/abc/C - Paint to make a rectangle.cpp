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
    int m;
    cin >> n >> m;
    int hs = INT_MAX, he = 0, ws = INT_MAX, we = 0;
    std::vector<std::vector<char>> v(n, std::vector<char>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        
            if(v[i][j]  == '#') {
                hs = std::min(hs, i);
                he = std::max(he, i);
                ws = std::min(ws, j);
                we = std::max(we, j);
            }
        }
    }
    
    bool f = true;
    for(int i = hs; i <= he; i++) {
        for(int j = ws; j <= we; j++) {
            if(v[i][j] == '.') {
                f = false;
            }
        }
    }
    
    if(f) std::cout << "Yes";
    else std::cout << "No";
    return 0;
}
