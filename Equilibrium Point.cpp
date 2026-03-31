class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;

        for(int x : arr){
            totalSum += x;
        }

        int left = 0;

        for(int i = 0; i < n; i++){
            int right = totalSum - left - arr[i];

            if(left == right){
                return i;  
            }

            left += arr[i];
        }
        return -1; 
    }

};