#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// AtCoder Beginner Contest 258
int main()
{
    int n, q;
    cin >> n >> q;
    std::vector<char> dq;
    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        dq.push_back(c);
    }
    
    int shift = 0;
    for(int i = 0; i < q; i++) {
        int a, x;
        cin >> a >> x;
        if(a == 1) {
            shift = (shift + n - x) % n;
        } else {
            cout << dq[(shift + x - 1) % n] << '\n';
        }
    }
    
    return 0;
}
