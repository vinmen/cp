
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    int n;
    long i;
    long long sum;
    double square;
    long long squareL;

    cin >> t;
    while (t--) {
        cin >> n;
        while (n--) {
            cin >> i;
            sum = sum + i;
        }
        square = sqrt(sum);
        squareL = (long long)square;

        if ((squareL * squareL) == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        sum = 0;
    }

    return 0;
}