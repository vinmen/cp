/*
    https://codeforces.com/contest/1944/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;
    int k;
    int max = 0;
    int min = 0;

    cin >> t;
    while (t--)
    {        
        cin >> n;
        cin >> k;

        if(k >= n - 1)
            cout << 1 << endl;        
        else
            cout << n << endl;        
    }

    return 0;
}