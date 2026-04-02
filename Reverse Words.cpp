class Solution {
  public:
    string reverseWords(string &s) {
        vector<string> s2;
        string temp = "";
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '.') {
                if(temp != "")
                s2.push_back(temp);
                temp = "";
            } 
            else {
                temp += s[i];
            }
        }
        if(temp != "") 
        s2.push_back(temp); 

        string ans = "";
        for(int i = s2.size() - 1; i >= 0; i--){
            ans += s2[i];
            if(i != 0) ans += ".";
        }

        return ans;
    }
};

//pehle ek vector banao aur har elemnt ko as a word store karo fir as question says waisa logic lagao do 