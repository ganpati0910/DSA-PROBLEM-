class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
            mp1[t[i]]--;
        }
       
      for(int i=0; i<mp1.size(); i++){
           if(mp1[i]!=0){
               return false;
           }
       }
        return true;
    }
};