
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    int n;
    int input;
    int sum = 0;

    vector<int> v;

    cin >> t;
    while (t--)
    {

        cin >> n;
        while (n--)
        {
            sum = 0;
            cin >> input;
            v.push_back(input);
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] < 0)
                    sum = sum + (v[i] * -1);
                else
                    sum = sum + v[i];
            }
        }
        cout << sum << endl;
        v.clear();
    }

    return 0;
}