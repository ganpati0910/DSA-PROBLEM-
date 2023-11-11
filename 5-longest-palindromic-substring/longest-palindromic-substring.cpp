class Solution {
public: 
    bool check(string&s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
            i++;
            j--;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        int start=0;
        int maxi=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(check(s,i,j)){
                   if(j-i+1>maxi){
                       maxi=j-i+1;
                    start=i;
                   }
                }
            }
        }
       
        return s.substr(start,maxi);
    }
};