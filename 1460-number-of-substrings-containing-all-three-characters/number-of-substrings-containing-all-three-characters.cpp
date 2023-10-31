class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j=0;
        int count=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
          
              while(mp['a']>0 &&mp['b']>0&&mp['c']>0){
                  count+=s.size()-j;
                  mp[s[i]]--;
                  i++;
              }   
           
          j++;
        }
       return count; 
    }
};