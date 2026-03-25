class Solution {
  public:
    vector<int> pronicNumbers(int N) {
        
        vector<int> ans;
        
        for(int i = 0; ; i++)
        {
            int m = i * (i + 1);
            
            if(m > N)
                break;
                
            ans.push_back(m);
        }
        
        return ans;
    }
};
