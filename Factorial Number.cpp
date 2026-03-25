class Solution {
  public:
    int isFactorial(int N) {
        // code here
        int fact=1;
        for(int i=1;i<=N;i++){
            fact=fact*i;
            if(fact==N){
                return 1;
            }
            
        }
        return 0;
    }
};