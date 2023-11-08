class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       
        unordered_map<char,int>mp2;
        for(int i=0; i<s.size(); i++){
              mp2[s[i]]++;
              mp2[t[i]]--;
        }
         for(int i=0; i<mp2.size(); i++){
             if(mp2[i]!=0){
                 return false;
             }
         }
         return true;
        
    }
};