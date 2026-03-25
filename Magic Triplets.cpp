class Solution {
  public:
    int countTriplets(vector<int> nums) {
        int n=nums.size();
        int ans=0;
        for(int j=1;j<n-1;j++){
            int less=0;
            int greater=0;
            for(int i=0;i<j;i++){
                if(nums[i]<nums[j]){
                    less++;
                }
            }
            for(int k=j+1;k<n;k++){
                if(nums[j]<nums[k]){
                    greater++;
                }
            }
            ans=ans+less*greater;
        }
        return ans;
    }
};