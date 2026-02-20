/*
    https://codeforces.com/contest/1941/problem/A
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int n;
    int m;
    int k;
    vector<int> b;
    vector<int> c;
    int count;

    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n >> m >> k;
        vector<int> b(n);
        vector<int> c(m);

        for (int i = 0; i < n; i++) 
            cin >> b[i];

        for (int i = 0; i < m; i++)
            cin >> c[i];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(b[i] + c [j] <= k)
                    count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}