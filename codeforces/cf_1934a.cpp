
#include <iostream>
#include <vector>
#include <algorithm>
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
        
        sort(v.begin(), v.end());
        cout << 2 * (v[n-1] + v[n-2] - v[1] - v[0]) << endl;           
    }

    return 0;
}