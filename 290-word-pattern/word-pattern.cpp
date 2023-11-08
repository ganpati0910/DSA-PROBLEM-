class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string>word;
         string temp="";
         for(int i=0; i<s.size(); i++){
             if(s[i]==' '){
                word.push_back(temp);
                temp="";
             }
             else{
                 temp+=s[i];
             }
         }
         word.push_back(temp);
         if(word.size()!=pattern.size()){
             return 0;
         }
       unordered_map<char,string>mp1;  
       unordered_map<string,char>mp2;
       for(int i=0; i<pattern.size(); i++){
           if(mp1.find(pattern[i])!=mp1.end()){
               if(mp1[pattern[i]]!=word[i]){
                   return 0;
               }
           }
           if(mp2.find(word[i])!=mp2.end()){
               if(mp2[word[i]]!=pattern[i]){
                   return 0;
               }
           }
           mp1[pattern[i]]=word[i];
           mp2[word[i]]=pattern[i];
       }
       return 1;
    }
};