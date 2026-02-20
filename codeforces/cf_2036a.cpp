
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    int n;     
    int i, j;
    bool perfect = true;
     
    cin >> t;    
    while (t--)
    {  
        i = 0;
        j = 0;
        perfect = true;        
        cin >> n; 
        vector<int> v(n);        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for(int i = 1; i < n; i++) {
            if(v[i] - v[i - 1] != 5 && v[i] - v[i - 1] != -5 && v[i] - v[i - 1] != 7 && v[i] - v[i - 1] != -7) {
                perfect = false;
                cout << "NO" << endl;
                break;
            }                
        }
        if(perfect)
            cout << "YES" << endl;            
    }
    return 0;
}