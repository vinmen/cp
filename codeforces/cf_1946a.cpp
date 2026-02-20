/*
    https://codeforces.com/contest/1946/problem/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    int n;

    cin >> t;
    while (t--)
    {               
        cin >> n; 
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        if(n == 1) {
            cout << 1 << endl;
            continue;
        }

        int op_count = 0; 
        int index = ceil((double) n / 2) - 1;
        sort(v.begin(), v.end());   
        int init_median = v[index];        
        
        for(int i = index; i < n; i++) {
            if(v[i] <= init_median + 1)
                op_count = op_count + init_median + 1 - v[i];            
        }
        cout << op_count << endl;            
    }

    return 0;
}