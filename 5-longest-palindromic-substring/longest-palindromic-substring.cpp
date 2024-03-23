class Solution {
public:
    bool check(int i,int j, string&s){
        
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
        // we have to return a substring 
        int start=0;
        int maxi=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(check(i,j,s)){
                    if(maxi<j-i+1){
                        maxi=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxi);

        
    }
};