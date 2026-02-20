/*
    https://codeforces.com/contest/1948/problem/B
*/

#include <iostream>
#include <vector>

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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int x;
        int y;
        bool flag = false;
        int index = 0;

        while(index < v.size() - 1) {
            x = v[index];
            y = v[index + 1];

            if(x > y) {
                if(x > 9) {
                    v.erase(v.begin() + index);
                    v.insert(v.begin() + index, x % 10);
                    v.insert(v.begin() + index, x / 10);
                    index = 0;
                    continue;
                }
                else {
                    flag = true;
                    break;
                }            
            }
            index++; 
        }

        if(flag)       
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

// 71 77 28 39 46