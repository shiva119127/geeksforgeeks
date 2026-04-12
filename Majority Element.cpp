class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int freq = 1;
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                freq++;
            } else {
                freq = 1;  
            }

            if (freq > n / 2) {   
                return arr[i];
            }
        }

        if (n == 1) return arr[0];

        return -1;  
    }
};