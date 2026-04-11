class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]<max){
                max=arr[i];
                return max;
            }
        }
        return -1;
        
    }
};