#include <iostream>
#include <vector>
using namespace std;
// AtCoder Beginner Contest 096
int main()
{
    int h, w;
    cin >> h >> w;
    
    std::vector<std::vector<char>> grid(h + 1, std::vector<char>(w + 1, '.'));
    int si, sj;
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            std::cin >> grid[i][j];
        }
    }
    
    
    for(int i = 1; i < h; i++) {
        for(int j = 1; j < w; j++) {
            if (grid[i][j] == '#' && grid[i][j - 1] != '#' && grid[i - 1][j] != '#' && grid[i][j + 1] != '#' && grid[i + 1][j] != '#') {
                cout << "No";
                return 0;
            }
        }
    }
    
    cout << "Yes";
    return 0;
}
