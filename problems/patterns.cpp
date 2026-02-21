/*
    print star patterns
*/

#include <iostream>
using namespace std;

void nForest(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }	
}

void nRightTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }	
}

int main() {
    int n;
    cin >> n;
    nForest(n);
    cout << endl;
    nRightTriangle(n);

    return 0;
}