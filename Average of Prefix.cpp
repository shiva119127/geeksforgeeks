// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> v;
        int left=0;
        for(int i=0;i<n;i++){
            left+=arr[i];
            int res=left/(i+1);
            v.push_back(res);
        }
        return v;
    }
};