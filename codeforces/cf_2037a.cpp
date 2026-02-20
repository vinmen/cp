
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
        int twice = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1) {
            cout << twice << endl;
        } 
        else {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++) {
                if (a[i] == a[i + 1]) {
                    twice++;
                    i++;
                }
            }
            cout << twice << endl;
        }
    }

    return 0;
}