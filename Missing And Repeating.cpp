class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<int> v;
        int n = arr.size();
        int repet = 0;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]){
                repet = arr[i];
                v.push_back(repet);
                break;
            }
        }
        long long total = 1LL * n * (n + 1) / 2;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        int missing = total - sum + repet;
        v.push_back(missing);

        return v;
    }
};