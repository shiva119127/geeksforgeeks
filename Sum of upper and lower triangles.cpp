class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        int n = mat.size();
        
        int uppersum = 0;
        int lowersum = 0;

        // Upper sum
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                uppersum += mat[i][j];
            }
        }

        // Lower sum
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                lowersum += mat[i][j];
            }
        }

        return {uppersum, lowersum}; 
    }
};