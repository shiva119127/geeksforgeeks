class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        int st=0;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j];
            while(sum>target){
                sum-=arr[st];
                st++;
            }
            if(sum==target)
            return{st+1,j+1};
        }
        return{-1};
    }
};