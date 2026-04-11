class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        //code here 
        sort(arr.begin(), arr.end());
        return arr[k-1];
        // int count = 1;
        // long  prev = arr[0];
        // if (k == 1){
        //      return prev;
        // }
        // for (int i = 1; i < arr.size(); i++) {
        //     if (arr[i] > prev) {
        //         count++;
        //         prev = arr[i];
        //     }
        //     if (count == k){
        //          return arr[i];
        //     }
        // }
        return -1;
    }
};