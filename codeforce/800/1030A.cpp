#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int easy_cnt = 0;
    int hard_cnt = 0;
    
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a) hard_cnt++;
        else easy_cnt++;
    }
    
    if(hard_cnt > 0) std::cout << "HARD";
    else std::cout << "EASY";
    
    return 0;
}
