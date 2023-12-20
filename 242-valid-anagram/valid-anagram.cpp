class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!=t.size()){
           return false;
       }
       unordered_map<char,int>mp;
       for(int i=0; i<s.size(); i++){
           mp[s[i]]++;
           mp[t[i]]--;
       }
        for(int it=0; it<mp.size(); it++){
            if(mp[it]!=0){
                return false;
            }
        }

        return true;
    }
};