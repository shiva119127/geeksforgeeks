class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        int count = 0;

        for(int i = 0; i < N; i++) {
            int incCount = 0;
            int decCount = 0;

            for(int j = 0; j < M - 1; j++) {
                if(Mat[i][j] < Mat[i][j + 1]) {
                    incCount++;
                }
                if(Mat[i][j] > Mat[i][j + 1]) {
                    decCount++;
                }
            }

            if(incCount == M - 1 || decCount == M - 1) {
                count++;
            }
        }

        return count;
    }
};