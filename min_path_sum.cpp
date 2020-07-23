#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>> &grid) {
        if (grid.size() == 0 || grid[0].size() == 0) {
            return 0;
        }
        int rows = grid.size(), columns = grid[0].size();
        auto dp = vector < vector <int> > (rows, vector <int> (columns));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < rows; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < columns; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < columns; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[rows - 1][columns - 1];
    }
};
int main()
{
    vector<vector<int>> nums(3,vector<int>(3));
    int instance[3][3]={{1,3,1},{1,5,1},{4,2,1}};
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            nums[i][j]=instance[i][j];
        }
    Solution S;
    int res;
    res=S.minPathSum(nums);
    cout << res << endl;
    return 0;
}
