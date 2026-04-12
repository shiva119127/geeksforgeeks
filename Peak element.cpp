class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        for( int i=; i<=2; i++ ){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                return i;
            }
        }
        return -1;
    }
};