
#include <iostream>
using namespace std;

int main() {
    int t;
    int a;
    int b;   

    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (a * b) + 1 << endl;        
    }

    return 0;
}