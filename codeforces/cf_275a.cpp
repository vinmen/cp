
#include <iostream>
using namespace std;

int main() {
  
    int g[3][3] = {{1,1,1},{1,1,1},{1,1,1}};

    int c;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c;
            for(int k = 0; k < c; k++) {
                g[i][j] = !g[i][j];
                if(i - 1 >= 0) {
                    g[i - 1][j] = !g[i - 1][j];
                }
                if(i + 1 <= 2) {
                    g[i + 1][j] = !g[i + 1][j];
                }
                if(j - 1 >= 0) {
                    g[i][j - 1] = !g[i][j - 1];
                }
                if(j + 1 <= 2) {
                    g[i][j + 1] = !g[i][j + 1];
                }
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << g[i][j];
        }
        cout << endl;
    }

    return 0;
}