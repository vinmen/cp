/*
    recursive power calculation
*/

#include <iostream>
using namespace std;

int power(int base, int exp) {
    if(exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);        
}

int main() {
    int base;
    int exp;
    cin >> base >> exp;
    if(exp < 0)
        cout << "exp cannot be negative." << endl;
    cout << power(base, exp);
    return 0;
}