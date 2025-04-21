
#include <iostream>
#include <deque>
#include <vector>

using namespace std;

/**
 * @brief 
 * The idea: calculate the sum[i...i+k] for each arr[i], and find the index of minimum value.
 * It can be achieved by calculating a running sum of k numbers, using a deque to keep the k numbers before arr[i], and drop the earliest one when deque.size() > k,
 * and the running sum need to be adjusted.
 */

int main()
{
    int n, k;
    cin >> n >> k;
    std::deque<int> dq;
    std::vector<int> v(n);
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        
        sum += a;
        
        dq.push_back(a);
        if(dq.size() < k)
        {
            v[i] = -1;
        }
        else
        {
            if(dq.size() > k)
            {
                sum -= dq.front();
                dq.pop_front();
            }
            
            v[i] = sum;
        }
    }
    
    int result = v[0];
    int idx = 1;
    
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] > 0 && (v[i] < result || result < 0))
        {
            result = v[i];
            idx = i + 1;
        }
    }
    
    std::cout << idx - k + 1 << '\n';
    
    return 0;
}
