
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>v;
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=max){
                v.push_back(arr[i]);
                max=arr[i];
            }
        }
        v.push_back(arr[n-1]);
        sort(v.rbegin(), v.rend());
        return v;
    }
};