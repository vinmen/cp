/*
    Print all sub arrays and max sum.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;   
    int k;
    cin >> n;
    cin >> k;

    int a[10];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int max_sum = INT_MIN;
    int current_sum = 0;

    for(int i = 0; i < n; i++) {
        current_sum = current_sum + a[i];
        if(max_sum < current_sum)
            max_sum = current_sum;
        if(current_sum < 0)
            current_sum = 0;
    } 
    int first = max_sum * pow(2, k);
    int second = pow(10, 9);

    cout << first;

    return 0;
}