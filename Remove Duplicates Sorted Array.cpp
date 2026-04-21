class Solution {
  public:
    vector<int> removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return {};
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                v.push_back(arr[i]);
            }
        }
        arr=v;
        return arr;
    }
};