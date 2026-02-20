
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    int n;

    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << *std::max_element(a.begin(), a.end()) << endl;    
    }

    return 0;
}