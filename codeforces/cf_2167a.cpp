
#include <iostream>
using namespace std;

int main() {
    int t;
    int a;
    int b;
    int c;
    int d;

    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        if(a == b && a == c && a == d) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}