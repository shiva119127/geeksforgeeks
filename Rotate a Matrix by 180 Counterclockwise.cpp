class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        //code hear
        
        vector<vector<int>> b(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                b[n-i-1][n-j-1] = mat[i][j];
            }
        }

        mat = b;
    }
};