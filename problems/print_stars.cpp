/*
    print stars with out loop
*/

#include <iostream>

using namespace std;

void printStar(int n) {
    if(n == 0)
        return;

    cout << "*";
    printStar(--n);    
}

int main() {
    int n;
    cin >> n;
    printStar(n);
    return 0;
}