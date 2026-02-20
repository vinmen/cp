
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n;
    int input;

    vector<int> data;

    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> input;
            data.push_back(input);
        }

        int swap_count = 0;
        int first_one = -1;
        int last_one = -1;        

        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == 1)
            {
                first_one = i;
                break;
            }
        }

        for (int i = data.size() - 1; i >= 0; i--)
        {
            if (data[i] == 1)
            {
                last_one = i;
                break;
            }
        }

        for (int i = first_one + 1; i < last_one; i++)
        {
            if (data[i] == 0)
                swap_count++;
        }

        cout << swap_count << endl;
        data.clear();
    }

    return 0;
}