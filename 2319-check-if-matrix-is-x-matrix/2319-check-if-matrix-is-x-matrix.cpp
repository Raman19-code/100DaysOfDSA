class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(i == j || i + j == n - 1) {
                    // Diagonal element must be non-zero
                    if(grid[i][j] == 0)
                        return false;
                }
                else {
                    // Non-diagonal element must be zero
                    if(grid[i][j] != 0)
                        return false;
                }
            }
        }

        return true;
    }
};