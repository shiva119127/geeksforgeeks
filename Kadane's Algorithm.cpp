class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        
        int summ=0;
        int maxs=INT_MIN;
        for(int i:arr){
            summ+=i;
            maxs=max(summ,maxs);
            if(summ<0){
                summ=0;
            }

        }
        return maxs;
        
    }
};