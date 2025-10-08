class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(), n = mat[0].size();
        int R = 0, C = n-1;
        while(R <= m-1 && C >= 0) {
            if(tar == mat[R][C]) {
                return true;
            } else if(tar < mat[R][C]) {
                C--;
            }
            else {
                R++;
            }
        }
        return false;
    }
};
