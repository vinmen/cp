
/*
    Leetcode matrix spiral
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;        
        int loop = 0;        
        int n = matrix.size();
        int m = matrix[0].size();
        
        while(output.size() < n*m) {
            //top row
            for(int i = loop; i < m - loop; ++i) {
                output.push_back(matrix[loop][i]);
            }
            //right col
            for(int i = loop + 1; i < n - loop; ++i) {
                output.push_back(matrix[i][m - 1 - loop]);               
            }
            //bottom row
            for(int i = m - 2 - loop; i > loop; --i) {
                output.push_back(matrix[n - 1 - loop][i]);                
            }
            //left col
            for(int i = n - 1 - loop; i > loop; --i) {
                output.push_back(matrix[i][loop]);                
            }
            loop++;            
        }
 		return output;
    }

};

int main()
{
    //vector<vector<int>> input = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> input = {{3},{2}};
    Solution s;
    vector<int> output = s.spiralOrder(input);

    return 0;
}