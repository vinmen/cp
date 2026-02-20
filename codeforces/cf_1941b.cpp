/*
    https://codeforces.com/contest/1941/problem/B
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int n;
    vector<int> v;

    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int j = 0; j < n; j++)
            cin >> v[j];

        int i = 0;
        bool possible = true;

        while (i < n - 2)
        {
            while() {
                
            }
            if (v[i] == 0)
            {
                i++;
                continue;
            }
            if (v[i + 1] <= 0 || v[i + 2] <= 0)
            {
                cout << "NO" << endl;
                possible = false;
                break;
            }

            v[i] = v[i] - 1;
            v[i + 1] = v[i + 1] - 2;
            v[i + 2] = v[i + 2] - 1;
        }
        if (possible)
            cout << "YES" << endl;      
    }

    return 0;
}