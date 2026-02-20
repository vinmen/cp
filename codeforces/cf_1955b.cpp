#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int n, c, d;
    while(t--) {
        cin >> n >> c >> d;
        bool flag = false;
        vector<int> v(n * n);
        for(int i = 0; i < n * n ; i++)
            cin >> v[i];
            
        auto min = min_element(v.begin(), v.end()); 
        int a = *min;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {                
                auto it = find(v.begin(), v.end(), a + i * c + j * d);
                if (it == v.end()) {
                    flag = true;
                    break; 
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}