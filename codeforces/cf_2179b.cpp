
#include <iostream>
#include <vector>
using namespace std;

/*
1
5
4 15 1 7 9
4 15 17 18 18
*/

int main() {
    int t;
    int n;       

    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)          
            cin >> v[i];        

        int gap1;
        int gap2;
        int gap_sum;
        int max_gap;
        for (int i = 0; i < n - 1; i++) { 
            cout << abs(v[i] - v[i + 1]) << "\t";
        }        
    }

    return 0;
}