#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <string>
using namespace std;


int main()
{
    int h, w, n;
    std::cin >> h >> w >> n;
    std::string t;
    std::cin >> t;
    std::vector<std::vector<char>> grid(h, std::vector<char>(w, 0));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            std::cin >> grid[i][j];
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(grid[i][j] == '.') {
                int row = i;
                int col = j;
                bool done = true;
                for(auto c: t) {
                    if(row < 0 || row >= h || col < 0 || col >= w) {
                        done = false;
                        break;
                    }
                    
                    if(grid[row][col] == '#') {
                        done = false;
                        break;
                    }
                    if(c == 'L')
                        col--;
                    if(c == 'R')
                        col++;
                    if(c == 'U')
                        row--;
                    if(c == 'D')
                        row++;
                }
                
                done = (row >= 0 && row < h && col >= 0 && col < w) && grid[row][col] == '.';
                if(done) cnt++;
            }
        }
    }
    std::cout << cnt << '\n';
    
    
    return 0;
}
