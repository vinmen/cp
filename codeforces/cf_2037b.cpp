#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;

void solve(vector<int> v) {
    for(int i = 0; i < v.size() - 1; i++) {
        for(int j = i + 1; j < v.size(); j = j + 2) {
            if(v[i] * v[j] == v.size() - 2) {
                cout << v[i] << " " << v[j] << endl;
                return;
            }
        }
    }
}
 
int main() {
    int t;
    int n;
 
    cin >> t;
    while (t--) {
        cin >> n;        
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i]; 
        solve(v);
    } 
    return 0;
}