

#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;

int main() {
    int t;
    int n;
    int j;
    int k;
    int j_value;
 
    cin >> t;
    while (t--) {
        cin >> n; 
        cin >> j;
        cin >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i]; 
        
        j_value = v[j - 1];
        std::sort(v.begin(), v.end(), std::greater<int>());        

        int e = n - k;
        for (int i = 0; i < n; i++) {
            if(e == 0) {
                break;
            }
            if(v[i] < j_value) {
                e--;
            }
            else if(i > 0){
                if(v[i - 1] == v[i]) {
                    e--;
                }
            }              
        }

        if(e == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;        
    } 
    return 0;
}