#include <iostream>
#include <vector>
using namespace std;

// 2023秋（AtCoder Beginner Contest 325）
void dfs(std::vector<std::vector<char>>& grid, int h, int w, int i, int j) {
    if(i < 0 || i >= h || j < 0 || j >= w) return;
    if(grid[i][j] != '#') return;
    grid[i][j] = '.';
    
    int dir[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    
    for(int k = 0; k < 8; k++) {
        dfs(grid, h, w, i + dir[k][0], j + dir[k][1]);    
    }
}
int main()
{
    int h, w;
    cin >> h >> w;
    std::vector<std::vector<char>> grid(h, std::vector<char>(w, '.'));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(grid[i][j] == '#') {
                dfs(grid, h, w, i, j);
                cnt++;
            }
        }
    }
    
    std::cout << cnt << '\n';

    return 0;
}
