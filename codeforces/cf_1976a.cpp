
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    int n; 
    string s;

    cin >> t;    
    while (t--)
    {
        string output = "YES";
        cin >> n;
        cin >> s;
        
        bool num_flag = false;
        bool letter_flag = false;    
        
        for(int i = 0; i < n; i++) {
            if(letter_flag && s[i] >= '0' && s[i] <= '9') {
                output = "NO";
                break;
            }
            else if(letter_flag && s[i] >= 'a' && s[i] <= 'z') {
                if(s[i] < s[i-1]) {
                    output = "NO";
                    break;
                }
            } 
            else if(num_flag && s[i] >= '0' && s[i] <= '9') {
                if(s[i] < s[i-1]) {
                    output = "NO";
                    break;
                }
            }          
            else if(s[i] >= 'a' && s[i] <= 'z') {
                letter_flag = true;
            } 
            else {
                num_flag = true;
            }           
        }

        cout << output << endl;
        
    }

    return 0;
}