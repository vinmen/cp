
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
        if(n % 4 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}