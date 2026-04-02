// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        int n=s.size();
        string ss="";
        for(int i=0;i<n;i++){
            if(s[i]!='a' && s[i] != 'e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
               ss.push_back(s[i]);
            }
            
            
        }
        s=ss;
        return s;
        
        
    }
};

// nrml loop chalega aur agar char vowel ke equal nahi rahega toh print warna ignore it 