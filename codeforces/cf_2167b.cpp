
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int n;
    string s1;
    string s2;
    bool match = true;

    cin >> t;
    while (t--) {
        match = true;
        cin >> n;
        cin >> s1 >> s2;
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for (int i = 0; i < n; i++) {
            if(s1[i] != s2[i]) {
                cout << "NO" << endl;
                match = false;
                break;
            }            
        }
        if(match) {
            cout << "YES" << endl;
        }
    }    

    return 0;
}