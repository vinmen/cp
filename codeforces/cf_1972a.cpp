
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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin >> b[i];
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > b[i]) {
                for(int j = n - 1; j > i; j--) {
                    a[j] = a[j - 1];
                }
                a[i] = b[i];
                count++;
            }
        }
        
        cout << count << endl;  
    }

    return 0;
}