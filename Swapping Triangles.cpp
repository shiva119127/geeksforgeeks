class Solution {
  public:
    vector<vector<int>> swapTriangle(int N, vector<vector<int>> A) {
        //code hear
        vector<vector<int>> B(N, vector<int>(N));
        
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                B[i][j] = A[j][i];
            }
        }
        
        return B;
    }
};