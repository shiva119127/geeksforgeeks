// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int firstsum=0;
        int secsum=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    firstsum+=Grid[i][j];
                }
            }
        }
        for(int i=0;i<N;i++){
            secsum+=Grid[i][N-i-1];
        }
        int res=0;
        if(firstsum>=secsum){
            res=firstsum-secsum;
            
        }
        else{
            res=secsum-firstsum;
        }
        return res;
    }
};