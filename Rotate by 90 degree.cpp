class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        
        vector<vector<int>> B(n, vector<int>(n));
        
        for(int i = n - 1; i >= 0; i--){
            for(int j = 0; j < n; j++){
                B[n - i - 1][j] = mat[j][i];
            }
        }
        
        mat = B;
    }
};